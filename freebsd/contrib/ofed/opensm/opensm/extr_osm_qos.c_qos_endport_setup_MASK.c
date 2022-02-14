
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct qos_config {int vl_high_limit; int sl2vl; } ;
struct osm_routing_engine {int context; int (* update_sl2vl ) (int ,TYPE_5__*,int ,int ,int *) ;} ;
struct TYPE_16__ {TYPE_2__* p_subn; } ;
typedef TYPE_4__ osm_sm_t ;
struct TYPE_15__ {int capability_mask; } ;
struct TYPE_17__ {TYPE_3__ port_info; int vl_high_limit; scalar_t__ need_update; } ;
typedef TYPE_5__ osm_physp_t ;
typedef int ib_slvl_table_t ;
typedef int cl_qlist_t ;
struct TYPE_14__ {TYPE_1__* p_osm; scalar_t__ need_update; } ;
struct TYPE_13__ {struct osm_routing_engine* routing_engine_used; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_5__*,int ,int ,unsigned int,int const*,int *) ;
 int FUNC_1 (int ,TYPE_5__*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_5__*,int ,unsigned int,struct qos_config const*,int *) ;

__attribute__((used)) static int FUNC_3(osm_sm_t * VAR_1, osm_physp_t * VAR_2,
        const struct qos_config *VAR_3, int VAR_4,
        cl_qlist_t *VAR_5)
{
 unsigned VAR_6 = VAR_2->need_update || VAR_1->p_subn->need_update;
 struct osm_routing_engine *VAR_7 = VAR_1->p_subn->p_osm->routing_engine_used;
 const ib_slvl_table_t *VAR_8 = &VAR_3->sl2vl;
 ib_slvl_table_t VAR_9;

 VAR_2->vl_high_limit = VAR_3->vl_high_limit;
 if (FUNC_2(VAR_1, VAR_2, 0, VAR_6, VAR_3, VAR_5))
  return -1;
 if (VAR_4)
  return 0;

 if (!(VAR_2->port_info.capability_mask & VAR_0))
  return 0;

 if (VAR_7 && VAR_7->update_sl2vl) {
  VAR_9 = *VAR_8;
  VAR_7->update_sl2vl(VAR_7->context, VAR_2, 0, 0, &VAR_9);
  VAR_8 = &VAR_9;
 }
 if (FUNC_0(VAR_1, VAR_2, 0, 0, VAR_6, VAR_8,
          VAR_5))
  return -1;

 return 0;
}
