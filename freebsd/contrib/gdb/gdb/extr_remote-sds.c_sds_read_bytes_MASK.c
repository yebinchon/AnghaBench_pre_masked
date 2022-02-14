
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ todo ;
typedef scalar_t__ memaddr ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3)
{
  int VAR_4;
  int VAR_5, VAR_6;
  unsigned char VAR_7[VAR_0];
  int VAR_8;
  int VAR_9;



  VAR_4 = 150;

  VAR_5 = VAR_3;
  while (VAR_3 > 0)
    {
      VAR_8 = FUNC_0 (VAR_3, VAR_4);

      VAR_7[0] = 12;
      VAR_7[1] = 0;
      VAR_7[2] = (int) (VAR_1 >> 24) & 0xff;
      VAR_7[3] = (int) (VAR_1 >> 16) & 0xff;
      VAR_7[4] = (int) (VAR_1 >> 8) & 0xff;
      VAR_7[5] = (int) (VAR_1) & 0xff;
      VAR_7[6] = (int) (VAR_8 >> 8) & 0xff;
      VAR_7[7] = (int) (VAR_8) & 0xff;
      VAR_7[8] = 1;

      VAR_6 = FUNC_1 (VAR_7, 9);

      if (VAR_6 - 2 != VAR_8)
 {
   return 0;
 }



      for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 VAR_2[VAR_9] = VAR_7[VAR_9 + 2];

      VAR_2 += VAR_8;
      VAR_1 += VAR_8;
      VAR_3 -= VAR_8;
    }

  return VAR_5;
}
