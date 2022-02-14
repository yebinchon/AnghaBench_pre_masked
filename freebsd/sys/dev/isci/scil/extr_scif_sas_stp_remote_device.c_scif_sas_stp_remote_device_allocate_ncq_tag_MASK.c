
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ U8 ;
typedef int U32 ;
struct TYPE_7__ {scalar_t__ ncq_depth; } ;
struct TYPE_8__ {int s_active; TYPE_1__ sati_device; } ;
struct TYPE_9__ {TYPE_2__ stp_device; } ;
struct TYPE_10__ {TYPE_3__ protocol_device; } ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;

U8 FUNC_3(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3
)
{
   U8 VAR_4 = 0;
   U32 VAR_5 = 1;

   FUNC_1((
      FUNC_2(VAR_3),
      VAR_1 | VAR_0,
      "scif_sas_stp_remote_device_allocate_ncq_tag(0x%x)\n",
      VAR_3
   ));


   while ( (VAR_3->protocol_device.stp_device.s_active & VAR_5)
         && (VAR_4 < VAR_3->protocol_device.stp_device.sati_device.ncq_depth) )
   {
      VAR_5 <<= 1;
      VAR_4++;
   }


   if (VAR_4 < VAR_3->protocol_device.stp_device.sati_device.ncq_depth)
   {
      FUNC_0((
         FUNC_2(VAR_3),
         VAR_1 | VAR_0,
         "RemoteDevice:0x%x NcqTag:0x%x successful NCQ TAG allocation\n",
         VAR_3, VAR_4
      ));

      VAR_3->protocol_device.stp_device.s_active |= VAR_5;
      return VAR_4;
   }

   FUNC_0((
      FUNC_2(VAR_3),
      VAR_1 | VAR_0,
      "RemoteDevice:0x%x unable to allocate NCQ TAG\n",
      VAR_3
   ));


   return VAR_2;
}
