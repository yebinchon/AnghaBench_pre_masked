
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; int max_inline_data; } ;
struct rdma_addrinfo {int sq_sig_all; TYPE_1__ cap; int ai_port_space; int ai_flags; } ;
struct ibv_wc {int dummy; } ;
struct ibv_qp_init_attr {int sq_sig_all; TYPE_1__ cap; int ai_port_space; int ai_flags; } ;
struct ibv_qp_attr {int sq_sig_all; TYPE_1__ cap; int ai_port_space; int ai_flags; } ;
struct TYPE_17__ {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ,struct rdma_addrinfo*,int ,struct rdma_addrinfo*) ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (struct rdma_addrinfo*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int VAR_7 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__**,struct rdma_addrinfo*,int *,struct rdma_addrinfo*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct rdma_addrinfo*) ;
 int FUNC_11 (TYPE_2__*,struct ibv_wc*) ;
 int FUNC_12 (TYPE_2__*,TYPE_2__**) ;
 int FUNC_13 (TYPE_2__*,struct ibv_wc*) ;
 int FUNC_14 (int *,int ,struct rdma_addrinfo*,struct rdma_addrinfo**) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*,int *,int ,int,int ) ;
 int FUNC_17 (TYPE_2__*,int *,int ,int,int ,int) ;
 int FUNC_18 (TYPE_2__*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_19(void)
{
 struct rdma_addrinfo VAR_12, *VAR_13;
 struct ibv_qp_init_attr VAR_14;
 struct ibv_qp_attr VAR_15;
 struct ibv_wc VAR_16;
 int VAR_17;

 FUNC_2(&VAR_12, 0, sizeof VAR_12);
 VAR_12.ai_flags = VAR_2;
 VAR_12.ai_port_space = VAR_3;
 VAR_17 = FUNC_14(((void*)0), VAR_7, &VAR_12, &VAR_13);
 if (VAR_17) {
  FUNC_4("rdma_getaddrinfo: %s\n", FUNC_0(VAR_17));
  return VAR_17;
 }

 FUNC_2(&VAR_14, 0, sizeof VAR_14);
 VAR_14.cap.max_send_wr = VAR_14.cap.max_recv_wr = 1;
 VAR_14.cap.max_send_sge = VAR_14.cap.max_recv_sge = 1;
 VAR_14.cap.max_inline_data = 16;
 VAR_14.sq_sig_all = 1;
 VAR_17 = FUNC_6(&VAR_5, VAR_13, ((void*)0), &VAR_14);
 if (VAR_17) {
  FUNC_3("rdma_create_ep");
  goto out_free_addrinfo;
 }

 VAR_17 = FUNC_15(VAR_5, 0);
 if (VAR_17) {
  FUNC_3("rdma_listen");
  goto out_destroy_listen_ep;
 }

 VAR_17 = FUNC_12(VAR_5, &VAR_4);
 if (VAR_17) {
  FUNC_3("rdma_get_request");
  goto out_destroy_listen_ep;
 }

 FUNC_2(&VAR_15, 0, sizeof VAR_15);
 FUNC_2(&VAR_14, 0, sizeof VAR_14);
 VAR_17 = FUNC_1(VAR_4->qp, &VAR_15, VAR_0,
      &VAR_14);
 if (VAR_17) {
  FUNC_3("ibv_query_qp");
  goto out_destroy_accept_ep;
 }
 if (VAR_14.cap.max_inline_data >= 16)
  VAR_9 = VAR_1;
 else
  FUNC_4("rdma_server: device doesn't support IBV_SEND_INLINE, "
         "using sge sends\n");

 VAR_6 = FUNC_18(VAR_4, VAR_8, 16);
 if (!VAR_6) {
  VAR_17 = -1;
  FUNC_3("rdma_reg_msgs for recv_msg");
  goto out_destroy_accept_ep;
 }
 if ((VAR_9 & VAR_1) == 0) {
  VAR_10 = FUNC_18(VAR_4, VAR_11, 16);
  if (!VAR_10) {
   VAR_17 = -1;
   FUNC_3("rdma_reg_msgs for send_msg");
   goto out_dereg_recv;
  }
 }

 VAR_17 = FUNC_16(VAR_4, ((void*)0), VAR_8, 16, VAR_6);
 if (VAR_17) {
  FUNC_3("rdma_post_recv");
  goto out_dereg_send;
 }

 VAR_17 = FUNC_5(VAR_4, ((void*)0));
 if (VAR_17) {
  FUNC_3("rdma_accept");
  goto out_dereg_send;
 }

 while ((VAR_17 = FUNC_11(VAR_4, &VAR_16)) == 0);
 if (VAR_17 < 0) {
  FUNC_3("rdma_get_recv_comp");
  goto out_disconnect;
 }

 VAR_17 = FUNC_17(VAR_4, ((void*)0), VAR_11, 16, VAR_10, VAR_9);
 if (VAR_17) {
  FUNC_3("rdma_post_send");
  goto out_disconnect;
 }

 while ((VAR_17 = FUNC_13(VAR_4, &VAR_16)) == 0);
 if (VAR_17 < 0)
  FUNC_3("rdma_get_send_comp");
 else
  VAR_17 = 0;

out_disconnect:
 FUNC_9(VAR_4);
out_dereg_send:
 if ((VAR_9 & VAR_1) == 0)
  FUNC_7(VAR_10);
out_dereg_recv:
 FUNC_7(VAR_6);
out_destroy_accept_ep:
 FUNC_8(VAR_4);
out_destroy_listen_ep:
 FUNC_8(VAR_5);
out_free_addrinfo:
 FUNC_10(VAR_13);
 return VAR_17;
}
