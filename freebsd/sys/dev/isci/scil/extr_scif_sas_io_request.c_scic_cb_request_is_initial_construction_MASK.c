
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


struct TYPE_15__ {int core_object; } ;
struct TYPE_11__ {scalar_t__ state; } ;
struct TYPE_12__ {TYPE_3__ sequence; } ;
struct TYPE_14__ {TYPE_4__ stp; TYPE_7__* device; } ;
struct TYPE_9__ {scalar_t__ attached_stp_target; } ;
struct TYPE_10__ {TYPE_1__ bits; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
typedef TYPE_5__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef TYPE_6__ SCIF_SAS_REQUEST_T ;
typedef TYPE_7__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_5__*) ;

BOOL FUNC_1(
   void * VAR_3
)
{
   SCIF_SAS_REQUEST_T * VAR_4 = (SCIF_SAS_REQUEST_T*)
                                   VAR_3;
   SCIF_SAS_REMOTE_DEVICE_T* VAR_5 = VAR_4->device;

   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_6;
   FUNC_0(VAR_5->core_object, &VAR_6);

   if (VAR_6.u.bits.attached_stp_target
       && VAR_4->stp.sequence.state == VAR_1)
      return VAR_0;

   return VAR_2;
}
