
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

char *
FUNC_3 (int VAR_2, char *VAR_3, int *VAR_4)
{
  int VAR_5;
  int VAR_6;
  LITTLENUM_TYPE VAR_7 [VAR_0];
  char * VAR_8;

  switch (VAR_2)
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


    default:
      *VAR_4 = 0;
      return FUNC_0("Bad call to md_atof()");
    }

  VAR_8 = FUNC_1 (VAR_1, VAR_2, VAR_7);
  if (VAR_8)
    VAR_1 = VAR_8;
  * VAR_4 = VAR_6 * sizeof (LITTLENUM_TYPE);

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
      FUNC_2 (VAR_3, (valueT) VAR_7[VAR_5],
     sizeof (LITTLENUM_TYPE));
      VAR_3 += sizeof (LITTLENUM_TYPE);
    }

  return 0;
}
