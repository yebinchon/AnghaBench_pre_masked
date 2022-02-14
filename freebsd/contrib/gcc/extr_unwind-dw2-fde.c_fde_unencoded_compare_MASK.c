
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct object {int dummy; } ;
struct TYPE_4__ {scalar_t__ pc_begin; } ;
typedef TYPE_1__ fde ;
typedef scalar_t__ _Unwind_Ptr ;



__attribute__((used)) static int
FUNC_0 (struct object *VAR_0 __attribute__((unused)),
         const fde *VAR_1, const fde *VAR_2)
{
  _Unwind_Ptr VAR_3 = *(_Unwind_Ptr *) VAR_1->pc_begin;
  _Unwind_Ptr VAR_4 = *(_Unwind_Ptr *) VAR_2->pc_begin;

  if (VAR_3 > VAR_4)
    return 1;
  if (VAR_3 < VAR_4)
    return -1;
  return 0;
}
