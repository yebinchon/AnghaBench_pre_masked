
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;


struct TYPE_24__ {int * current_state; } ;
struct TYPE_22__ {int fc_id; } ;
struct TYPE_23__ {int nodes_free_list; int active_ios_lock; int pend_frames_lock; TYPE_7__ sm; struct TYPE_23__* sport; int node_list; TYPE_16__ rnode; int * lookup; struct TYPE_23__* ocs; scalar_t__ fcp2device; int gidpt_delay_timer; int hw; scalar_t__ refound; struct TYPE_23__* xport; } ;
typedef TYPE_1__ ocs_xport_t ;
typedef TYPE_1__ ocs_t ;
typedef TYPE_1__ ocs_sport_t ;
typedef TYPE_1__ ocs_node_t ;
typedef int ocs_hw_rtn_e ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_16__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,char*,...) ;
 TYPE_1__* FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ,int *) ;
 int FUNC_16 (TYPE_7__*,int ,int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *,int ,int *) ;

int32_t
FUNC_21(ocs_node_t *VAR_5)
{
 ocs_sport_t *VAR_6;
 ocs_t *VAR_7;
 ocs_xport_t *VAR_8;
 ocs_hw_rtn_e VAR_9 = 0;
 ocs_node_t *VAR_10 = ((void*)0);
 int VAR_11 = VAR_0;

 FUNC_2(VAR_5, -1);
 FUNC_2(VAR_5->sport, -1);
 FUNC_2(VAR_5->ocs, -1);
 VAR_6 = VAR_5->sport;
 FUNC_2(VAR_6, -1);
 VAR_7 = VAR_5->ocs;
 FUNC_2(VAR_7->xport, -1);
 VAR_8 = VAR_7->xport;

 FUNC_1(VAR_5, "Free'd\n");

 if(VAR_5->refound) {




  VAR_10 = FUNC_13(VAR_5->sport, VAR_1);
 }


 FUNC_17(VAR_6);
  FUNC_10(&VAR_6->node_list, VAR_5);


  if (FUNC_0((VAR_9 = FUNC_7(&VAR_7->hw, &VAR_5->rnode)))) {
   FUNC_12(VAR_7, "ocs_hw_node_free failed: %d\n", VAR_9);
   VAR_9 = -1;
  }


  if (FUNC_19(&VAR_5->gidpt_delay_timer)) {
   FUNC_4(&VAR_5->gidpt_delay_timer);
  }

  if (VAR_5->fcp2device) {
   FUNC_3(VAR_5);
  }


  if (VAR_6->lookup == ((void*)0)) {
   FUNC_12(VAR_5->ocs, "assertion failed: sport lookup is NULL\n");
   FUNC_18(VAR_6);
   return -1;
  }

  FUNC_20(VAR_6->lookup, VAR_5->rnode.fc_id, ((void*)0));





  if (FUNC_9(&VAR_6->node_list)) {
   VAR_11 = VAR_4;
  }

 FUNC_18(VAR_6);

 if (VAR_11) {
  FUNC_16(&VAR_6->sm, VAR_2, ((void*)0));
 }

 VAR_5->sport = ((void*)0);
 VAR_5->sm.current_state = ((void*)0);

 FUNC_14(VAR_5);
 FUNC_11(&VAR_5->pend_frames_lock);
 FUNC_11(&VAR_5->active_ios_lock);


 FUNC_5(VAR_7);
  FUNC_8(&VAR_8->nodes_free_list, VAR_5);
 FUNC_6(VAR_7);

 if(VAR_10 != ((void*)0)) {

  FUNC_15(VAR_10, VAR_3, ((void*)0));
 }

 return VAR_9;
}
