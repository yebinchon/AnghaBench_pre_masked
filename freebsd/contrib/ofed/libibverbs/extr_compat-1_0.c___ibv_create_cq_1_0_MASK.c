
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_cq_1_0 {int cqe; struct ibv_cq* real_cq; void* cq_context; struct ibv_context_1_0* context; } ;
struct ibv_cq {struct ibv_cq_1_0* cq_context; } ;
struct ibv_context_1_0 {int real_context; } ;
struct ibv_comp_channel {int dummy; } ;


 int FUNC_0 (struct ibv_cq_1_0*) ;
 struct ibv_cq* FUNC_1 (int ,int,void*,struct ibv_comp_channel*,int) ;
 struct ibv_cq_1_0* FUNC_2 (int) ;

struct ibv_cq_1_0 *FUNC_3(struct ibv_context_1_0 *VAR_0, int VAR_1,
           void *VAR_2,
           struct ibv_comp_channel *VAR_3,
           int VAR_4)
{
 struct ibv_cq *VAR_5;
 struct ibv_cq_1_0 *VAR_6;

 VAR_6 = FUNC_2(sizeof *VAR_6);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_0->real_context, VAR_1, VAR_2,
    VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_6->context = VAR_0;
 VAR_6->cq_context = VAR_2;
 VAR_6->cqe = VAR_1;
 VAR_6->real_cq = VAR_5;

 VAR_5->cq_context = VAR_6;

 return VAR_6;
}
