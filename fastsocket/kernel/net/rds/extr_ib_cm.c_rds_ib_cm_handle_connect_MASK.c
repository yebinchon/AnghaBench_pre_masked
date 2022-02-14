
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct rds_ib_connection {struct rds_connection* i_cm_id; } ;
struct rds_ib_connect_private {scalar_t__ dp_ack_seq; int dp_credit; int dp_saddr; int dp_daddr; } ;
struct TYPE_14__ {TYPE_5__* path_rec; } ;
struct rds_connection {int c_cm_lock; struct rds_connection* context; struct rds_ib_connection* c_transport_data; TYPE_6__ route; } ;
struct rdma_conn_param {int dummy; } ;
struct rdma_cm_id {int c_cm_lock; struct rdma_cm_id* context; struct rds_ib_connection* c_transport_data; TYPE_6__ route; } ;
struct TYPE_15__ {int initiator_depth; int responder_resources; struct rds_ib_connect_private* private_data; } ;
struct TYPE_16__ {TYPE_7__ conn; } ;
struct rdma_cm_event {TYPE_8__ param; } ;
typedef scalar_t__ __be64 ;
struct TYPE_11__ {scalar_t__ interface_id; } ;
struct TYPE_12__ {TYPE_3__ global; } ;
struct TYPE_9__ {scalar_t__ interface_id; } ;
struct TYPE_10__ {TYPE_1__ global; } ;
struct TYPE_13__ {TYPE_4__ dgid; TYPE_2__ sgid; } ;


 int FUNC_0 (struct rds_connection*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct rds_connection*) ;
 int FUNC_2 (struct rds_connection*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct rds_connection*,struct rdma_conn_param*) ;
 int FUNC_10 (struct rds_connection*,int *,int ) ;
 struct rds_connection* FUNC_11 (int ,int ,int *,int ) ;
 int FUNC_12 (struct rds_connection*) ;
 scalar_t__ FUNC_13 (struct rds_connection*) ;
 int FUNC_14 (struct rds_connection*,int ,scalar_t__) ;
 int FUNC_15 (struct rds_connection*,struct rdma_conn_param*,struct rds_ib_connect_private*,int ,int ,int ) ;
 int FUNC_16 (struct rds_connection*,char*,int) ;
 int FUNC_17 (struct rdma_cm_event*) ;
 int FUNC_18 (struct rds_connection*,int ) ;
 int FUNC_19 (struct rds_connection*,int ) ;
 int FUNC_20 (struct rds_connection*) ;
 int FUNC_21 (int ) ;
 int VAR_4 ;
 int FUNC_22 (struct rds_connection*,scalar_t__,int *) ;
 int FUNC_23 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_24(struct rdma_cm_id *VAR_7,
        struct rdma_cm_event *VAR_8)
{
 __be64 VAR_9 = VAR_7->route.path_rec->sgid.global.interface_id;
 __be64 VAR_10 = VAR_7->route.path_rec->dgid.global.interface_id;
 const struct rds_ib_connect_private *VAR_11 = VAR_8->param.conn.private_data;
 struct rds_ib_connect_private VAR_12;
 struct rds_connection *VAR_13 = ((void*)0);
 struct rds_ib_connection *VAR_14 = ((void*)0);
 struct rdma_conn_param VAR_15;
 u32 VAR_16;
 int VAR_17 = 1, VAR_18 = 1;


 VAR_16 = FUNC_17(VAR_8);
 if (!VAR_16)
  goto out;

 FUNC_23("saddr %pI4 daddr %pI4 RDSv%u.%u lguid 0x%llx fguid "
   "0x%llx\n", &VAR_11->dp_saddr, &VAR_11->dp_daddr,
   FUNC_3(VAR_16), FUNC_4(VAR_16),
   (unsigned long long)FUNC_6(VAR_9),
   (unsigned long long)FUNC_6(VAR_10));

 VAR_13 = FUNC_11(VAR_11->dp_daddr, VAR_11->dp_saddr, &VAR_4,
          VAR_0);
 if (FUNC_1(VAR_13)) {
  FUNC_23("rds_conn_create failed (%ld)\n", FUNC_2(VAR_13));
  VAR_13 = ((void*)0);
  goto out;
 }
 FUNC_7(&VAR_13->c_cm_lock);
 if (!FUNC_14(VAR_13, VAR_2, VAR_1)) {
  if (FUNC_13(VAR_13) == VAR_3) {
   FUNC_23("incoming connect while connecting\n");
   FUNC_12(VAR_13);
   FUNC_21(VAR_6);
  } else
  if (FUNC_13(VAR_13) == VAR_1) {

   FUNC_21(VAR_5);
  }
  goto out;
 }

 VAR_14 = VAR_13->c_transport_data;

 FUNC_19(VAR_13, VAR_16);
 FUNC_18(VAR_13, FUNC_5(VAR_11->dp_credit));



 if (VAR_11->dp_ack_seq)
  FUNC_22(VAR_13, FUNC_6(VAR_11->dp_ack_seq), ((void*)0));

 FUNC_0(VAR_7->context);
 FUNC_0(VAR_14->i_cm_id);

 VAR_14->i_cm_id = VAR_7;
 VAR_7->context = VAR_13;



 VAR_18 = 0;

 VAR_17 = FUNC_20(VAR_13);
 if (VAR_17) {
  FUNC_16(VAR_13, "rds_ib_setup_qp failed (%d)\n", VAR_17);
  goto out;
 }

 FUNC_15(VAR_13, &VAR_15, &VAR_12, VAR_16,
  VAR_8->param.conn.responder_resources,
  VAR_8->param.conn.initiator_depth);


 VAR_17 = FUNC_9(VAR_7, &VAR_15);
 if (VAR_17)
  FUNC_16(VAR_13, "rdma_accept failed (%d)\n", VAR_17);

out:
 if (VAR_13)
  FUNC_8(&VAR_13->c_cm_lock);
 if (VAR_17)
  FUNC_10(VAR_7, ((void*)0), 0);
 return VAR_18;
}
