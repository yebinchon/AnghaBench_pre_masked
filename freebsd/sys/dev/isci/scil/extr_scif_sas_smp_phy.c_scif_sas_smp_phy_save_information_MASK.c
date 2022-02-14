
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* U8 ;
struct TYPE_10__ {int * end_device; } ;
struct TYPE_12__ {scalar_t__ phy_identifier; scalar_t__ attached_device_type; TYPE_3__ u; scalar_t__ config_route_table_index_anchor; int attached_sas_address; void* routing_attribute; int * owning_device; } ;
struct TYPE_8__ {scalar_t__ attached_device_type; } ;
struct TYPE_9__ {TYPE_1__ sas1_1; } ;
struct TYPE_11__ {scalar_t__ phy_identifier; int attached_sas_address; scalar_t__ routing_attribute; TYPE_2__ u2; } ;
typedef TYPE_4__ SMP_RESPONSE_DISCOVER_T ;
typedef TYPE_5__ SCIF_SAS_SMP_PHY_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(
   SCIF_SAS_SMP_PHY_T * VAR_2,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3,
   SMP_RESPONSE_DISCOVER_T * VAR_4
)
{
   FUNC_0 (VAR_2->owning_device != ((void*)0));
   FUNC_0 (VAR_2->phy_identifier == VAR_4->phy_identifier);

   VAR_2->attached_device_type = (U8)VAR_4->u2.sas1_1.attached_device_type;
   VAR_2->routing_attribute = (U8)VAR_4->routing_attribute;
   VAR_2->attached_sas_address = VAR_4->attached_sas_address;
   VAR_2->config_route_table_index_anchor = 0;

   if (VAR_2->attached_device_type != VAR_0
       && VAR_2->attached_device_type != VAR_1)
   {

      VAR_2->u.end_device = VAR_3;
   }
   else
   {


      ;
   }
}
