
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
typedef scalar_t__ LITTLENUM_TYPE ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,int,scalar_t__*) ;
 char* VAR_0 ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ VAR_1 ;

char *
FUNC_3 (int VAR_2, char *VAR_3, int *VAR_4)
{
  int VAR_5;
  LITTLENUM_TYPE VAR_6[4];
  char *VAR_7;
  int VAR_8;

  switch (VAR_2)
    {
    case 'f':
      VAR_5 = 2;
      break;

    case 'd':
      VAR_5 = 4;
      break;

    default:
      *VAR_4 = 0;
      return FUNC_0("bad call to md_atof");
    }

  VAR_7 = FUNC_1 (VAR_0, VAR_2, VAR_6);
  if (VAR_7)
    VAR_0 = VAR_7;

  *VAR_4 = VAR_5 * 2;

  if (VAR_1)
    {
      for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
 {
   FUNC_2 (VAR_3, (valueT) VAR_6[VAR_8], 2);
   VAR_3 += 2;
 }
    }
  else
    {
      for (VAR_8 = VAR_5 - 1; VAR_8 >= 0; VAR_8--)
 {
   FUNC_2 (VAR_3, (valueT) VAR_6[VAR_8], 2);
   VAR_3 += 2;
 }
    }

  return ((void*)0);
}
