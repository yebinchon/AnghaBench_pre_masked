
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashval_t ;
typedef scalar_t__ PTR ;


 int FUNC_0 (int,int,int) ;

hashval_t
FUNC_1 (const PTR VAR_0 ,
                register size_t VAR_1 ,
                register hashval_t VAR_2 )

{
  register const unsigned char *VAR_3 = (const unsigned char *)VAR_0;
  register hashval_t VAR_4,VAR_5,VAR_6,VAR_7;


  VAR_7 = VAR_1;
  VAR_4 = VAR_5 = 0x9e3779b9;
  VAR_6 = VAR_2;






  if (sizeof (hashval_t) == 4 && (((size_t)VAR_3)&3) == 0)
    while (VAR_7 >= 12)
      {
 VAR_4 += *(hashval_t *)(VAR_3+0);
 VAR_5 += *(hashval_t *)(VAR_3+4);
 VAR_6 += *(hashval_t *)(VAR_3+8);
 FUNC_0(VAR_4,VAR_5,VAR_6);
 VAR_3 += 12; VAR_7 -= 12;
      }
  else

    while (VAR_7 >= 12)
      {
 VAR_4 += (VAR_3[0] +((hashval_t)VAR_3[1]<<8) +((hashval_t)VAR_3[2]<<16) +((hashval_t)VAR_3[3]<<24));
 VAR_5 += (VAR_3[4] +((hashval_t)VAR_3[5]<<8) +((hashval_t)VAR_3[6]<<16) +((hashval_t)VAR_3[7]<<24));
 VAR_6 += (VAR_3[8] +((hashval_t)VAR_3[9]<<8) +((hashval_t)VAR_3[10]<<16)+((hashval_t)VAR_3[11]<<24));
 FUNC_0(VAR_4,VAR_5,VAR_6);
 VAR_3 += 12; VAR_7 -= 12;
      }


  VAR_6 += VAR_1;
  switch(VAR_7)
    {
    case 11: VAR_6+=((hashval_t)VAR_3[10]<<24);
    case 10: VAR_6+=((hashval_t)VAR_3[9]<<16);
    case 9 : VAR_6+=((hashval_t)VAR_3[8]<<8);

    case 8 : VAR_5+=((hashval_t)VAR_3[7]<<24);
    case 7 : VAR_5+=((hashval_t)VAR_3[6]<<16);
    case 6 : VAR_5+=((hashval_t)VAR_3[5]<<8);
    case 5 : VAR_5+=VAR_3[4];
    case 4 : VAR_4+=((hashval_t)VAR_3[3]<<24);
    case 3 : VAR_4+=((hashval_t)VAR_3[2]<<16);
    case 2 : VAR_4+=((hashval_t)VAR_3[1]<<8);
    case 1 : VAR_4+=VAR_3[0];

    }
  FUNC_0(VAR_4,VAR_5,VAR_6);

  return VAR_6;
}
