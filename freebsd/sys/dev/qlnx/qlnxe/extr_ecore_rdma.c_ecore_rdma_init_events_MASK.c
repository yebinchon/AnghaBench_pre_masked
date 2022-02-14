
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_rdma_start_in_params {TYPE_2__* events; } ;
struct ecore_rdma_events {int context; int affiliated_event; int unaffiliated_event; } ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_4__ {int context; int affiliated_event; int unaffiliated_event; } ;
struct TYPE_3__ {struct ecore_rdma_events events; } ;



__attribute__((used)) static void FUNC_0(
 struct ecore_hwfn *VAR_0,
 struct ecore_rdma_start_in_params *VAR_1)
{
 struct ecore_rdma_events *VAR_2;

 VAR_2 = &VAR_0->p_rdma_info->events;

 VAR_2->unaffiliated_event = VAR_1->events->unaffiliated_event;
 VAR_2->affiliated_event = VAR_1->events->affiliated_event;
 VAR_2->context = VAR_1->events->context;
}
