
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int virt; } ;
struct TYPE_5__ {int drvsm; scalar_t__ flogi_service_params; TYPE_1__ dma; } ;
typedef TYPE_2__ ocs_domain_t ;
typedef int fc_plogi_payload_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int ,int *) ;

void
FUNC_2(ocs_domain_t *VAR_1, uint32_t VAR_2)
{
 FUNC_0(VAR_1->dma.virt, ((uint8_t*)VAR_1->flogi_service_params)+4, sizeof (fc_plogi_payload_t) - 4);
 (void)FUNC_1(&VAR_1->drvsm, VAR_0, &VAR_2);
}
