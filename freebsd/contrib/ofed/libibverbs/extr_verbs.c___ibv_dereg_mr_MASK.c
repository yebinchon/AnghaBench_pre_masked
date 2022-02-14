
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_mr {size_t length; TYPE_2__* context; void* addr; } ;
struct TYPE_3__ {int (* dereg_mr ) (struct ibv_mr*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (struct ibv_mr*) ;

int FUNC_2(struct ibv_mr *VAR_0)
{
 int VAR_1;
 void *VAR_2 = VAR_0->addr;
 size_t VAR_3 = VAR_0->length;

 VAR_1 = VAR_0->context->ops.dereg_mr(VAR_0);
 if (!VAR_1)
  FUNC_0(VAR_2, VAR_3);

 return VAR_1;
}
