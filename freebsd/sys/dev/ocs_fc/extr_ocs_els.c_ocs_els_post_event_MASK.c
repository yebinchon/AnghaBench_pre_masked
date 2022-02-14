
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
typedef int ocs_node_t ;
struct TYPE_4__ {scalar_t__ els_evtdepth; scalar_t__ els_req_free; int els_sm; int * node; } ;
typedef TYPE_1__ ocs_io_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,void*) ;

void
FUNC_4(ocs_io_t *VAR_0, ocs_sm_event_t VAR_1, void *VAR_2)
{

 ocs_node_t *VAR_3 = VAR_0->node;
 FUNC_1(VAR_3);
  VAR_0->els_evtdepth ++;
  FUNC_3(&VAR_0->els_sm, VAR_1, VAR_2);
  VAR_0->els_evtdepth --;
 FUNC_2(VAR_3);
 if (VAR_0->els_evtdepth == 0 && VAR_0->els_req_free) {
  FUNC_0(VAR_0);
 }
}
