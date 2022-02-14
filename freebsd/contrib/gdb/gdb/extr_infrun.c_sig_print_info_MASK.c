
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 int FUNC_0 (char*,...) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (enum target_signal VAR_3)
{
  char *VAR_4 = FUNC_2 (VAR_3);
  int VAR_5 = 13 - FUNC_1 (VAR_4);

  if (VAR_5 <= 0)
    VAR_5 = 0;

  FUNC_0 ("%s", VAR_4);
  FUNC_0 ("%*.*s ", VAR_5, VAR_5, "                 ");
  FUNC_0 ("%s\t", VAR_2[VAR_3] ? "Yes" : "No");
  FUNC_0 ("%s\t", VAR_0[VAR_3] ? "Yes" : "No");
  FUNC_0 ("%s\t\t", VAR_1[VAR_3] ? "Yes" : "No");
  FUNC_0 ("%s\n", FUNC_3 (VAR_3));
}
