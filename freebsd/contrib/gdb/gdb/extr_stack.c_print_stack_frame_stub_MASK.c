
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_stack_frame_args {int args; int source; int level; int fi; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1 (void *VAR_0)
{
  struct print_stack_frame_args *VAR_1 = (struct print_stack_frame_args *) VAR_0;

  FUNC_0 (VAR_1->fi, VAR_1->level, VAR_1->source, VAR_1->args);
  return 0;
}
