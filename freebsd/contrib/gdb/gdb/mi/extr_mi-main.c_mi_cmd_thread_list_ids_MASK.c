
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;
typedef enum gdb_rc { ____Placeholder_gdb_rc } gdb_rc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;

enum mi_cmd_result
FUNC_2 (char *VAR_6, char **VAR_7, int VAR_8)
{
  enum gdb_rc VAR_9 = VAR_2;

  if (VAR_8 != 0)
    {
      FUNC_1 (&VAR_4,
   "mi_cmd_thread_list_ids: No arguments required.");
      return VAR_3;
    }
  else
    VAR_9 = FUNC_0 (VAR_5);

  if (VAR_9 == VAR_0)
    return VAR_1;
  else
    return VAR_2;
}
