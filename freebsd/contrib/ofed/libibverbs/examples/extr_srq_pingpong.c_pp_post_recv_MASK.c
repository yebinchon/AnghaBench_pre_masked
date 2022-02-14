
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pingpong_context {int srq; TYPE_1__* mr; int size; int buf; } ;
struct ibv_sge {uintptr_t addr; int lkey; int length; } ;
struct ibv_recv_wr {int num_sge; struct ibv_sge* sg_list; int wr_id; } ;
struct TYPE_2__ {int lkey; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct ibv_recv_wr*,struct ibv_recv_wr**) ;

__attribute__((used)) static int FUNC_1(struct pingpong_context *VAR_1, int VAR_2)
{
 struct ibv_sge VAR_3 = {
  .addr = (uintptr_t) VAR_1->buf,
  .length = VAR_1->size,
  .lkey = VAR_1->mr->lkey
 };
 struct ibv_recv_wr VAR_4 = {
  .wr_id = VAR_0,
  .sg_list = &VAR_3,
  .num_sge = 1,
 };
 struct ibv_recv_wr *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
  if (FUNC_0(VAR_1->srq, &VAR_4, &VAR_5))
   break;

 return VAR_6;
}
