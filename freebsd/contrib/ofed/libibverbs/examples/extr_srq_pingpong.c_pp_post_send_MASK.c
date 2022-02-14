
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pingpong_context {int * qp; int send_flags; TYPE_1__* mr; int size; int buf; } ;
struct ibv_sge {uintptr_t addr; int lkey; int length; } ;
struct ibv_send_wr {int num_sge; int send_flags; int opcode; struct ibv_sge* sg_list; int wr_id; } ;
struct TYPE_2__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ibv_send_wr*,struct ibv_send_wr**) ;

__attribute__((used)) static int FUNC_1(struct pingpong_context *VAR_2, int VAR_3)
{
 struct ibv_sge VAR_4 = {
  .addr = (uintptr_t) VAR_2->buf,
  .length = VAR_2->size,
  .lkey = VAR_2->mr->lkey
 };
 struct ibv_send_wr VAR_5 = {
  .wr_id = VAR_1,
  .sg_list = &VAR_4,
  .num_sge = 1,
  .opcode = VAR_0,
  .send_flags = VAR_2->send_flags,
 };
 struct ibv_send_wr *VAR_6;

 return FUNC_0(VAR_2->qp[VAR_3], &VAR_5, &VAR_6);
}
