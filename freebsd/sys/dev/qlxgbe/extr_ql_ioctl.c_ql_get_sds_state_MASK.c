
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int num_sds_rings; TYPE_2__* sds; } ;
struct TYPE_9__ {TYPE_1__ hw; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_10__ {int sds_consumer; int sdsr_next; } ;
typedef TYPE_4__ qla_drvr_state_sds_t ;
struct TYPE_8__ {int sds_consumer; int sdsr_next; } ;



__attribute__((used)) static void
FUNC_0(qla_host_t *VAR_0, qla_drvr_state_sds_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->hw.num_sds_rings; VAR_2++) {
  VAR_1->sdsr_next = VAR_0->hw.sds[VAR_2].sdsr_next;
  VAR_1->sds_consumer = VAR_0->hw.sds[VAR_2].sds_consumer;
  VAR_1++;
 }
 return;
}
