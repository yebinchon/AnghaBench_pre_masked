
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_connection {struct rdma_cm_id* i_cm_id; int i_flowctl; } ;
struct rds_iw_connect_private {int dummy; } ;
struct rds_connection {struct rds_iw_connection* c_transport_data; } ;
struct rdma_conn_param {int dummy; } ;
struct rdma_cm_id {struct rds_connection* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rdma_cm_id*,struct rdma_conn_param*) ;
 int FUNC_1 (struct rds_connection*,struct rdma_conn_param*,struct rds_iw_connect_private*,int ) ;
 int FUNC_2 (struct rds_connection*,char*,int) ;
 int FUNC_3 (struct rds_connection*,int ) ;
 int FUNC_4 (struct rds_connection*) ;
 int VAR_2 ;

int FUNC_5(struct rdma_cm_id *VAR_3)
{
 struct rds_connection *VAR_4 = VAR_3->context;
 struct rds_iw_connection *VAR_5 = VAR_4->c_transport_data;
 struct rdma_conn_param VAR_6;
 struct rds_iw_connect_private VAR_7;
 int VAR_8;



 FUNC_3(VAR_4, VAR_0);
 VAR_5->i_flowctl = VAR_2;

 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8) {
  FUNC_2(VAR_4, "rds_iw_setup_qp failed (%d)\n", VAR_8);
  goto out;
 }

 FUNC_1(VAR_4, &VAR_6, &VAR_7, VAR_1);

 VAR_8 = FUNC_0(VAR_3, &VAR_6);
 if (VAR_8)
  FUNC_2(VAR_4, "rdma_connect failed (%d)\n", VAR_8);

out:



 if (VAR_8) {
  struct rds_iw_connection *VAR_9 = VAR_4->c_transport_data;

  if (VAR_9->i_cm_id == VAR_3)
   VAR_8 = 0;
 }
 return VAR_8;
}
