
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 char* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int *) ;
 char** VAR_1 ;
 int FUNC_2 (char*,char*,char*,char*,...) ;
 int FUNC_3 (int *,int,int*,int*,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

const char *
FUNC_7 (rtx *VAR_2, int VAR_3)
{
  int VAR_4[4];
  int VAR_5;
  HOST_WIDE_INT VAR_6;
  char VAR_7[100];
  int VAR_8;

  switch (FUNC_3 (VAR_2, VAR_3, VAR_4, &VAR_5, &VAR_6))
    {
    case 1:
      FUNC_5 (VAR_7, "stm%?ia\t");
      break;

    case 2:
      FUNC_5 (VAR_7, "stm%?ib\t");
      break;

    case 3:
      FUNC_5 (VAR_7, "stm%?da\t");
      break;

    case 4:
      FUNC_5 (VAR_7, "stm%?db\t");
      break;

    default:
      FUNC_0 ();
    }

  FUNC_2 (VAR_7 + FUNC_6 (VAR_7), "%s%s, {%s%s", VAR_0,
    VAR_1[VAR_5], VAR_0, VAR_1[VAR_4[0]]);

  for (VAR_8 = 1; VAR_8 < VAR_3; VAR_8++)
    FUNC_2 (VAR_7 + FUNC_6 (VAR_7), ", %s%s", VAR_0,
      VAR_1[VAR_4[VAR_8]]);

  FUNC_4 (VAR_7, "}\t%@ phole stm");

  FUNC_1 (VAR_7, VAR_2);
  return "";
}
