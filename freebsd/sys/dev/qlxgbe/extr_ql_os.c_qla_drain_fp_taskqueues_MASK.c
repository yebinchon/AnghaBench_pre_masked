
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * fp_taskqueue; } ;
typedef TYPE_2__ qla_tx_fp_t ;
struct TYPE_5__ {int num_sds_rings; } ;
struct TYPE_7__ {TYPE_2__* tx_fp; TYPE_1__ hw; } ;
typedef TYPE_3__ qla_host_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(qla_host_t *VAR_0)
{
        int VAR_1;

        for (VAR_1 = 0; VAR_1 < VAR_0->hw.num_sds_rings; VAR_1++) {
                qla_tx_fp_t *VAR_2 = &VAR_0->tx_fp[VAR_1];

                if (VAR_2->fp_taskqueue != ((void*)0)) {
                        FUNC_0(VAR_2->fp_taskqueue);
                }
        }
        return;
}
