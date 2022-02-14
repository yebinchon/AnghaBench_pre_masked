
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ current_activity; } ;
struct TYPE_6__ {TYPE_1__ smp_device; } ;
struct TYPE_7__ {TYPE_2__ protocol_device; } ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;

BOOL FUNC_0(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_1
)
{
   return(VAR_1->protocol_device.smp_device.current_activity
          != VAR_0);
}
