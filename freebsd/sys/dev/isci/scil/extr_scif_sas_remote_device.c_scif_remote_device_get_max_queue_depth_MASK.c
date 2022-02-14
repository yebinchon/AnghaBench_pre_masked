
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


typedef int U16 ;
struct TYPE_11__ {int capabilities; int ncq_depth; } ;
struct TYPE_12__ {TYPE_3__ sati_device; } ;
struct TYPE_13__ {TYPE_4__ stp_device; } ;
struct TYPE_15__ {TYPE_5__ protocol_device; int core_object; } ;
struct TYPE_9__ {scalar_t__ attached_stp_target; } ;
struct TYPE_10__ {TYPE_1__ bits; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
typedef TYPE_6__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_7__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_6__*) ;

U16 FUNC_1(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_2
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_2;
   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_4;

   FUNC_0(VAR_3->core_object, &VAR_4);



   if (VAR_4.u.bits.attached_stp_target)
   {
      if (VAR_3->protocol_device.stp_device.sati_device.capabilities
          & VAR_0)
      {
         return VAR_3->protocol_device.stp_device.sati_device.ncq_depth;
      }
      else
      {

         return 1;
      }
   }


   return VAR_1;
}
