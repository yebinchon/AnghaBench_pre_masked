
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_pd_1_0 {int context; int real_pd; } ;
struct ibv_mr_1_0 {struct ibv_mr* real_mr; int rkey; int lkey; struct ibv_pd_1_0* pd; int context; } ;
struct ibv_mr {int rkey; int lkey; } ;


 int FUNC_0 (struct ibv_mr_1_0*) ;
 struct ibv_mr* FUNC_1 (int ,void*,size_t,int) ;
 struct ibv_mr_1_0* FUNC_2 (int) ;

struct ibv_mr_1_0 *FUNC_3(struct ibv_pd_1_0 *VAR_0, void *VAR_1,
        size_t VAR_2, int VAR_3)
{
 struct ibv_mr *VAR_4;
 struct ibv_mr_1_0 *VAR_5;

 VAR_5 = FUNC_2(sizeof *VAR_5);
 if (!VAR_5)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_0->real_pd, VAR_1, VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 VAR_5->context = VAR_0->context;
 VAR_5->pd = VAR_0;
 VAR_5->lkey = VAR_4->lkey;
 VAR_5->rkey = VAR_4->rkey;
 VAR_5->real_mr = VAR_4;

 return VAR_5;
}
