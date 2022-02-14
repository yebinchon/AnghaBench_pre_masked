
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
typedef scalar_t__ LITTLENUM_TYPE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,int,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ VAR_4 ;

char *
FUNC_4 (int VAR_5, char * VAR_6, int * VAR_7)
{
  int VAR_8;
  LITTLENUM_TYPE VAR_9[VAR_0];
  char *VAR_10;
  int VAR_11;

  switch (VAR_5)
    {
    case 'f':
    case 'F':
    case 's':
    case 'S':
      VAR_8 = 2;
      break;

    case 'd':
    case 'D':
    case 'r':
    case 'R':
      VAR_8 = 4;
      break;

    case 'x':
    case 'X':
      VAR_8 = 6;
      break;

    case 'p':
    case 'P':
      VAR_8 = 6;
      break;

    default:
      *VAR_7 = 0;
      return FUNC_1("bad call to MD_ATOF()");
    }

  VAR_10 = FUNC_2 (VAR_3, VAR_5, VAR_9);
  if (VAR_10)
    VAR_3 = VAR_10;
  *VAR_7 = VAR_8 * 2;

  if (VAR_4)
    {
      for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
 {
   FUNC_3 (VAR_6, (valueT) VAR_9[VAR_11], 2);
   VAR_6 += 2;
 }
    }
  else
    {
      if (FUNC_0 (VAR_1, VAR_2))
 for (VAR_11 = VAR_8 - 1; VAR_11 >= 0; VAR_11--)
   {
     FUNC_3 (VAR_6, (valueT) VAR_9[VAR_11], 2);
     VAR_6 += 2;
   }
      else


 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11 += 2)
   {
     FUNC_3 (VAR_6, (valueT) VAR_9[VAR_11 + 1], 2);
     FUNC_3 (VAR_6 + 2, (valueT) VAR_9[VAR_11], 2);
     VAR_6 += 4;
   }
    }

  return 0;
}
