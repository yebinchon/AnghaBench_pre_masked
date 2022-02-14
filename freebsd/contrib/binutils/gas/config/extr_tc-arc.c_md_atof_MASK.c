
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
typedef int LITTLENUM_TYPE ;


 int VAR_0 ;
 char* FUNC_0 (char*,int,int *) ;
 char* VAR_1 ;
 int FUNC_1 (char*,int ,int) ;

char *
FUNC_2 (int VAR_2, char *VAR_3, int *VAR_4)
{
  int VAR_5;
  LITTLENUM_TYPE VAR_6[VAR_0];
  LITTLENUM_TYPE *VAR_7;
  char *VAR_8;

  switch (VAR_2)
    {
    case 'f':
    case 'F':
      VAR_5 = 2;
      break;

    case 'd':
    case 'D':
      VAR_5 = 4;
      break;

    default:
      *VAR_4 = 0;
      return "bad call to md_atof";
    }

  VAR_8 = FUNC_0 (VAR_1, VAR_2, VAR_6);
  if (VAR_8)
    VAR_1 = VAR_8;
  *VAR_4 = VAR_5 * sizeof (LITTLENUM_TYPE);
  for (VAR_7 = VAR_6; VAR_5--;)
    {
      FUNC_1 (VAR_3, (valueT) (*VAR_7++), sizeof (LITTLENUM_TYPE));
      VAR_3 += sizeof (LITTLENUM_TYPE);
    }

  return ((void*)0);
}
