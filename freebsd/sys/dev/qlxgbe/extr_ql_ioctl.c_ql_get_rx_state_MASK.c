
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int num_rds_rings; TYPE_2__* rds; } ;
struct TYPE_9__ {TYPE_1__ hw; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_10__ {int rx_next; int prod_std; } ;
typedef TYPE_4__ qla_drvr_state_rx_t ;
struct TYPE_8__ {int rx_next; int prod_std; } ;



__attribute__((used)) static void
FUNC_0(qla_host_t *VAR_0, qla_drvr_state_rx_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->hw.num_rds_rings; VAR_2++) {
  VAR_1->prod_std = VAR_0->hw.rds[VAR_2].prod_std;
  VAR_1->rx_next = VAR_0->hw.rds[VAR_2].rx_next;
  VAR_1++;
 }
 return;
}
