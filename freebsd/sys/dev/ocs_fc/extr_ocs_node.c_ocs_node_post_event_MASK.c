
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_8__ {int evtdepth; scalar_t__ req_free; int hold_frames; int sm; } ;
typedef TYPE_1__ ocs_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,void*) ;

void
FUNC_6(ocs_node_t *VAR_2, ocs_sm_event_t VAR_3, void *VAR_4)
{
 int VAR_5 = VAR_0;
 FUNC_0(VAR_2);

 FUNC_2(VAR_2);
  VAR_2->evtdepth ++;

  FUNC_5(&VAR_2->sm, VAR_3, VAR_4);





  if (!VAR_2->hold_frames && (VAR_2->evtdepth == 1)) {
   FUNC_4(VAR_2);
  }
  VAR_2->evtdepth --;




  if ((VAR_2->evtdepth == 0) && VAR_2->req_free) {
   VAR_5 = VAR_1;
  }
 FUNC_3(VAR_2);

 if (VAR_5) {
  FUNC_1(VAR_2);
 }

 return;
}
