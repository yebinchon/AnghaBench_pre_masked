
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_context {int mode; int (* func ) (char*,int ) ;} ;
struct cmd_list_element {int dummy; } ;


 struct dump_context* FUNC_0 (struct cmd_list_element*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2 (struct cmd_list_element *VAR_0, char *VAR_1, int VAR_2)
{
  struct dump_context *VAR_3 = FUNC_0 (VAR_0);
  VAR_3->func (VAR_1, VAR_3->mode);
}
