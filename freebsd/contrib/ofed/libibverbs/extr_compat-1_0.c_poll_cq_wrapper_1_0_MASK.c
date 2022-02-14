
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibv_wc {int dummy; } ;
struct ibv_cq_1_0 {int real_cq; TYPE_3__* context; } ;
struct TYPE_6__ {TYPE_2__* real_context; } ;
struct TYPE_4__ {int (* poll_cq ) (int ,int,struct ibv_wc*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 int FUNC_0 (int ,int,struct ibv_wc*) ;

__attribute__((used)) static int FUNC_1(struct ibv_cq_1_0 *VAR_0, int VAR_1,
          struct ibv_wc *VAR_2)
{
 return VAR_0->context->real_context->ops.poll_cq(VAR_0->real_cq, VAR_1, VAR_2);
}
