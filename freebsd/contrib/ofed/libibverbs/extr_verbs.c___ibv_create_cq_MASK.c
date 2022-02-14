
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_cq {int dummy; } ;
struct TYPE_2__ {struct ibv_cq* (* create_cq ) (struct ibv_context*,int,struct ibv_comp_channel*,int) ;} ;
struct ibv_context {TYPE_1__ ops; } ;
struct ibv_comp_channel {int dummy; } ;


 struct ibv_cq* FUNC_0 (struct ibv_context*,int,struct ibv_comp_channel*,int) ;
 int FUNC_1 (struct ibv_cq*,struct ibv_context*,struct ibv_comp_channel*,void*) ;

struct ibv_cq *FUNC_2(struct ibv_context *VAR_0, int VAR_1, void *VAR_2,
          struct ibv_comp_channel *VAR_3, int VAR_4)
{
 struct ibv_cq *VAR_5;

 VAR_5 = VAR_0->ops.create_cq(VAR_0, VAR_1, VAR_3, VAR_4);

 if (VAR_5)
  FUNC_1(VAR_5, VAR_0, VAR_3, VAR_2);

 return VAR_5;
}
