
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {int dummy; } ;
struct TYPE_2__ {int enable_p; int kind; } ;
typedef TYPE_1__ args_for_catchpoint_enable ;


 struct symtab_and_line* FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (void *VAR_0)
{
  args_for_catchpoint_enable *VAR_1 = VAR_0;
  struct symtab_and_line *VAR_2;
  VAR_2 = FUNC_0 (VAR_1->kind, VAR_1->enable_p);
  if (VAR_2 == ((void*)0))
    return 0;
  else if (VAR_2 == (struct symtab_and_line *) -1)
    return -1;
  else
    return 1;
}
