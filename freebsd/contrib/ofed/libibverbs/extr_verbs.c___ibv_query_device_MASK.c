
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_device_attr {int dummy; } ;
struct TYPE_2__ {int (* query_device ) (struct ibv_context*,struct ibv_device_attr*) ;} ;
struct ibv_context {TYPE_1__ ops; } ;


 int FUNC_0 (struct ibv_context*,struct ibv_device_attr*) ;

int FUNC_1(struct ibv_context *VAR_0,
         struct ibv_device_attr *VAR_1)
{
 return VAR_0->ops.query_device(VAR_0, VAR_1);
}
