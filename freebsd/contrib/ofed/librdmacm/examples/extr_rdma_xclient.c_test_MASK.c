
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct rdma_addrinfo {int dummy; } ;
struct ibv_wc {int dummy; } ;
struct TYPE_14__ {int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; } ;
struct ibv_qp_init_attr {int sq_sig_all; TYPE_1__ cap; } ;
typedef int __be32 ;
struct TYPE_19__ {scalar_t__ ai_qp_type; } ;
struct TYPE_18__ {TYPE_4__* event; } ;
struct TYPE_15__ {scalar_t__ private_data; } ;
struct TYPE_16__ {TYPE_2__ conn; } ;
struct TYPE_17__ {TYPE_3__ param; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 TYPE_6__ VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_2 (struct ibv_qp_init_attr*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_5__**,struct rdma_addrinfo*,int *,struct ibv_qp_init_attr*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (struct rdma_addrinfo*) ;
 int FUNC_12 (TYPE_5__*,struct ibv_wc*) ;
 int FUNC_13 (int ,int ,TYPE_6__*,struct rdma_addrinfo**) ;
 int FUNC_14 (TYPE_5__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(void)
{
 struct rdma_addrinfo *VAR_8;
 struct ibv_qp_init_attr VAR_9;
 struct ibv_wc VAR_10;
 int VAR_11;

 VAR_11 = FUNC_13(VAR_6, VAR_4, &VAR_1, &VAR_8);
 if (VAR_11) {
  FUNC_5("rdma_getaddrinfo: %s\n", FUNC_1(VAR_11));
  return VAR_11;
 }

 FUNC_2(&VAR_9, 0, sizeof VAR_9);
 VAR_9.cap.max_send_wr = VAR_9.cap.max_recv_wr = 1;
 VAR_9.cap.max_send_sge = VAR_9.cap.max_recv_sge = 1;
 VAR_9.sq_sig_all = 1;
 VAR_11 = FUNC_7(&VAR_2, VAR_8, ((void*)0), &VAR_9);
 FUNC_11(VAR_8);
 if (VAR_11) {
  FUNC_3("rdma_create_ep");
  return VAR_11;
 }

 VAR_3 = FUNC_14(VAR_2, VAR_5, sizeof VAR_5);
 if (!VAR_3) {
  FUNC_3("rdma_reg_msgs");
  return VAR_11;
 }

 VAR_11 = FUNC_6(VAR_2, ((void*)0));
 if (VAR_11) {
  FUNC_3("rdma_connect");
  return VAR_11;
 }

 if (VAR_1.ai_qp_type == VAR_0)
  VAR_7 = FUNC_0(*(__be32 *) VAR_2->event->param.conn.private_data);

 VAR_11 = FUNC_4();
 if (VAR_11) {
  FUNC_3("post_send");
  return VAR_11;
 }

 VAR_11 = FUNC_12(VAR_2, &VAR_10);
 if (VAR_11 <= 0) {
  FUNC_3("rdma_get_recv_comp");
  return VAR_11;
 }

 FUNC_10(VAR_2);
 FUNC_8(VAR_3);
 FUNC_9(VAR_2);
 return 0;
}
