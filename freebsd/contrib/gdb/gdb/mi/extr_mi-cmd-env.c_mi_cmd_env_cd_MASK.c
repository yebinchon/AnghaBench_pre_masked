
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

enum mi_cmd_result
FUNC_2 (char *VAR_1, char **VAR_2, int VAR_3)
{
  if (VAR_3 == 0 || VAR_3 > 1)
    FUNC_1 ("mi_cmd_env_cd: Usage DIRECTORY");

  FUNC_0 ("cd", VAR_2[0]);

  return VAR_0;
}
