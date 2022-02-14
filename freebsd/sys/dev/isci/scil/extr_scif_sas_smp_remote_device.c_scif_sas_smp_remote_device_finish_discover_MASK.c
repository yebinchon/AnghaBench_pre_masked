
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ is_config_route_table_needed; } ;
struct TYPE_12__ {int * list_head; } ;
struct TYPE_13__ {TYPE_1__ smp_phy_list; } ;
struct TYPE_14__ {TYPE_2__ smp_device; } ;
struct TYPE_15__ {TYPE_3__ protocol_device; TYPE_5__* domain; } ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_5__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;

void FUNC_6(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2
)
{
   SCIF_SAS_DOMAIN_T * VAR_3 = VAR_2->domain;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_finish_discover(0x%x) enter\n",
      VAR_2
   ));

   if ( VAR_3->is_config_route_table_needed
       && VAR_2->protocol_device.smp_device.smp_phy_list.list_head != ((void*)0))
      FUNC_4(VAR_2);


   FUNC_3(VAR_2);







   FUNC_2(VAR_3);
}
