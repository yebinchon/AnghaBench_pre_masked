
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objc_submethod_helper_data {scalar_t__ (* f ) (int ,int ) ;int new_pc; int pc; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (void * VAR_0)
{
  struct objc_submethod_helper_data *VAR_1 =
    (struct objc_submethod_helper_data *) VAR_0;

  if (VAR_1->f (VAR_1->pc, VAR_1->new_pc) == 0)
    return 1;
  else
    return 0;
}
