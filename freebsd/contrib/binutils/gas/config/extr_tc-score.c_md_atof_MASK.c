
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
typedef scalar_t__ LITTLENUM_TYPE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,int,scalar_t__*) ;
 char* VAR_1 ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ VAR_2 ;

char *
FUNC_3 (int VAR_3, char *VAR_4, int *VAR_5)
{
  int VAR_6;
  LITTLENUM_TYPE VAR_7[VAR_0];
  char *VAR_8;
  int VAR_9;

  switch (VAR_3)
    {
    case 'f':
    case 'F':
    case 's':
    case 'S':
      VAR_6 = 2;
      break;
    case 'd':
    case 'D':
    case 'r':
    case 'R':
      VAR_6 = 4;
      break;
    case 'x':
    case 'X':
    case 'p':
    case 'P':
      VAR_6 = 6;
      break;
    default:
      *VAR_5 = 0;
      return FUNC_0("bad call to MD_ATOF()");
    }

  VAR_8 = FUNC_1 (VAR_1, VAR_3, VAR_7);
  if (VAR_8)
    VAR_1 = VAR_8;
  *VAR_5 = VAR_6 * 2;

  if (VAR_2)
    {
      for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
        {
          FUNC_2 (VAR_4, (valueT) VAR_7[VAR_9], 2);
          VAR_4 += 2;
        }
    }
  else
    {
      for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += 2)
        {
          FUNC_2 (VAR_4, (valueT) VAR_7[VAR_9 + 1], 2);
          FUNC_2 (VAR_4 + 2, (valueT) VAR_7[VAR_9], 2);
          VAR_4 += 4;
        }
    }

  return 0;
}
