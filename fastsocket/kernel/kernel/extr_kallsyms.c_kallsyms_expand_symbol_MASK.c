
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 const u8 *VAR_7, *VAR_8;


 VAR_8 = &VAR_0[VAR_3];
 VAR_5 = *VAR_8;
 VAR_8++;





 VAR_3 += VAR_5 + 1;





 while (VAR_5) {
  VAR_7 = &VAR_2[VAR_1[*VAR_8]];
  VAR_8++;
  VAR_5--;

  while (*VAR_7) {
   if (VAR_6) {
    *VAR_4 = *VAR_7;
    VAR_4++;
   } else
    VAR_6 = 1;
   VAR_7++;
  }
 }

 *VAR_4 = '\0';


 return VAR_3;
}
