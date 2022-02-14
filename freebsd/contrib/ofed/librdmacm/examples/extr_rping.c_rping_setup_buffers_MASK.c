
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {int size; void* recv_mr; void* send_mr; int * rdma_buf; void* rdma_mr; int * start_buf; void* start_mr; int pd; int server; int send_buf; int recv_buf; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int *,int,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct rping_cb*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct rping_cb *VAR_6)
{
 int VAR_7;

 FUNC_0("rping_setup_buffers called on cb %p\n", VAR_6);

 VAR_6->recv_mr = FUNC_4(VAR_6->pd, &VAR_6->recv_buf, sizeof VAR_6->recv_buf,
     VAR_1);
 if (!VAR_6->recv_mr) {
  FUNC_1(VAR_5, "recv_buf reg_mr failed\n");
  return VAR_4;
 }

 VAR_6->send_mr = FUNC_4(VAR_6->pd, &VAR_6->send_buf, sizeof VAR_6->send_buf, 0);
 if (!VAR_6->send_mr) {
  FUNC_1(VAR_5, "send_buf reg_mr failed\n");
  VAR_7 = VAR_4;
  goto err1;
 }

 VAR_6->rdma_buf = FUNC_5(VAR_6->size);
 if (!VAR_6->rdma_buf) {
  FUNC_1(VAR_5, "rdma_buf malloc failed\n");
  VAR_7 = -VAR_0;
  goto err2;
 }

 VAR_6->rdma_mr = FUNC_4(VAR_6->pd, VAR_6->rdma_buf, VAR_6->size,
     VAR_1 |
     VAR_2 |
     VAR_3);
 if (!VAR_6->rdma_mr) {
  FUNC_1(VAR_5, "rdma_buf reg_mr failed\n");
  VAR_7 = VAR_4;
  goto err3;
 }

 if (!VAR_6->server) {
  VAR_6->start_buf = FUNC_5(VAR_6->size);
  if (!VAR_6->start_buf) {
   FUNC_1(VAR_5, "start_buf malloc failed\n");
   VAR_7 = -VAR_0;
   goto err4;
  }

  VAR_6->start_mr = FUNC_4(VAR_6->pd, VAR_6->start_buf, VAR_6->size,
       VAR_1 |
       VAR_2 |
       VAR_3);
  if (!VAR_6->start_mr) {
   FUNC_1(VAR_5, "start_buf reg_mr failed\n");
   VAR_7 = VAR_4;
   goto err5;
  }
 }

 FUNC_6(VAR_6);
 FUNC_0("allocated & registered buffers...\n");
 return 0;

err5:
 FUNC_2(VAR_6->start_buf);
err4:
 FUNC_3(VAR_6->rdma_mr);
err3:
 FUNC_2(VAR_6->rdma_buf);
err2:
 FUNC_3(VAR_6->send_mr);
err1:
 FUNC_3(VAR_6->recv_mr);
 return VAR_7;
}
