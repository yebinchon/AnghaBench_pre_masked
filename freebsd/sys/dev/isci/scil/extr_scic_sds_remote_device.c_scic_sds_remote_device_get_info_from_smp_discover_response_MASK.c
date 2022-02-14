
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int all; } ;
struct TYPE_14__ {TYPE_3__ u; } ;
struct TYPE_11__ {int low; int high; } ;
struct TYPE_18__ {TYPE_4__ target_protocols; TYPE_1__ device_address; } ;
struct TYPE_15__ {int all; } ;
struct TYPE_16__ {TYPE_5__ u; } ;
struct TYPE_12__ {int low; int high; } ;
struct TYPE_17__ {TYPE_6__ protocols; TYPE_2__ attached_sas_address; } ;
typedef TYPE_7__ SMP_RESPONSE_DISCOVER_T ;
typedef TYPE_8__ SCIC_SDS_REMOTE_DEVICE_T ;



void FUNC_0(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_0,
   SMP_RESPONSE_DISCOVER_T * VAR_1
)
{

   VAR_0->device_address.high =
      VAR_1->attached_sas_address.high;

   VAR_0->device_address.low =
      VAR_1->attached_sas_address.low;

   VAR_0->target_protocols.u.all = VAR_1->protocols.u.all;
}
