
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


struct TYPE_14__ {int is_mc_member; int num_of_mcm; } ;
typedef TYPE_5__ osm_switch_t ;
struct TYPE_15__ {TYPE_4__* p_physp; TYPE_1__* p_node; } ;
typedef TYPE_6__ osm_port_t ;
struct TYPE_16__ {TYPE_6__* p_port; } ;
typedef TYPE_7__ osm_mcast_work_obj_t ;
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
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(cl_qlist_t * VAR_1)
{
 osm_mcast_work_obj_t *VAR_2 = ((void*)0);
 osm_port_t *VAR_3 = ((void*)0);
 osm_switch_t *VAR_4 = ((void*)0);
 cl_list_item_t *VAR_5 = ((void*)0);

 for (VAR_5 = FUNC_2(VAR_1); VAR_5 != FUNC_1(VAR_1);
      VAR_5 = FUNC_3(VAR_5)) {
  VAR_2 = FUNC_0(VAR_5, VAR_2, VAR_0);
  VAR_3 = VAR_2->p_port;
  if (VAR_3->p_node->sw) {
   VAR_4 = VAR_3->p_node->sw;
   VAR_4->is_mc_member = 1;
  } else {
   VAR_4 = VAR_3->p_physp->p_remote_physp->p_node->sw;
   VAR_4->num_of_mcm++;
  }
 }
}
