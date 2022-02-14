
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct qos_config {int sl2vl; } ;
struct TYPE_26__ {int list_item; int port_mad_list; } ;
typedef TYPE_5__ qos_mad_list_t ;
struct TYPE_27__ {int p_madw; } ;
typedef TYPE_6__ qos_mad_item_t ;
struct TYPE_28__ {int p_physp; TYPE_9__* p_node; } ;
typedef TYPE_7__ osm_port_t ;
struct TYPE_20__ {TYPE_4__* p_subn; } ;
struct TYPE_22__ {int qos_options; int qos_rtr_options; int qos_swe_options; int qos_sw0_options; int qos_ca_options; int qos; } ;
struct TYPE_21__ {int port_guid_tbl; TYPE_1__ opt; } ;
struct TYPE_29__ {int log; int lock; TYPE_10__ sm; TYPE_15__ subn; } ;
typedef TYPE_8__ osm_opensm_t ;
struct TYPE_30__ {TYPE_2__* sw; } ;
typedef TYPE_9__ osm_node_t ;
typedef int cl_qmap_t ;
typedef int cl_qlist_t ;
typedef int cl_map_item_t ;
struct TYPE_24__ {scalar_t__ use_optimized_slvl; } ;
struct TYPE_25__ {TYPE_3__ opt; } ;
struct TYPE_23__ {int switch_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (TYPE_5__*) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int *,int *,int) ;
 int FUNC_20 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_21 (TYPE_9__*) ;
 int FUNC_22 (TYPE_6__**) ;
 int FUNC_23 (TYPE_15__*) ;
 int FUNC_24 (TYPE_10__*,int ) ;
 int FUNC_25 (struct qos_config*,int *,int *) ;
 scalar_t__ FUNC_26 (TYPE_10__*,int ,struct qos_config*,int,int *) ;
 scalar_t__ FUNC_27 (TYPE_10__*,TYPE_9__*,struct qos_config*,int *) ;

int FUNC_28(osm_opensm_t * VAR_1)
{
 struct qos_config VAR_2, VAR_3, VAR_4, VAR_5;
 struct qos_config *VAR_6;
 cl_qmap_t *VAR_7;
 cl_map_item_t *VAR_8;
 osm_port_t *VAR_9;
 osm_node_t *VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 qos_mad_list_t *VAR_13, *VAR_14;
 qos_mad_item_t *VAR_15;
 cl_qlist_t VAR_16;

 if (!VAR_1->subn.opt.qos)
  return 0;

 FUNC_0(&VAR_1->log);

 FUNC_25(&VAR_2, &VAR_1->subn.opt.qos_ca_options,
    &VAR_1->subn.opt.qos_options);
 FUNC_25(&VAR_3, &VAR_1->subn.opt.qos_sw0_options,
    &VAR_1->subn.opt.qos_options);
 FUNC_25(&VAR_4, &VAR_1->subn.opt.qos_swe_options,
    &VAR_1->subn.opt.qos_options);
 FUNC_25(&VAR_5, &VAR_1->subn.opt.qos_rtr_options,
    &VAR_1->subn.opt.qos_options);

 FUNC_7(&VAR_16);

 FUNC_2(&VAR_1->lock);


 FUNC_23(&VAR_1->subn);
 VAR_7 = &VAR_1->subn.port_guid_tbl;
 VAR_8 = FUNC_13(VAR_7);
 while (VAR_8 != FUNC_12(VAR_7)) {
  VAR_12 = 0;
  VAR_9 = (osm_port_t *) VAR_8;
  VAR_8 = FUNC_14(VAR_8);

  VAR_13 = (qos_mad_list_t *) FUNC_18(sizeof(*VAR_13));
  if (!VAR_13) {
   FUNC_3(&VAR_1->lock);
   return -1;
  }

  FUNC_20(VAR_13, 0, sizeof(*VAR_13));

  FUNC_7(&VAR_13->port_mad_list);

  VAR_10 = VAR_9->p_node;
  if (VAR_10->sw) {
   if (FUNC_27(&VAR_1->sm, VAR_10, &VAR_4,
            &VAR_13->port_mad_list)) {
    FUNC_3(&VAR_1->lock);
    VAR_11 = -1;
   }


   if (!FUNC_17
       (&VAR_10->sw->switch_info))
    goto Continue;

   if (FUNC_16(&VAR_10->sw->switch_info) &&
       VAR_1->sm.p_subn->opt.use_optimized_slvl &&
       !FUNC_19(&VAR_4.sl2vl, &VAR_3.sl2vl,
        sizeof(VAR_4.sl2vl)))
    VAR_12 = 1;

   VAR_6 = &VAR_3;
  } else if (FUNC_21(VAR_10) == VAR_0)
   VAR_6 = &VAR_5;
  else
   VAR_6 = &VAR_2;

  if (FUNC_26(&VAR_1->sm, VAR_9->p_physp, VAR_6,
          VAR_12, &VAR_13->port_mad_list)) {
   FUNC_3(&VAR_1->lock);
   VAR_11 = -1;
  }
Continue:

  if (FUNC_4(&VAR_13->port_mad_list)) {
   FUNC_8(&VAR_16, &VAR_13->list_item);
  } else {
   FUNC_15(VAR_13);
  }
 }
 while (FUNC_4(&VAR_16)) {
  VAR_14 = (qos_mad_list_t *) FUNC_6(&VAR_16);
  while (VAR_14 !=
   (qos_mad_list_t *) FUNC_5(&VAR_16)) {
   VAR_13 = VAR_14;
   VAR_14 = (qos_mad_list_t *)
          FUNC_9(&VAR_13->list_item);

   VAR_15 = (qos_mad_item_t *)
         FUNC_10(&VAR_13->port_mad_list);
   FUNC_24(&VAR_1->sm, VAR_15->p_madw);
   FUNC_22(&VAR_15);

   if (FUNC_4(&VAR_13->port_mad_list) == 0) {
    FUNC_11(&VAR_16, &VAR_13->list_item);
    FUNC_15(VAR_13);
   }
  }
 }

 FUNC_3(&VAR_1->lock);
 FUNC_1(&VAR_1->log);

 return VAR_11;
}
