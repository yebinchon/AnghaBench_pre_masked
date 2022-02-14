
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct find_targ_sec_arg {scalar_t__ targ_index; TYPE_1__** resultp; } ;
typedef int bfd ;
struct TYPE_3__ {scalar_t__ target_index; } ;
typedef TYPE_1__ asection ;



__attribute__((used)) static void
FUNC_0 (bfd *VAR_0, asection *VAR_1, void *VAR_2)
{
  struct find_targ_sec_arg *VAR_3 = (struct find_targ_sec_arg *) VAR_2;
  if (VAR_1->target_index == VAR_3->targ_index)
    *VAR_3->resultp = VAR_1;
}
