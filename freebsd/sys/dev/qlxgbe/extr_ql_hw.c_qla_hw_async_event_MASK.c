
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int aen_mb0; int aen_mb4; int aen_mb3; int aen_mb2; int aen_mb1; } ;
struct TYPE_6__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;

void
FUNC_1(qla_host_t *VAR_0)
{
        switch (VAR_0->hw.aen_mb0) {
        case 0x8101:
                (void)FUNC_0(VAR_0, VAR_0->hw.aen_mb1, VAR_0->hw.aen_mb2,
                        VAR_0->hw.aen_mb3, VAR_0->hw.aen_mb4);

                break;

        default:
                break;
        }

        return;
}
