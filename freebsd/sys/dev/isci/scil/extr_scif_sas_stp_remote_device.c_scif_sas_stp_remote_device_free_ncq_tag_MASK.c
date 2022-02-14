
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_active; } ;
struct TYPE_4__ {TYPE_1__ stp_device; } ;
struct SCIF_SAS_REMOTE_DEVICE {TYPE_2__ protocol_device; } ;
typedef int U8 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct SCIF_SAS_REMOTE_DEVICE*) ;

void FUNC_2(
   struct SCIF_SAS_REMOTE_DEVICE * VAR_2,
   U8 VAR_3
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_1 | VAR_0,
      "RemoteDevice:0x%x NcqTag:0x%x freeing NCQ TAG\n",
      VAR_2, VAR_3
   ));

   VAR_2->protocol_device.stp_device.s_active &= ~(1 << VAR_3);
}
