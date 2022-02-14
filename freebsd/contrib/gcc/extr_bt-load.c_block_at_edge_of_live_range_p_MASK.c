
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* btr_user ;
typedef TYPE_2__* btr_def ;
struct TYPE_5__ {scalar_t__ bb; TYPE_1__* uses; scalar_t__ other_btr_uses_after_use; scalar_t__ other_btr_uses_before_def; } ;
struct TYPE_4__ {scalar_t__ bb; struct TYPE_4__* next; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (int VAR_0, btr_def VAR_1)
{
  if (VAR_1->other_btr_uses_before_def && FUNC_0 (VAR_0) == VAR_1->bb)
    return 1;
  else if (VAR_1->other_btr_uses_after_use)
    {
      btr_user VAR_2;
      for (VAR_2 = VAR_1->uses; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
 if (FUNC_0 (VAR_0) == VAR_2->bb)
   return 1;
    }
  return 0;
}
