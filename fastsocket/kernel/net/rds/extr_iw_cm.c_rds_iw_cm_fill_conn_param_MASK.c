
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rds_iw_connection {int i_credits; scalar_t__ i_flowctl; } ;
struct rds_iw_connect_private {int responder_resources; int initiator_depth; int private_data_len; struct rds_iw_connect_private* private_data; int dp_credit; int dp_ack_seq; int dp_protocol_minor_mask; int dp_protocol_minor; int dp_protocol_major; int dp_daddr; int dp_saddr; } ;
struct rds_connection {int c_faddr; int c_laddr; struct rds_iw_connection* c_transport_data; } ;
struct rdma_conn_param {int responder_resources; int initiator_depth; int private_data_len; struct rdma_conn_param* private_data; int dp_credit; int dp_ack_seq; int dp_protocol_minor_mask; int dp_protocol_minor; int dp_protocol_major; int dp_daddr; int dp_saddr; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct rds_iw_connect_private*,int ,int) ;
 int FUNC_9 (struct rds_iw_connection*) ;

__attribute__((used)) static void FUNC_10(struct rds_connection *VAR_1,
   struct rdma_conn_param *VAR_2,
   struct rds_iw_connect_private *VAR_3,
   u32 VAR_4)
{
 struct rds_iw_connection *VAR_5 = VAR_1->c_transport_data;

 FUNC_8(VAR_2, 0, sizeof(struct rdma_conn_param));

 VAR_2->responder_resources = 1;
 VAR_2->initiator_depth = 1;

 if (VAR_3) {
  FUNC_8(VAR_3, 0, sizeof(*VAR_3));
  VAR_3->dp_saddr = VAR_1->c_laddr;
  VAR_3->dp_daddr = VAR_1->c_faddr;
  VAR_3->dp_protocol_major = FUNC_2(VAR_4);
  VAR_3->dp_protocol_minor = FUNC_3(VAR_4);
  VAR_3->dp_protocol_minor_mask = FUNC_6(VAR_0);
  VAR_3->dp_ack_seq = FUNC_9(VAR_5);


  if (VAR_5->i_flowctl) {
   unsigned int VAR_6;

   VAR_6 = FUNC_0(FUNC_4(&VAR_5->i_credits));
   VAR_3->dp_credit = FUNC_7(VAR_6);
   FUNC_5(FUNC_1(VAR_6), &VAR_5->i_credits);
  }

  VAR_2->private_data = VAR_3;
  VAR_2->private_data_len = sizeof(*VAR_3);
 }
}
