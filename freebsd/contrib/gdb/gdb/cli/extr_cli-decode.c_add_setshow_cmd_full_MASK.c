
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var_types ;
struct cmd_list_element {int dummy; } ;
typedef enum command_class { ____Placeholder_command_class } command_class ;
typedef int cmd_sfunc_ftype ;


 struct cmd_list_element* FUNC_0 (char*,int ,int,int ,void*,char*,struct cmd_list_element**) ;
 int VAR_0 ;
 int FUNC_1 (struct cmd_list_element*,int *) ;
 int VAR_1 ;

void
FUNC_2 (char *VAR_2,
        enum command_class VAR_3,
        var_types VAR_4, void *VAR_5,
        char *VAR_6, char *VAR_7,
        cmd_sfunc_ftype *VAR_8, cmd_sfunc_ftype *VAR_9,
        struct cmd_list_element **VAR_10,
        struct cmd_list_element **VAR_11,
        struct cmd_list_element **VAR_12,
        struct cmd_list_element **VAR_13)
{
  struct cmd_list_element *VAR_14;
  struct cmd_list_element *VAR_15;
  VAR_14 = FUNC_0 (VAR_2, VAR_0, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_10);
  if (VAR_8 != ((void*)0))
    FUNC_1 (VAR_14, VAR_8);
  VAR_15 = FUNC_0 (VAR_2, VAR_1, VAR_3, VAR_4, VAR_5,
         VAR_7, VAR_11);
  if (VAR_9 != ((void*)0))
    FUNC_1 (VAR_15, VAR_9);

  if (VAR_12 != ((void*)0))
    *VAR_12 = VAR_14;
  if (VAR_13 != ((void*)0))
    *VAR_13 = VAR_15;
}
