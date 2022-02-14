
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int congestion_control; } ;
struct TYPE_5__ {int port_guid_tbl; TYPE_1__ opt; } ;
struct osm_opensm {int log; int lock; int sm; TYPE_2__ subn; int routing_engine_used; } ;
struct TYPE_6__ {int p_physp; scalar_t__ cc_unavailable_flag; int * p_node; } ;
typedef TYPE_3__ osm_port_t ;
typedef int osm_node_t ;
typedef scalar_t__ ib_api_status_t ;
typedef int cl_qmap_t ;
typedef int cl_map_item_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

int FUNC_12(struct osm_opensm *VAR_3)
{
 cl_qmap_t *VAR_4;
 cl_map_item_t *VAR_5;
 int VAR_6 = 0;

 if (!VAR_3->subn.opt.congestion_control)
  return 0;

 FUNC_0(&VAR_3->log);




 if (!VAR_3->routing_engine_used)
  return 0;

 FUNC_5(&VAR_3->sm);

 FUNC_6(&VAR_3->lock);

 VAR_4 = &VAR_3->subn.port_guid_tbl;
 VAR_5 = FUNC_9(VAR_4);
 while (VAR_5 != FUNC_8(VAR_4)) {
  osm_port_t *VAR_7 = (osm_port_t *) VAR_5;
  osm_node_t *VAR_8 = VAR_7->p_node;
  ib_api_status_t VAR_9;

  VAR_5 = FUNC_10(VAR_5);

  if (VAR_7->cc_unavailable_flag)
   continue;

  if (FUNC_11(VAR_8) == VAR_1) {
   VAR_9 = FUNC_4(&VAR_3->sm, VAR_8);
   if (VAR_9 != VAR_2)
    VAR_6 = -1;
  } else if (FUNC_11(VAR_8) == VAR_0) {
   VAR_9 = FUNC_2(&VAR_3->sm,
        VAR_8,
        VAR_7->p_physp);
   if (VAR_9 != VAR_2)
    VAR_6 = -1;

   VAR_9 = FUNC_3(&VAR_3->sm,
          VAR_8,
          VAR_7->p_physp);
   if (VAR_9 != VAR_2)
    VAR_6 = -1;
  }
 }

 FUNC_7(&VAR_3->lock);

 FUNC_1(&VAR_3->log);

 return VAR_6;
}
