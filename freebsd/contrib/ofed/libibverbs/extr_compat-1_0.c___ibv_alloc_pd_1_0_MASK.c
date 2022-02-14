
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_pd_1_0 {struct ibv_pd* real_pd; struct ibv_context_1_0* context; } ;
struct ibv_pd {int dummy; } ;
struct ibv_context_1_0 {int real_context; } ;


 int FUNC_0 (struct ibv_pd_1_0*) ;
 struct ibv_pd* FUNC_1 (int ) ;
 struct ibv_pd_1_0* FUNC_2 (int) ;

struct ibv_pd_1_0 *FUNC_3(struct ibv_context_1_0 *VAR_0)
{
 struct ibv_pd *VAR_1;
 struct ibv_pd_1_0 *VAR_2;

 VAR_2 = FUNC_2(sizeof *VAR_2);
 if (!VAR_2)
  return ((void*)0);

 VAR_1 = FUNC_1(VAR_0->real_context);
 if (!VAR_1) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_2->context = VAR_0;
 VAR_2->real_pd = VAR_1;

 return VAR_2;
}
