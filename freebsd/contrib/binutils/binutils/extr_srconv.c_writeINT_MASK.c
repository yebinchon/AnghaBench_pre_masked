
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (int VAR_2, unsigned char *VAR_3, int *VAR_4, int VAR_5, FILE *VAR_6)
{
  int VAR_7 = *VAR_4 / 8;

  if (VAR_5 == -2)
    VAR_5 = VAR_0;
  else if (VAR_5 == -1)
    VAR_5 = 0;

  if (VAR_7 > 240)
    {

      FUNC_1 (VAR_6, VAR_3, *VAR_4, VAR_1 | 0x1000);
      *VAR_4 = 16;
      VAR_7 = *VAR_4 / 8;
    }

  switch (VAR_5)
    {
    case 0:
      break;
    case 1:
      VAR_3[VAR_7] = VAR_2;
      break;
    case 2:
      VAR_3[VAR_7 + 0] = VAR_2 >> 8;
      VAR_3[VAR_7 + 1] = VAR_2;
      break;
    case 4:
      VAR_3[VAR_7 + 0] = VAR_2 >> 24;
      VAR_3[VAR_7 + 1] = VAR_2 >> 16;
      VAR_3[VAR_7 + 2] = VAR_2 >> 8;
      VAR_3[VAR_7 + 3] = VAR_2 >> 0;
      break;
    default:
      FUNC_0 ();
    }
  *VAR_4 += VAR_5 * 8;
}
