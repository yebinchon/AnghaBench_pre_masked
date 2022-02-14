
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* sfunc ) (char*,int,struct cmd_list_element*) ;} ;
struct cmd_list_element {TYPE_1__ function; } ;


 int FUNC_0 (char*,int,struct cmd_list_element*) ;

__attribute__((used)) static void
FUNC_1 (struct cmd_list_element *VAR_0, char *VAR_1, int VAR_2)
{
  VAR_0->function.sfunc (VAR_1, VAR_2, VAR_0);
}
