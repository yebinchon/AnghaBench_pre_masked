
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; int max_inline_data; } ;
struct rdma_addrinfo {int sq_sig_all; TYPE_1__ cap; int qp_context; int ai_port_space; } ;
struct ibv_wc {int dummy; } ;
struct ibv_qp_init_attr {int sq_sig_all; TYPE_1__ cap; int qp_context; int ai_port_space; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct rdma_addrinfo*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,struct rdma_addrinfo*,int *,struct rdma_addrinfo*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct rdma_addrinfo*) ;
 int FUNC_10 (int ,struct ibv_wc*) ;
 int FUNC_11 (int ,struct ibv_wc*) ;
 int FUNC_12 (int ,int ,struct rdma_addrinfo*,struct rdma_addrinfo**) ;
 int FUNC_13 (int ,int *,int ,int,int ) ;
 int FUNC_14 (int ,int *,int ,int,int ,int) ;
 int FUNC_15 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_16(void)
{
 struct rdma_addrinfo VAR_10, *VAR_11;
 struct ibv_qp_init_attr VAR_12;
 struct ibv_wc VAR_13;
 int VAR_14;

 FUNC_1(&VAR_10, 0, sizeof VAR_10);
 VAR_10.ai_port_space = VAR_1;
 VAR_14 = FUNC_12(VAR_9, VAR_4, &VAR_10, &VAR_11);
 if (VAR_14) {
  FUNC_3("rdma_getaddrinfo: %s\n", FUNC_0(VAR_14));
  goto out;
 }

 FUNC_1(&VAR_12, 0, sizeof VAR_12);
 VAR_12.cap.max_send_wr = VAR_12.cap.max_recv_wr = 1;
 VAR_12.cap.max_send_sge = VAR_12.cap.max_recv_sge = 1;
 VAR_12.cap.max_inline_data = 16;
 VAR_12.qp_context = VAR_2;
 VAR_12.sq_sig_all = 1;
 VAR_14 = FUNC_5(&VAR_2, VAR_11, ((void*)0), &VAR_12);

 if (VAR_12.cap.max_inline_data >= 16)
  VAR_6 = VAR_0;
 else
  FUNC_3("rdma_client: device doesn't support IBV_SEND_INLINE, "
         "using sge sends\n");

 if (VAR_14) {
  FUNC_2("rdma_create_ep");
  goto out_free_addrinfo;
 }

 VAR_3 = FUNC_15(VAR_2, VAR_5, 16);
 if (!VAR_3) {
  FUNC_2("rdma_reg_msgs for recv_msg");
  VAR_14 = -1;
  goto out_destroy_ep;
 }
 if ((VAR_6 & VAR_0) == 0) {
  VAR_7 = FUNC_15(VAR_2, VAR_8, 16);
  if (!VAR_7) {
   FUNC_2("rdma_reg_msgs for send_msg");
   VAR_14 = -1;
   goto out_dereg_recv;
  }
 }

 VAR_14 = FUNC_13(VAR_2, ((void*)0), VAR_5, 16, VAR_3);
 if (VAR_14) {
  FUNC_2("rdma_post_recv");
  goto out_dereg_send;
 }

 VAR_14 = FUNC_4(VAR_2, ((void*)0));
 if (VAR_14) {
  FUNC_2("rdma_connect");
  goto out_dereg_send;
 }

 VAR_14 = FUNC_14(VAR_2, ((void*)0), VAR_8, 16, VAR_7, VAR_6);
 if (VAR_14) {
  FUNC_2("rdma_post_send");
  goto out_disconnect;
 }

 while ((VAR_14 = FUNC_11(VAR_2, &VAR_13)) == 0);
 if (VAR_14 < 0) {
  FUNC_2("rdma_get_send_comp");
  goto out_disconnect;
 }

 while ((VAR_14 = FUNC_10(VAR_2, &VAR_13)) == 0);
 if (VAR_14 < 0)
  FUNC_2("rdma_get_recv_comp");
 else
  VAR_14 = 0;

out_disconnect:
 FUNC_8(VAR_2);
out_dereg_send:
 if ((VAR_6 & VAR_0) == 0)
  FUNC_6(VAR_7);
out_dereg_recv:
 FUNC_6(VAR_3);
out_destroy_ep:
 FUNC_7(VAR_2);
out_free_addrinfo:
 FUNC_9(VAR_11);
out:
 return VAR_14;
}
