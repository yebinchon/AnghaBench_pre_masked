
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rds_iw_device {int dma_local_lkey; } ;
struct rds_iw_connection {int i_dma_local_lkey; struct rds_connection* i_cm_id; } ;
struct rds_iw_connect_private {scalar_t__ dp_ack_seq; int dp_credit; int dp_saddr; int dp_daddr; } ;
struct rds_connection {int c_cm_lock; int device; struct rds_connection* context; struct rds_iw_connection* c_transport_data; } ;
struct rdma_conn_param {int dummy; } ;
struct rdma_cm_id {int c_cm_lock; int device; struct rdma_cm_id* context; struct rds_iw_connection* c_transport_data; } ;
struct TYPE_3__ {struct rds_iw_connect_private* private_data; } ;
struct TYPE_4__ {TYPE_1__ conn; } ;
struct rdma_cm_event {TYPE_2__ param; } ;


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
 int FUNC_6 (scalar_t__) ;
 struct rds_iw_device* FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct rds_connection*,struct rdma_conn_param*) ;
 int FUNC_11 (struct rds_connection*,int *,int ) ;
 struct rds_connection* FUNC_12 (int ,int ,int *,int ) ;
 int FUNC_13 (struct rds_connection*) ;
 scalar_t__ FUNC_14 (struct rds_connection*) ;
 int FUNC_15 (struct rds_connection*,int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_16 (struct rds_connection*,struct rdma_conn_param*,struct rds_iw_connect_private*,int ) ;
 int FUNC_17 (struct rds_connection*,char*,int) ;
 int FUNC_18 (struct rds_iw_connect_private const*) ;
 int FUNC_19 (struct rds_connection*,int ) ;
 int FUNC_20 (struct rds_connection*,int ) ;
 int FUNC_21 (struct rds_connection*) ;
 int FUNC_22 (int ) ;
 int VAR_5 ;
 int FUNC_23 (struct rds_connection*,int ,int *) ;
 int FUNC_24 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_25(struct rdma_cm_id *VAR_8,
        struct rdma_cm_event *VAR_9)
{
 const struct rds_iw_connect_private *VAR_10 = VAR_9->param.conn.private_data;
 struct rds_iw_connect_private VAR_11;
 struct rds_connection *VAR_12 = ((void*)0);
 struct rds_iw_connection *VAR_13 = ((void*)0);
 struct rdma_conn_param VAR_14;
 struct rds_iw_device *VAR_15;
 u32 VAR_16;
 int VAR_17, VAR_18 = 1;


 VAR_16 = FUNC_18(VAR_10);
 if (!VAR_16)
  goto out;

 FUNC_24("saddr %pI4 daddr %pI4 RDSv%u.%u\n",
   &VAR_10->dp_saddr, &VAR_10->dp_daddr,
   FUNC_3(VAR_16), FUNC_4(VAR_16));

 VAR_12 = FUNC_12(VAR_10->dp_daddr, VAR_10->dp_saddr, &VAR_5,
          VAR_0);
 if (FUNC_1(VAR_12)) {
  FUNC_24("rds_conn_create failed (%ld)\n", FUNC_2(VAR_12));
  VAR_12 = ((void*)0);
  goto out;
 }
 FUNC_8(&VAR_12->c_cm_lock);
 if (!FUNC_15(VAR_12, VAR_2, VAR_1)) {
  if (FUNC_14(VAR_12) == VAR_3) {
   FUNC_24("incoming connect while connecting\n");
   FUNC_13(VAR_12);
   FUNC_22(VAR_7);
  } else
  if (FUNC_14(VAR_12) == VAR_1) {

   FUNC_22(VAR_6);
  }
  FUNC_9(&VAR_12->c_cm_lock);
  goto out;
 }

 VAR_13 = VAR_12->c_transport_data;

 FUNC_20(VAR_12, VAR_16);
 FUNC_19(VAR_12, FUNC_5(VAR_10->dp_credit));



 if (VAR_10->dp_ack_seq)
  FUNC_23(VAR_12, FUNC_6(VAR_10->dp_ack_seq), ((void*)0));

 FUNC_0(VAR_8->context);
 FUNC_0(VAR_13->i_cm_id);

 VAR_13->i_cm_id = VAR_8;
 VAR_8->context = VAR_12;

 VAR_15 = FUNC_7(VAR_8->device, &VAR_4);
 VAR_13->i_dma_local_lkey = VAR_15->dma_local_lkey;



 VAR_18 = 0;

 VAR_17 = FUNC_21(VAR_12);
 if (VAR_17) {
  FUNC_17(VAR_12, "rds_iw_setup_qp failed (%d)\n", VAR_17);
  FUNC_9(&VAR_12->c_cm_lock);
  goto out;
 }

 FUNC_16(VAR_12, &VAR_14, &VAR_11, VAR_16);


 VAR_17 = FUNC_10(VAR_8, &VAR_14);
 FUNC_9(&VAR_12->c_cm_lock);
 if (VAR_17) {
  FUNC_17(VAR_12, "rdma_accept failed (%d)\n", VAR_17);
  goto out;
 }

 return 0;

out:
 FUNC_11(VAR_8, ((void*)0), 0);
 return VAR_18;
}
