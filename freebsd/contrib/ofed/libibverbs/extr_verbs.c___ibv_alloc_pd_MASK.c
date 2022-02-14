
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_pd {struct ibv_context* context; } ;
struct TYPE_2__ {struct ibv_pd* (* alloc_pd ) (struct ibv_context*) ;} ;
struct ibv_context {TYPE_1__ ops; } ;


 struct ibv_pd* FUNC_0 (struct ibv_context*) ;

struct ibv_pd *FUNC_1(struct ibv_context *VAR_0)
{
 struct ibv_pd *VAR_1;

 VAR_1 = VAR_0->ops.alloc_pd(VAR_0);
 if (VAR_1)
  VAR_1->context = VAR_0;

 return VAR_1;
}
