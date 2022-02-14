
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_srq_init_attr {int srq_context; } ;
struct ibv_srq_1_0 {struct ibv_srq* real_srq; struct ibv_pd_1_0* pd; int srq_context; int context; } ;
struct ibv_srq {struct ibv_srq_1_0* srq_context; } ;
struct ibv_pd_1_0 {int context; int real_pd; } ;


 int FUNC_0 (struct ibv_srq_1_0*) ;
 struct ibv_srq* FUNC_1 (int ,struct ibv_srq_init_attr*) ;
 struct ibv_srq_1_0* FUNC_2 (int) ;

struct ibv_srq_1_0 *FUNC_3(struct ibv_pd_1_0 *VAR_0,
      struct ibv_srq_init_attr *VAR_1)
{
 struct ibv_srq *VAR_2;
 struct ibv_srq_1_0 *VAR_3;

 VAR_3 = FUNC_2(sizeof *VAR_3);
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_0->real_pd, VAR_1);
 if (!VAR_2) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_3->context = VAR_0->context;
 VAR_3->srq_context = VAR_1->srq_context;
 VAR_3->pd = VAR_0;
 VAR_3->real_srq = VAR_2;

 VAR_2->srq_context = VAR_3;

 return VAR_3;
}
