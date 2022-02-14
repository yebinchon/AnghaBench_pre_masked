
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_stack_frame_args {int level; int source; int args; struct frame_info* fi; } ;
struct frame_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int VAR_1 ;

void
FUNC_1 (struct frame_info *VAR_2, int VAR_3, int VAR_4)
{
  struct print_stack_frame_args VAR_5;

  VAR_5.fi = VAR_2;
  VAR_5.level = VAR_3;
  VAR_5.source = VAR_4;
  VAR_5.args = 1;

  FUNC_0 (VAR_1, (char *) &VAR_5, "", VAR_0);
}
