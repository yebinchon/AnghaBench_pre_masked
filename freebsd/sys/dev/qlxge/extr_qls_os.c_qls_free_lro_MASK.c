
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lro_ctrl {int dummy; } ;
struct TYPE_6__ {scalar_t__ lro_init; } ;
struct TYPE_7__ {int num_rx_rings; TYPE_2__ flags; TYPE_1__* rx_ring; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_5__ {struct lro_ctrl lro; } ;


 int FUNC_0 (struct lro_ctrl*) ;

__attribute__((used)) static void
FUNC_1(qla_host_t *VAR_0)
{
        int VAR_1;
        struct lro_ctrl *VAR_2;

        if (!VAR_0->flags.lro_init)
                return;

        for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_rings; VAR_1++) {
                VAR_2 = &VAR_0->rx_ring[VAR_1].lro;
                FUNC_0(VAR_2);
        }
        VAR_0->flags.lro_init = 0;
}
