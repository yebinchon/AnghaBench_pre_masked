
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum return_reason { ____Placeholder_return_reason } return_reason ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;
typedef enum gdb_rc { ____Placeholder_gdb_rc } gdb_rc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;

enum mi_cmd_result
FUNC_2 (char *VAR_7, char **VAR_8, int VAR_9)
{
  enum gdb_rc VAR_10;

  if (VAR_9 != 1)
    {
      FUNC_1 (&VAR_5,
   "mi_cmd_thread_select: USAGE: threadnum.");
      return VAR_3;
    }
  else
    VAR_10 = FUNC_0 (VAR_6, VAR_8[0]);



  if ((int) VAR_10 < 0 && (enum return_reason) VAR_10 == VAR_4)
    return VAR_1;
  else if ((int) VAR_10 >= 0 && VAR_10 == VAR_0)
    return VAR_3;
  else
    return VAR_2;
}
