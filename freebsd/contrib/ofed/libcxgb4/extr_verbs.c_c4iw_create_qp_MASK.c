
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_qp_init_attr {int dummy; } ;
struct ibv_qp {int dummy; } ;
struct ibv_pd {TYPE_1__* context; } ;
struct c4iw_dev {scalar_t__ abi_version; } ;
struct TYPE_2__ {int device; } ;


 struct ibv_qp* FUNC_0 (struct ibv_pd*,struct ibv_qp_init_attr*) ;
 struct ibv_qp* FUNC_1 (struct ibv_pd*,struct ibv_qp_init_attr*) ;
 struct c4iw_dev* FUNC_2 (int ) ;

struct ibv_qp *FUNC_3(struct ibv_pd *VAR_0,
         struct ibv_qp_init_attr *VAR_1)
{
 struct c4iw_dev *VAR_2 = FUNC_2(VAR_0->context->device);

 if (VAR_2->abi_version == 0)
  return FUNC_1(VAR_0, VAR_1);
 return FUNC_0(VAR_0, VAR_1);
}
