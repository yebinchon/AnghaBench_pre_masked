
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_spq; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int ecore_spq_async_comp_cb ;
struct TYPE_2__ {int * async_comp_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

enum _ecore_status_t
FUNC_0(struct ecore_hwfn *VAR_3,
       enum protocol_type VAR_4,
       ecore_spq_async_comp_cb VAR_5)
{
 if (!VAR_3->p_spq || (VAR_4 >= VAR_2)) {
  return VAR_0;
 }

 VAR_3->p_spq->async_comp_cb[VAR_4] = VAR_5;
 return VAR_1;
}
