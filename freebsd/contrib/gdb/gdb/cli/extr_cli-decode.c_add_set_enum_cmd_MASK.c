
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {char const** enums; } ;
typedef enum command_class { ____Placeholder_command_class } command_class ;


 struct cmd_list_element* FUNC_0 (char*,int,int ,char const**,char*,struct cmd_list_element**) ;
 int VAR_0 ;

struct cmd_list_element *
FUNC_1 (char *VAR_1,
    enum command_class VAR_2,
    const char *VAR_3[],
    const char **VAR_4,
    char *VAR_5,
    struct cmd_list_element **VAR_6)
{
  struct cmd_list_element *VAR_7
  = FUNC_0 (VAR_1, VAR_2, VAR_0, VAR_4, VAR_5, VAR_6);
  VAR_7->enums = VAR_3;

  return VAR_7;
}
