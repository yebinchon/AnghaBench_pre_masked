
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_25__ {int cc_key; } ;
typedef TYPE_8__ osm_subn_opt_t ;
typedef int osm_physp_t ;
typedef int osm_node_t ;
struct TYPE_23__ {void* attr_mod; void* mad_method; int port; int port_guid; int node_guid; } ;
struct TYPE_24__ {TYPE_6__ cc_context; } ;
struct TYPE_20__ {int remote_qkey; int remote_qp; } ;
struct TYPE_21__ {TYPE_3__ gsi; } ;
struct TYPE_22__ {TYPE_4__ addr_type; int dest_lid; } ;
struct TYPE_26__ {int list_item; TYPE_7__ context; int fail_msg; int resp_expected; TYPE_5__ mad_addr; } ;
typedef TYPE_9__ osm_madw_t ;
struct TYPE_16__ {int log; int cc_poller_wakeup; int mad_queue_lock; int mad_queue; int outstanding_mads; int trans_id; TYPE_1__* subn; } ;
typedef TYPE_10__ osm_congestion_control_t ;
typedef void* ib_net32_t ;
typedef int ib_net16_t ;
struct TYPE_19__ {int base_ver; int class_ver; scalar_t__ trans_id; void* attr_mod; scalar_t__ resv; int attr_id; scalar_t__ class_spec; scalar_t__ status; void* method; int mgmt_class; } ;
struct TYPE_17__ {int log_data; int cc_key; TYPE_2__ header; } ;
typedef TYPE_11__ ib_cc_mad_t ;
struct TYPE_18__ {TYPE_8__ opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char,int ) ;
 TYPE_11__* FUNC_10 (TYPE_9__*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(osm_congestion_control_t *VAR_7,
   osm_madw_t *VAR_8,
   osm_node_t *VAR_9,
   osm_physp_t *VAR_10,
   ib_net16_t VAR_11,
   ib_net32_t VAR_12)
{
 osm_subn_opt_t *VAR_13 = &VAR_7->subn->opt;
 ib_cc_mad_t *VAR_14;
 uint8_t VAR_15;

 FUNC_0(VAR_7->log);

 VAR_15 = FUNC_14(VAR_10);

 VAR_14 = FUNC_10(VAR_8);

 VAR_14->header.base_ver = 1;
 VAR_14->header.mgmt_class = VAR_3;
 VAR_14->header.class_ver = 2;
 VAR_14->header.method = VAR_2;
 VAR_14->header.status = 0;
 VAR_14->header.class_spec = 0;
 VAR_14->header.trans_id =
  FUNC_5((uint64_t) FUNC_2(&VAR_7->trans_id) &
     (uint64_t) (0xFFFFFFFF));
 if (VAR_14->header.trans_id == 0)
  VAR_14->header.trans_id =
   FUNC_5((uint64_t) FUNC_2(&VAR_7->trans_id) &
      (uint64_t) (0xFFFFFFFF));
 VAR_14->header.attr_id = VAR_11;
 VAR_14->header.resv = 0;
 VAR_14->header.attr_mod = VAR_12;

 VAR_14->cc_key = VAR_13->cc_key;

 FUNC_9(VAR_14->log_data, '\0', VAR_1);

 VAR_8->mad_addr.dest_lid = FUNC_11(VAR_9, VAR_15);
 VAR_8->mad_addr.addr_type.gsi.remote_qp = VAR_4;
 VAR_8->mad_addr.addr_type.gsi.remote_qkey =
  FUNC_4(VAR_5);
 VAR_8->resp_expected = VAR_6;
 VAR_8->fail_msg = VAR_0;

 VAR_8->context.cc_context.node_guid = FUNC_12(VAR_9);
 VAR_8->context.cc_context.port_guid = FUNC_13(VAR_10);
 VAR_8->context.cc_context.port = VAR_15;
 VAR_8->context.cc_context.mad_method = VAR_2;
 VAR_8->context.cc_context.attr_mod = VAR_12;

 FUNC_7(&VAR_7->mad_queue_lock);
 FUNC_2(&VAR_7->outstanding_mads);
 FUNC_6(&VAR_7->mad_queue, &VAR_8->list_item);
 FUNC_8(&VAR_7->mad_queue_lock);

 FUNC_3(&VAR_7->cc_poller_wakeup);

 FUNC_1(VAR_7->log);
}
