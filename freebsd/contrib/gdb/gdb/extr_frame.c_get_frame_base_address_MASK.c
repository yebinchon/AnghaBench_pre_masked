
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_info {scalar_t__ unwind; int base_cache; int next; TYPE_1__* base; int prologue_cache; } ;
struct TYPE_2__ {scalar_t__ unwind; int (* this_base ) (int ,int *) ;} ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct frame_info*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

CORE_ADDR
FUNC_4 (struct frame_info *VAR_1)
{
  if (FUNC_1 (VAR_1) != VAR_0)
    return 0;
  if (VAR_1->base == ((void*)0))
    VAR_1->base = FUNC_0 (VAR_1->next);


  if (VAR_1->base->unwind == VAR_1->unwind)
    return VAR_1->base->this_base (VAR_1->next, &VAR_1->prologue_cache);
  return VAR_1->base->this_base (VAR_1->next, &VAR_1->base_cache);
}
