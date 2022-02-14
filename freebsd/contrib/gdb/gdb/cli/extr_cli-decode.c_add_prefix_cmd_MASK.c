
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {char* prefixname; int allow_unknown; struct cmd_list_element** prefixlist; } ;
typedef enum command_class { ____Placeholder_command_class } command_class ;


 struct cmd_list_element* FUNC_0 (char*,int,void (*) (char*,int),char*,struct cmd_list_element**) ;

struct cmd_list_element *
FUNC_1 (char *VAR_0, enum command_class VAR_1, void (*VAR_2) (char *, int),
  char *VAR_3, struct cmd_list_element **VAR_4,
  char *VAR_5, int VAR_6,
  struct cmd_list_element **VAR_7)
{
  struct cmd_list_element *VAR_8 = FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_7);
  VAR_8->prefixlist = VAR_4;
  VAR_8->prefixname = VAR_5;
  VAR_8->allow_unknown = VAR_6;
  return VAR_8;
}
