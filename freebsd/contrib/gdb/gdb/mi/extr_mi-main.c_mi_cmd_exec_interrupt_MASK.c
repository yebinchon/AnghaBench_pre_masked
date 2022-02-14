
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;

enum mi_cmd_result
FUNC_7 (char *VAR_8, int VAR_9)
{
  if (!VAR_6)
    {
      FUNC_4 (&VAR_3,
   "mi_cmd_exec_interrupt: Inferior not executing.");
      return VAR_0;
    }
  FUNC_1 (VAR_8, VAR_9);
  if (VAR_2)
    FUNC_0 (VAR_2, VAR_5);
  FUNC_0 ("^done", VAR_5);
  FUNC_5 (VAR_2);
  if (VAR_4)
    VAR_2 = FUNC_6 (VAR_4);
  FUNC_5 (VAR_4);
  VAR_4 = ((void*)0);
  FUNC_2 (VAR_7, VAR_5);
  FUNC_3 (VAR_7);
  FUNC_0 ("\n", VAR_5);
  return VAR_1;
}
