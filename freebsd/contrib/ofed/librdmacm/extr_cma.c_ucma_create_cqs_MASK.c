
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rdma_cm_id {void* send_cq; void* send_cq_channel; int verbs; void* recv_cq; void* recv_cq_channel; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ,struct rdma_cm_id*,void*,int ) ;
 int FUNC_3 (struct rdma_cm_id*) ;

__attribute__((used)) static int FUNC_4(struct rdma_cm_id *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 if (VAR_3) {
  VAR_1->recv_cq_channel = FUNC_1(VAR_1->verbs);
  if (!VAR_1->recv_cq_channel)
   goto err;

  VAR_1->recv_cq = FUNC_2(VAR_1->verbs, VAR_3,
         VAR_1, VAR_1->recv_cq_channel, 0);
  if (!VAR_1->recv_cq)
   goto err;
 }

 if (VAR_2) {
  VAR_1->send_cq_channel = FUNC_1(VAR_1->verbs);
  if (!VAR_1->send_cq_channel)
   goto err;

  VAR_1->send_cq = FUNC_2(VAR_1->verbs, VAR_2,
         VAR_1, VAR_1->send_cq_channel, 0);
  if (!VAR_1->send_cq)
   goto err;
 }

 return 0;
err:
 FUNC_3(VAR_1);
 return FUNC_0(VAR_0);
}
