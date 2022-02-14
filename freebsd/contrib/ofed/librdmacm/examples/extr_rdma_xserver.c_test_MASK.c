
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; } ;
struct rdma_conn_param {int private_data_len; int * private_data; TYPE_1__ cap; } ;
struct rdma_addrinfo {int dummy; } ;
struct ibv_wc {int dummy; } ;
struct ibv_qp_init_attr {int private_data_len; int * private_data; TYPE_1__ cap; } ;
struct TYPE_5__ {scalar_t__ ai_qp_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rdma_conn_param*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,struct rdma_conn_param*) ;
 int FUNC_6 (int *,struct rdma_addrinfo*,int *,struct rdma_conn_param*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct rdma_addrinfo*) ;
 int FUNC_11 (int ,struct ibv_wc*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,int ,TYPE_2__*,struct rdma_addrinfo**) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int *,int ,int,int ) ;
 int FUNC_16 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_17(void)
{
 struct rdma_addrinfo *VAR_8;
 struct ibv_qp_init_attr VAR_9;
 struct rdma_conn_param VAR_10;
 struct ibv_wc VAR_11;
 int VAR_12;

 VAR_12 = FUNC_13(((void*)0), VAR_5, &VAR_1, &VAR_8);
 if (VAR_12) {
  FUNC_4("rdma_getaddrinfo: %s\n", FUNC_1(VAR_12));
  return VAR_12;
 }

 FUNC_2(&VAR_9, 0, sizeof VAR_9);
 VAR_9.cap.max_send_wr = VAR_9.cap.max_recv_wr = 1;
 VAR_9.cap.max_send_sge = VAR_9.cap.max_recv_sge = 1;
 VAR_12 = FUNC_6(&VAR_3, VAR_8, ((void*)0), &VAR_9);
 FUNC_10(VAR_8);
 if (VAR_12) {
  FUNC_3("rdma_create_ep");
  return VAR_12;
 }

 VAR_12 = FUNC_14(VAR_3, 0);
 if (VAR_12) {
  FUNC_3("rdma_listen");
  return VAR_12;
 }

 VAR_12 = FUNC_12(VAR_3, &VAR_2);
 if (VAR_12) {
  FUNC_3("rdma_get_request");
  return VAR_12;
 }

 if (VAR_1.ai_qp_type == VAR_0) {
  VAR_12 = FUNC_0();
  if (VAR_12)
   return VAR_12;
 }

 VAR_4 = FUNC_16(VAR_2, VAR_6, sizeof VAR_6);
 if (!VAR_4) {
  FUNC_3("rdma_reg_msgs");
  return VAR_12;
 }

 VAR_12 = FUNC_15(VAR_2, ((void*)0), VAR_6, sizeof VAR_6, VAR_4);
 if (VAR_12) {
  FUNC_3("rdma_post_recv");
  return VAR_12;
 }

 FUNC_2(&VAR_10, 0, sizeof VAR_10);
 VAR_10.private_data = &VAR_7;
 VAR_10.private_data_len = sizeof VAR_7;
 VAR_12 = FUNC_5(VAR_2, &VAR_10);
 if (VAR_12) {
  FUNC_3("rdma_accept");
  return VAR_12;
 }

 VAR_12 = FUNC_11(VAR_2, &VAR_11);
 if (VAR_12 <= 0) {
  FUNC_3("rdma_get_recv_comp");
  return VAR_12;
 }

 FUNC_9(VAR_2);
 FUNC_7(VAR_4);
 FUNC_8(VAR_2);
 FUNC_8(VAR_3);
 return 0;
}
