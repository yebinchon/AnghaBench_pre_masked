
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct osm_routing_engine {int context; int (* update_vlarb ) (int ,TYPE_6__*,int,TYPE_7__*,unsigned int,unsigned int) ;} ;
struct TYPE_24__ {int list_item; } ;
typedef TYPE_4__ qos_mad_item_t ;
struct TYPE_25__ {TYPE_2__* p_subn; } ;
typedef TYPE_5__ osm_sm_t ;
struct TYPE_26__ {TYPE_7__* vl_arb; int port_info; } ;
typedef TYPE_6__ osm_physp_t ;
struct TYPE_27__ {TYPE_3__* vl_entry; } ;
typedef TYPE_7__ ib_vl_arb_table_t ;
typedef int ib_api_status_t ;
typedef int cl_qlist_t ;
typedef int block ;
struct TYPE_23__ {unsigned int vl; } ;
struct TYPE_22__ {TYPE_1__* p_osm; } ;
struct TYPE_21__ {struct osm_routing_engine* routing_engine_used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_7__*,TYPE_7__*,unsigned int) ;
 int FUNC_3 (TYPE_7__*,TYPE_7__ const*,unsigned int) ;
 int FUNC_4 (TYPE_7__*,int ,unsigned int) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,TYPE_6__*,int,int*,int ,int) ;
 int FUNC_6 (int ,TYPE_6__*,int,TYPE_7__*,unsigned int,unsigned int) ;

__attribute__((used)) static ib_api_status_t FUNC_7(osm_sm_t * VAR_3,
      osm_physp_t * VAR_4,
      uint8_t VAR_5,
      unsigned VAR_6,
      const ib_vl_arb_table_t *
      VAR_7,
      unsigned VAR_8,
      unsigned VAR_9,
      cl_qlist_t *VAR_10)
{
 struct osm_routing_engine *VAR_11 = VAR_3->p_subn->p_osm->routing_engine_used;
 ib_vl_arb_table_t VAR_12;
 uint32_t VAR_13;
 unsigned VAR_14, VAR_15;
 qos_mad_item_t *VAR_16;
 VAR_14 = (1 << (FUNC_1(&VAR_4->port_info) - 1)) - 1;

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 FUNC_3(&VAR_12, VAR_7, VAR_8 * sizeof(VAR_12.vl_entry[0]));

 if (VAR_11 && VAR_11->update_vlarb)
  VAR_11->update_vlarb(VAR_11->context, VAR_4, VAR_5, &VAR_12,
     VAR_8, VAR_9);

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
  VAR_12.vl_entry[VAR_15].vl &= VAR_14;

 if (!VAR_6 &&
     !FUNC_2(&VAR_4->vl_arb[VAR_9], &VAR_12,
      VAR_8 * sizeof(VAR_12.vl_entry[0])))
  return VAR_2;

 VAR_13 = ((VAR_9 + 1) << 16) | VAR_5;

 VAR_16 = FUNC_5(VAR_3,VAR_4,sizeof(VAR_12),(uint8_t *) & VAR_12,
       VAR_1, VAR_13);

 if (!VAR_16)
  return VAR_0;





 FUNC_4(&VAR_4->vl_arb[VAR_9], 0,
        VAR_8 * sizeof(VAR_12.vl_entry[0]));

 FUNC_0(VAR_10, &VAR_16->list_item);

 return VAR_2;
}
