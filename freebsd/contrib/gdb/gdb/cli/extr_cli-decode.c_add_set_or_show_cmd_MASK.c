
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var_types ;
struct cmd_list_element {int type; void* var; int var_type; } ;
typedef enum command_class { ____Placeholder_command_class } command_class ;
typedef enum cmd_types { ____Placeholder_cmd_types } cmd_types ;


 struct cmd_list_element* FUNC_0 (char*,int,int *,char*,struct cmd_list_element**) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct cmd_list_element*,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct cmd_list_element *
FUNC_3 (char *VAR_3,
       enum cmd_types VAR_4,
       enum command_class VAR_5,
       var_types VAR_6,
       void *VAR_7,
       char *VAR_8,
       struct cmd_list_element **VAR_9)
{
  struct cmd_list_element *VAR_10 = FUNC_0 (VAR_3, VAR_5, ((void*)0), VAR_8, VAR_9);
  FUNC_1 (VAR_4 == VAR_1 || VAR_4 == VAR_2);
  VAR_10->type = VAR_4;
  VAR_10->var_type = VAR_6;
  VAR_10->var = VAR_7;


  FUNC_2 (VAR_10, VAR_0);
  return VAR_10;
}
