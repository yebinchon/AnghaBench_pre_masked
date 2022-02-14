
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ memaddr ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3)
{
  int VAR_4;
  int VAR_5;
  unsigned char VAR_6[VAR_0];
  int VAR_7;
  int VAR_8;



  VAR_4 = 150;

  VAR_5 = VAR_3;
  while (VAR_3 > 0)
    {
      VAR_7 = FUNC_0 (VAR_3, VAR_4);

      VAR_6[0] = 13;
      VAR_6[1] = 0;
      VAR_6[2] = (int) (VAR_1 >> 24) & 0xff;
      VAR_6[3] = (int) (VAR_1 >> 16) & 0xff;
      VAR_6[4] = (int) (VAR_1 >> 8) & 0xff;
      VAR_6[5] = (int) (VAR_1) & 0xff;
      VAR_6[6] = 1;
      VAR_6[7] = 0;

      for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 VAR_6[VAR_8 + 8] = VAR_2[VAR_8];

      FUNC_1 (VAR_6, 8 + VAR_7);



      VAR_2 += VAR_7;
      VAR_1 += VAR_7;
      VAR_3 -= VAR_7;
    }
  return VAR_5;
}
