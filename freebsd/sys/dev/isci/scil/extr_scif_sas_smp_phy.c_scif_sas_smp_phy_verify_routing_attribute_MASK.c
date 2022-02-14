
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int routing_attribute; TYPE_3__* owning_device; } ;
struct TYPE_7__ {int is_table_to_table_supported; } ;
struct TYPE_8__ {TYPE_1__ smp_device; } ;
struct TYPE_9__ {TYPE_2__ protocol_device; } ;
typedef int SCI_STATUS ;
typedef TYPE_4__ SCIF_SAS_SMP_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

SCI_STATUS FUNC_0(
   SCIF_SAS_SMP_PHY_T * VAR_4,
   SCIF_SAS_SMP_PHY_T * VAR_5
)
{
   SCI_STATUS VAR_6 = VAR_2;



   if ( VAR_4->routing_attribute == VAR_0
         || VAR_5->routing_attribute == VAR_0 )
   {
      if ( (VAR_4->routing_attribute | VAR_5->routing_attribute)
           != VAR_0 )
         VAR_6 = VAR_1;
   }

   if (VAR_4->routing_attribute == VAR_3
       && VAR_5->routing_attribute == VAR_3)
   {
      if ( ! VAR_4->owning_device->protocol_device.smp_device.is_table_to_table_supported
         || !VAR_5->owning_device->protocol_device.smp_device.is_table_to_table_supported )
      VAR_6 = VAR_1;
   }

   return VAR_6;
}
