
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_pd_1_0 {int context; int real_pd; } ;
struct ibv_ah_attr {int dummy; } ;
struct ibv_ah_1_0 {struct ibv_ah* real_ah; struct ibv_pd_1_0* pd; int context; } ;
struct ibv_ah {int dummy; } ;


 int FUNC_0 (struct ibv_ah_1_0*) ;
 struct ibv_ah* FUNC_1 (int ,struct ibv_ah_attr*) ;
 struct ibv_ah_1_0* FUNC_2 (int) ;

struct ibv_ah_1_0 *FUNC_3(struct ibv_pd_1_0 *VAR_0,
           struct ibv_ah_attr *VAR_1)
{
 struct ibv_ah *VAR_2;
 struct ibv_ah_1_0 *VAR_3;

 VAR_3 = FUNC_2(sizeof *VAR_3);
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_0->real_pd, VAR_1);
 if (!VAR_2) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_3->context = VAR_0->context;
 VAR_3->pd = VAR_0;
 VAR_3->real_ah = VAR_2;

 return VAR_3;
}
