
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {int start_buf; int start_mr; int server; int rdma_buf; int rdma_mr; int send_mr; int recv_mr; } ;


 int FUNC_0 (char*,struct rping_cb*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rping_cb *VAR_0)
{
 FUNC_0("rping_free_buffers called on cb %p\n", VAR_0);
 FUNC_2(VAR_0->recv_mr);
 FUNC_2(VAR_0->send_mr);
 FUNC_2(VAR_0->rdma_mr);
 FUNC_1(VAR_0->rdma_buf);
 if (!VAR_0->server) {
  FUNC_2(VAR_0->start_mr);
  FUNC_1(VAR_0->start_buf);
 }
}
