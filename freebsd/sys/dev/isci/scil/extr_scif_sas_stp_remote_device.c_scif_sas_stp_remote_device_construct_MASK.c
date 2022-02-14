
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_9__ {scalar_t__ s_active; int sati_device; } ;
struct TYPE_10__ {TYPE_1__ stp_device; } ;
struct TYPE_15__ {TYPE_2__ protocol_device; TYPE_6__* domain; } ;
struct TYPE_14__ {TYPE_5__* controller; } ;
struct TYPE_11__ {int ignore_fua; scalar_t__ max_ncq_depth; int is_sata_ncq_enabled; } ;
struct TYPE_12__ {TYPE_3__ sas; } ;
struct TYPE_13__ {TYPE_4__ user_parameters; } ;
typedef TYPE_7__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int *,int ,int ,int ) ;

void FUNC_1(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_0
)
{
   FUNC_0(
      &VAR_0->protocol_device.stp_device.sati_device,
      VAR_0->domain->controller->user_parameters.sas.is_sata_ncq_enabled,
      (U8) VAR_0->domain->controller->user_parameters.sas.max_ncq_depth,
      VAR_0->domain->controller->user_parameters.sas.ignore_fua
   );

   VAR_0->protocol_device.stp_device.s_active = 0;
}
