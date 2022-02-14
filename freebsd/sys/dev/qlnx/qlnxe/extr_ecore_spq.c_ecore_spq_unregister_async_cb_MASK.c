
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_spq; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
struct TYPE_2__ {int * async_comp_cb; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct ecore_hwfn *VAR_2,
         enum protocol_type VAR_3)
{
 if (!VAR_2->p_spq || (VAR_3 >= VAR_0)) {
  return;
 }

 VAR_2->p_spq->async_comp_cb[VAR_3] = VAR_1;
}
