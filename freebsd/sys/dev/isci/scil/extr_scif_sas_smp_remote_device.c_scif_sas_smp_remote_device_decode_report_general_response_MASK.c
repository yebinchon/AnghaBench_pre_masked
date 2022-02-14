
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_16__ {scalar_t__ element_count; } ;
struct TYPE_17__ {int expander_route_indexes; TYPE_3__ smp_phy_list; void* is_able_to_config_others; void* is_externally_configurable; void* is_table_to_table_supported; scalar_t__ number_of_phys; } ;
struct TYPE_18__ {TYPE_4__ smp_device; } ;
struct TYPE_22__ {TYPE_5__ protocol_device; TYPE_2__* domain; int * containing_device; } ;
struct TYPE_21__ {scalar_t__ function_result; } ;
struct TYPE_20__ {int expander_route_indexes; scalar_t__ configuring; scalar_t__ configures_others; scalar_t__ configurable_route_table; scalar_t__ table_to_table_supported; scalar_t__ number_of_phys; } ;
struct TYPE_14__ {TYPE_7__ report_general; } ;
struct TYPE_19__ {TYPE_8__ header; TYPE_1__ response; } ;
struct TYPE_15__ {int is_config_route_table_needed; } ;
typedef TYPE_6__ SMP_RESPONSE_T ;
typedef TYPE_7__ SMP_RESPONSE_REPORT_GENERAL_T ;
typedef TYPE_8__ SMP_RESPONSE_HEADER_T ;
typedef int SCI_STATUS ;
typedef TYPE_9__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef void* BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*) ;

SCI_STATUS FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7,
   SMP_RESPONSE_T * VAR_8
)
{
   SMP_RESPONSE_REPORT_GENERAL_T * VAR_9 =
      &VAR_8->response.report_general;

   SMP_RESPONSE_HEADER_T * VAR_10 = &VAR_8->header;

   FUNC_1((
      FUNC_2(VAR_7),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_decode_report_general_response(0x%x, 0x%x) enter\n",
      VAR_7, VAR_8
   ));

   if (VAR_10->function_result != VAR_5)
   {



      FUNC_0((
         FUNC_2(VAR_7),
         VAR_1 | VAR_0,
         "Report General function result(0x%x)\n",
         VAR_10->function_result
      ));

      return VAR_2;
   }


   VAR_7->protocol_device.smp_device.number_of_phys =
      (U8)VAR_9->number_of_phys;


   VAR_7->protocol_device.smp_device.expander_route_indexes =
      ((VAR_9->expander_route_indexes & 0xff) << 8) |
      ((VAR_9->expander_route_indexes & 0xff00) >> 8);

   VAR_7->protocol_device.smp_device.is_table_to_table_supported =
      (BOOL)VAR_9->table_to_table_supported;

   VAR_7->protocol_device.smp_device.is_externally_configurable =
      (BOOL)VAR_9->configurable_route_table;

   VAR_7->protocol_device.smp_device.is_able_to_config_others =
      (BOOL)VAR_9->configures_others;





   if (VAR_7->containing_device == ((void*)0)
       && ! VAR_7->protocol_device.smp_device.is_able_to_config_others)
      VAR_7->domain->is_config_route_table_needed = VAR_6;



   if (VAR_7->protocol_device.smp_device.smp_phy_list.element_count == 0)
      FUNC_3(VAR_7);

   if (VAR_9->configuring)
      return VAR_3;

   return VAR_4;
}
