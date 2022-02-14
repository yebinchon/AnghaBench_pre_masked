
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ibv_port_attr {int dummy; } ;
struct TYPE_2__ {int (* query_port ) (struct ibv_context*,int ,struct ibv_port_attr*) ;} ;
struct ibv_context {TYPE_1__ ops; } ;


 int FUNC_0 (struct ibv_context*,int ,struct ibv_port_attr*) ;

int FUNC_1(struct ibv_context *VAR_0, uint8_t VAR_1,
       struct ibv_port_attr *VAR_2)
{
 return VAR_0->ops.query_port(VAR_0, VAR_1, VAR_2);
}
