
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int hook_in; scalar_t__ hook_post; } ;
struct cleanup {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (scalar_t__,char*) ;
 struct cleanup* FUNC_2 (int ,struct cmd_list_element*) ;

void
FUNC_3 (struct cmd_list_element *VAR_1)
{
  if ((VAR_1->hook_post) && (!VAR_1->hook_in))
    {
      struct cleanup *VAR_2 = FUNC_2 (VAR_0, VAR_1);
      VAR_1->hook_in = 1;
      FUNC_1 (VAR_1->hook_post, (char *) 0);
      FUNC_0 (VAR_2);
    }
}
