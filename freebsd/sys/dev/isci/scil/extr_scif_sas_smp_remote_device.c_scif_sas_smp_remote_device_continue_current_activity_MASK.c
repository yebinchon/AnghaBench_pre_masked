
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_31__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_25__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_40__ {int retry_count; } ;
struct TYPE_33__ {scalar_t__ current_activity; scalar_t__ curr_config_route_index; scalar_t__ is_route_table_cleaned; TYPE_3__* config_route_smp_phy_anchor; TYPE_3__* curr_config_route_destination_smp_phy; int current_activity_phy_index; int * smp_activity_timer; } ;
struct TYPE_35__ {TYPE_1__ smp_device; } ;
struct TYPE_39__ {TYPE_2__ protocol_device; TYPE_25__* domain; int core_object; } ;
struct TYPE_38__ {scalar_t__ is_internal; } ;
struct TYPE_36__ {int * owning_list; } ;
struct TYPE_37__ {scalar_t__ config_route_table_index_anchor; int phy_identifier; TYPE_31__ list_element; } ;
struct TYPE_34__ {scalar_t__ controller; } ;
typedef int SCI_TIMER_CALLBACK_T ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_FAST_LIST_T ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_3__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_4__ SCIF_SAS_REQUEST_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_IO_REQUEST_T ;
typedef int SCIF_SAS_INTERNAL_IO_REQUEST_T ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 TYPE_3__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_31__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,int ,void*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (TYPE_25__*) ;
 TYPE_5__* FUNC_8 (TYPE_25__*,TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_25__*,TYPE_5__*) ;
 int FUNC_10 (scalar_t__,int *,scalar_t__) ;
 scalar_t__ VAR_16 ;
 TYPE_3__* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_19 (TYPE_5__*,TYPE_5__*) ;
 scalar_t__ FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*,int,int) ;
 int FUNC_22 (TYPE_5__*) ;

void FUNC_23(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_17,
   SCIF_SAS_REQUEST_T * VAR_18,
   SCI_STATUS VAR_19
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_20 = (SCIF_SAS_IO_REQUEST_T *)VAR_18;

   U8 VAR_21 = VAR_20->retry_count;

   if (VAR_18->is_internal)
   {


      FUNC_10(
         VAR_17->domain->controller,
         (SCIF_SAS_INTERNAL_IO_REQUEST_T *)VAR_18,
         VAR_14
      );
   }

   if (VAR_17->protocol_device.smp_device.current_activity ==
      VAR_7)
   {
      if (VAR_19 == VAR_14)
      {
         FUNC_15(VAR_17);
      }
      else if (VAR_19 == VAR_13)
      {



         U32 VAR_22 = (VAR_1 / 2) / VAR_3;

         if (VAR_21 < VAR_3)
            FUNC_21 (
               VAR_17, VAR_21, VAR_22);
         else
            FUNC_17(VAR_17);
      }
      else if (VAR_19 == VAR_12)
      {


         FUNC_9(VAR_17->domain, VAR_17);


         FUNC_7(VAR_17->domain);
      }
      else
      {
         FUNC_17(VAR_17);
      }
   }
   else if (VAR_17->protocol_device.smp_device.current_activity ==
      VAR_10)
   {
      if (VAR_19 == VAR_14)
      {
         FUNC_16(
            VAR_17, VAR_18);
      }
      else if (VAR_19 == VAR_13)
      {



         if (VAR_21 < VAR_3)
         {
            if (VAR_17->protocol_device.smp_device.smp_activity_timer == ((void*)0))
            {

               VAR_17->protocol_device.smp_device.smp_activity_timer =
                  FUNC_5(
                  (SCI_CONTROLLER_HANDLE_T *)VAR_17->domain->controller,
                  (SCI_TIMER_CALLBACK_T)VAR_16,
                  (void*)VAR_18
               );
            }
            else
            {
               FUNC_0(0);
            }


            FUNC_6(
               (SCI_CONTROLLER_HANDLE_T)VAR_17->domain->controller,
               VAR_17->protocol_device.smp_device.smp_activity_timer,
               VAR_15
            );
         }
         else
            FUNC_18(VAR_17, VAR_18);
      }
      else

         FUNC_18(VAR_17, VAR_18);
   }
   else if (VAR_17->protocol_device.smp_device.current_activity ==
      VAR_9)
   {
      SCIF_SAS_REMOTE_DEVICE_T * VAR_23 =
         FUNC_8(
            VAR_17->domain,
            VAR_17,
            VAR_17->protocol_device.smp_device.current_activity_phy_index
         );

      if (VAR_19 == VAR_14)
      {

         FUNC_22(VAR_17);
      }
      else if (VAR_19 == VAR_13)
      {
         U32 VAR_24 =
            (FUNC_4(VAR_23->core_object) /
                VAR_3);




         if (VAR_21 < VAR_3)
         {
            FUNC_21(
               VAR_17, VAR_21, VAR_24);
         }
         else
         {
            FUNC_19(
               VAR_17 , VAR_23);
         }
      }
      else
        FUNC_19(
           VAR_17, VAR_23);
   }
   else if (VAR_17->protocol_device.smp_device.current_activity ==
      VAR_6)
   {
      SCI_FAST_LIST_ELEMENT_T * VAR_25 = FUNC_2(
         &(VAR_17->protocol_device.smp_device.curr_config_route_destination_smp_phy->list_element) );

      SCI_FAST_LIST_T * VAR_26 =
          VAR_17->protocol_device.smp_device.curr_config_route_destination_smp_phy->list_element.owning_list;

      SCIF_SAS_SMP_PHY_T * VAR_27 = ((void*)0);

      if (VAR_25 != ((void*)0)
          && VAR_19 != VAR_11)
      {
         VAR_17->protocol_device.smp_device.curr_config_route_index++;

         VAR_17->protocol_device.smp_device.curr_config_route_destination_smp_phy =
            (SCIF_SAS_SMP_PHY_T *)FUNC_3(VAR_25);


         VAR_17->protocol_device.smp_device.config_route_smp_phy_anchor->config_route_table_index_anchor =
            VAR_17->protocol_device.smp_device.curr_config_route_index;

         FUNC_13(VAR_17);
      }
      else if ( FUNC_20(VAR_17)
                   == VAR_2
                && (VAR_27 = FUNC_11(
                       VAR_17->protocol_device.smp_device.config_route_smp_phy_anchor)
                   )!= ((void*)0)
              )
      {

         VAR_17->protocol_device.smp_device.config_route_smp_phy_anchor =
            VAR_27;

         VAR_17->protocol_device.smp_device.current_activity_phy_index =
            VAR_17->protocol_device.smp_device.config_route_smp_phy_anchor->phy_identifier;

         VAR_17->protocol_device.smp_device.curr_config_route_destination_smp_phy =
            FUNC_1(VAR_26);

         if (VAR_17->protocol_device.smp_device.config_route_smp_phy_anchor->config_route_table_index_anchor != 0)
            VAR_17->protocol_device.smp_device.curr_config_route_index =
               VAR_17->protocol_device.smp_device.config_route_smp_phy_anchor->config_route_table_index_anchor + 1;
         else
            VAR_17->protocol_device.smp_device.curr_config_route_index = 0;

         FUNC_13(VAR_17);
      }
      else if ( VAR_17->protocol_device.smp_device.is_route_table_cleaned == VAR_0)
      {
         VAR_17->protocol_device.smp_device.current_activity =
            VAR_4;

         FUNC_12(VAR_17);
      }
      else
      {

         VAR_17->protocol_device.smp_device.current_activity =
            VAR_8;



         FUNC_7(VAR_17->domain);
      }
   }
   else if (VAR_17->protocol_device.smp_device.current_activity ==
               VAR_4)
   {
      FUNC_12(VAR_17);
   }
   else if (VAR_17->protocol_device.smp_device.current_activity ==
               VAR_5)
   {
      FUNC_14(VAR_17);
   }
}
