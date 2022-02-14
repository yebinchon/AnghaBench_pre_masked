
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef scalar_t__ HOST_WIDE_INT ;


 char* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int,int*,int*,scalar_t__*) ;
 int FUNC_2 (char*,int *) ;
 char** VAR_1 ;
 int FUNC_3 (char*,char*,char*,char*,...) ;
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

  switch (FUNC_1 (VAR_2, VAR_3, VAR_4, &VAR_5, &VAR_6))
    {
    case 1:
      FUNC_5 (VAR_7, "ldm%?ia\t");
      break;

    case 2:
      FUNC_5 (VAR_7, "ldm%?ib\t");
      break;

    case 3:
      FUNC_5 (VAR_7, "ldm%?da\t");
      break;

    case 4:
      FUNC_5 (VAR_7, "ldm%?db\t");
      break;

    case 5:
      if (VAR_6 >= 0)
 FUNC_3 (VAR_7, "add%%?\t%s%s, %s%s, #%ld", VAR_0,
   VAR_1[VAR_4[0]], VAR_0, VAR_1[VAR_5],
   (long) VAR_6);
      else
 FUNC_3 (VAR_7, "sub%%?\t%s%s, %s%s, #%ld", VAR_0,
   VAR_1[VAR_4[0]], VAR_0, VAR_1[VAR_5],
   (long) -VAR_6);
      FUNC_2 (VAR_7, VAR_2);
      VAR_5 = VAR_4[0];
      FUNC_5 (VAR_7, "ldm%?ia\t");
      break;

    default:
      FUNC_0 ();
    }

  FUNC_3 (VAR_7 + FUNC_6 (VAR_7), "%s%s, {%s%s", VAR_0,
    VAR_1[VAR_5], VAR_0, VAR_1[VAR_4[0]]);

  for (VAR_8 = 1; VAR_8 < VAR_3; VAR_8++)
    FUNC_3 (VAR_7 + FUNC_6 (VAR_7), ", %s%s", VAR_0,
      VAR_1[VAR_4[VAR_8]]);

  FUNC_4 (VAR_7, "}\t%@ phole ldm");

  FUNC_2 (VAR_7, VAR_2);
  return "";
}
