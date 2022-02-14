
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ibv_gid {int dummy; } ibv_gid ;
typedef int uint16_t ;
struct ibv_qp {TYPE_2__* context; } ;
struct TYPE_3__ {int (* detach_mcast ) (struct ibv_qp*,union ibv_gid const*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct ibv_qp*,union ibv_gid const*,int ) ;

int FUNC_1(struct ibv_qp *VAR_0, const union ibv_gid *VAR_1, uint16_t VAR_2)
{
 return VAR_0->context->ops.detach_mcast(VAR_0, VAR_1, VAR_2);
}
