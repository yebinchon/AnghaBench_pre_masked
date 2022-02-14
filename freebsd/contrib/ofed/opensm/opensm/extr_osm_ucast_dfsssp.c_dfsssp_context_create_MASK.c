
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int osm_ucast_mgr_t ;
typedef int osm_routing_engine_type_t ;
struct TYPE_7__ {int p_log; } ;
struct TYPE_8__ {TYPE_1__ ucast_mgr; } ;
struct TYPE_9__ {TYPE_2__ sm; } ;
typedef TYPE_3__ osm_opensm_t ;
struct TYPE_10__ {int * vl_split_count; int * srcdest2vl_table; scalar_t__ adj_list_size; int * adj_list; int * p_mgr; int routing_type; } ;
typedef TYPE_4__ dfsssp_context_t ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static dfsssp_context_t *FUNC_2(osm_opensm_t * VAR_1,
            osm_routing_engine_type_t
            VAR_2)
{
 dfsssp_context_t *VAR_3 = ((void*)0);


 VAR_3 = (dfsssp_context_t *) FUNC_1(sizeof(dfsssp_context_t));
 if (VAR_3) {

  VAR_3->routing_type = VAR_2;
  VAR_3->p_mgr = (osm_ucast_mgr_t *) & (VAR_1->sm.ucast_mgr);
  VAR_3->adj_list = ((void*)0);
  VAR_3->adj_list_size = 0;
  VAR_3->srcdest2vl_table = ((void*)0);
  VAR_3->vl_split_count = ((void*)0);
 } else {
  FUNC_0(VAR_1->sm.ucast_mgr.p_log, VAR_0,
   "ERR AD04: cannot allocate memory for dfsssp_ctx in dfsssp_context_create\n");
  return ((void*)0);
 }

 return VAR_3;
}
