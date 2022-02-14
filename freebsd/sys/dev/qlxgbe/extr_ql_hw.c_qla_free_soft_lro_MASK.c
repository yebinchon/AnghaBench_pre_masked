
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lro_ctrl {int dummy; } ;
struct TYPE_6__ {int num_sds_rings; TYPE_1__* sds; } ;
typedef TYPE_2__ qla_hw_t ;
struct TYPE_7__ {TYPE_2__ hw; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_5__ {struct lro_ctrl lro; } ;


 int FUNC_0 (struct lro_ctrl*) ;

__attribute__((used)) static void
FUNC_1(qla_host_t *VAR_0)
{
        int VAR_1;
        qla_hw_t *VAR_2 = &VAR_0->hw;
        struct lro_ctrl *VAR_3;

        for (VAR_1 = 0; VAR_1 < VAR_2->num_sds_rings; VAR_1++) {
                VAR_3 = &VAR_2->sds[VAR_1].lro;
  FUNC_0(VAR_3);
 }

 return;
}
