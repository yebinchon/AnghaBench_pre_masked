
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int is_mc_member; int mgrp_item; int p_node; int num_of_mcm; } ;
typedef TYPE_5__ osm_switch_t ;
struct TYPE_15__ {TYPE_4__* p_physp; TYPE_1__* p_node; } ;
typedef TYPE_6__ osm_port_t ;
struct TYPE_16__ {TYPE_6__* p_port; } ;
typedef TYPE_7__ osm_mcast_work_obj_t ;
typedef int ib_net64_t ;
typedef int cl_qmap_t ;
typedef int cl_qlist_t ;
typedef int cl_list_item_t ;
struct TYPE_13__ {TYPE_3__* p_remote_physp; } ;
struct TYPE_12__ {TYPE_2__* p_node; } ;
struct TYPE_11__ {TYPE_5__* sw; } ;
struct TYPE_10__ {TYPE_5__* sw; } ;


 TYPE_7__* FUNC_0 (int *,TYPE_7__*,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(cl_qmap_t * VAR_1, cl_qlist_t * VAR_2)
{
 osm_mcast_work_obj_t *VAR_3;
 osm_port_t *VAR_4;
 osm_switch_t *VAR_5;
 ib_net64_t VAR_6;
 cl_list_item_t *VAR_7;

 FUNC_6(VAR_1);
 for (VAR_7 = FUNC_2(VAR_2); VAR_7 != FUNC_1(VAR_2);
      VAR_7 = FUNC_3(VAR_7)) {
  VAR_3 = FUNC_0(VAR_7, VAR_3, VAR_0);
  VAR_4 = VAR_3->p_port;
  if (VAR_4->p_node->sw) {
   VAR_5 = VAR_4->p_node->sw;
   VAR_5->is_mc_member = 1;
  } else if (VAR_4->p_physp->p_remote_physp) {
   VAR_5 = VAR_4->p_physp->p_remote_physp->p_node->sw;
   VAR_5->num_of_mcm++;
  } else
   continue;
  VAR_6 = FUNC_8(VAR_5->p_node);
  if (FUNC_5(VAR_1, VAR_6) == FUNC_4(VAR_1))
   FUNC_7(VAR_1, VAR_6, &VAR_5->mgrp_item);
 }
}
