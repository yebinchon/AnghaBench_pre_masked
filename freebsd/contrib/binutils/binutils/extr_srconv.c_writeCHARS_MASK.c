
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,unsigned char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1, unsigned char *VAR_2, int *VAR_3, int VAR_4, FILE *VAR_5)
{
  int VAR_6 = *VAR_3 / 8;

  if (VAR_6 > 240)
    {

      FUNC_0 (VAR_5, VAR_2, *VAR_3, VAR_0 | 0x1000);
      *VAR_3 = 16;
      VAR_6 = *VAR_3 / 8;
    }

  if (VAR_4 == 0)
    {

      VAR_4 = FUNC_2 (VAR_1);
      VAR_2[VAR_6++] = VAR_4;
    }


  FUNC_1 (VAR_2 + VAR_6, VAR_1, VAR_4);
  VAR_6 += VAR_4;
  *VAR_3 = VAR_6 * 8;
}
