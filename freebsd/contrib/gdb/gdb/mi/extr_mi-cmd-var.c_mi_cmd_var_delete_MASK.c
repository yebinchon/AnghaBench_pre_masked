
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 struct cleanup* FUNC_2 (int ,char**) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct varobj*,int *,int) ;
 struct varobj* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;

enum mi_cmd_result
FUNC_9 (char *VAR_3, char **VAR_4, int VAR_5)
{
  char *VAR_6;
  char *VAR_7;
  struct varobj *VAR_8;
  int VAR_9;
  int VAR_10 = 0;
  struct cleanup *VAR_11;

  if (VAR_5 < 1 || VAR_5 > 2)
    FUNC_1 ("mi_cmd_var_delete: Usage: [-c] EXPRESSION.");

  VAR_6 = FUNC_8 (VAR_4[0]);


  VAR_11 = FUNC_2 (VAR_1, &VAR_6);



  if (VAR_5 == 1)
    {
      if (FUNC_3 (VAR_6, "-c") == 0)
 FUNC_1 ("mi_cmd_var_delete: Missing required argument after '-c': variable object name");
      if (*VAR_6 == '-')
 FUNC_1 ("mi_cmd_var_delete: Illegal variable object name");
    }



  if (VAR_5 == 2)
    {
      VAR_7 = FUNC_8 (VAR_4[1]);
      if (FUNC_3 (VAR_6, "-c") != 0)
 FUNC_1 ("mi_cmd_var_delete: Invalid option.");
      VAR_10 = 1;
      FUNC_7 (VAR_6);
      VAR_6 = FUNC_8 (VAR_7);
      FUNC_7 (VAR_7);
    }




  VAR_8 = FUNC_6 (VAR_6);

  if (VAR_8 == ((void*)0))
    FUNC_1 ("mi_cmd_var_delete: Variable object not found.");

  VAR_9 = FUNC_5 (VAR_8, ((void*)0), VAR_10);

  FUNC_4 (VAR_2, "ndeleted", VAR_9);

  FUNC_0 (VAR_11);
  return VAR_0;
}
