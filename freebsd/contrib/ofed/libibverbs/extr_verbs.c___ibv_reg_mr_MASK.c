
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_pd {TYPE_2__* context; } ;
struct ibv_mr {size_t length; void* addr; struct ibv_pd* pd; TYPE_2__* context; } ;
struct TYPE_3__ {struct ibv_mr* (* reg_mr ) (struct ibv_pd*,void*,size_t,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (void*,size_t) ;
 scalar_t__ FUNC_1 (void*,size_t) ;
 struct ibv_mr* FUNC_2 (struct ibv_pd*,void*,size_t,int) ;

struct ibv_mr *FUNC_3(struct ibv_pd *VAR_0, void *VAR_1,
       size_t VAR_2, int VAR_3)
{
 struct ibv_mr *VAR_4;

 if (FUNC_1(VAR_1, VAR_2))
  return ((void*)0);

 VAR_4 = VAR_0->context->ops.reg_mr(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  VAR_4->context = VAR_0->context;
  VAR_4->pd = VAR_0;
  VAR_4->addr = VAR_1;
  VAR_4->length = VAR_2;
 } else
  FUNC_0(VAR_1, VAR_2);

 return VAR_4;
}
