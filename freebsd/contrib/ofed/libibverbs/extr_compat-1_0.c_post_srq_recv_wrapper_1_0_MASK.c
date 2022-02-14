
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibv_srq_1_0 {int real_srq; TYPE_3__* context; } ;
struct ibv_recv_wr_1_0 {struct ibv_recv_wr_1_0* next; int num_sge; int sg_list; int wr_id; } ;
struct ibv_recv_wr {struct ibv_recv_wr* next; int num_sge; int sg_list; int wr_id; } ;
struct TYPE_6__ {TYPE_2__* real_context; } ;
struct TYPE_4__ {int (* post_srq_recv ) (int ,struct ibv_recv_wr*,struct ibv_recv_wr**) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 struct ibv_recv_wr* FUNC_0 (int) ;
 int FUNC_1 (int ,struct ibv_recv_wr*,struct ibv_recv_wr**) ;

__attribute__((used)) static int FUNC_2(struct ibv_srq_1_0 *VAR_0, struct ibv_recv_wr_1_0 *VAR_1,
     struct ibv_recv_wr_1_0 **VAR_2)
{
 struct ibv_recv_wr_1_0 *VAR_3;
 struct ibv_recv_wr *VAR_4, *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7;
 int VAR_8;

 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  VAR_4 = FUNC_0(sizeof *VAR_4);
  VAR_4->wr_id = VAR_3->wr_id;
  VAR_4->sg_list = VAR_3->sg_list;
  VAR_4->num_sge = VAR_3->num_sge;
  VAR_4->next = ((void*)0);
  if (VAR_6)
   VAR_6->next = VAR_4;
  else
   VAR_5 = VAR_4;

  VAR_6 = VAR_4;
 }

 VAR_8 = VAR_0->context->real_context->ops.post_srq_recv(VAR_0->real_srq, VAR_5,
           &VAR_7);

 if (VAR_8) {
  for (VAR_4 = VAR_5, VAR_3 = VAR_1;
       VAR_4;
       VAR_4 = VAR_4->next, VAR_3 = VAR_3->next)
   if (VAR_4 == VAR_7) {
    *VAR_2 = VAR_3;
    break;
   }
 }

 return VAR_8;
}
