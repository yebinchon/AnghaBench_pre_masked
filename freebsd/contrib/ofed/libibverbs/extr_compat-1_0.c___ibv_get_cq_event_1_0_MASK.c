
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_cq_1_0 {void* cq_context; } ;
struct ibv_cq {int dummy; } ;
struct ibv_comp_channel {int dummy; } ;


 int FUNC_0 (struct ibv_comp_channel*,struct ibv_cq**,void**) ;

int FUNC_1(struct ibv_comp_channel *VAR_0,
      struct ibv_cq_1_0 **VAR_1, void **VAR_2)
{
 struct ibv_cq *VAR_3;
 void *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 *VAR_1 = VAR_4;
 *VAR_2 = (*VAR_1)->cq_context;

 return 0;
}
