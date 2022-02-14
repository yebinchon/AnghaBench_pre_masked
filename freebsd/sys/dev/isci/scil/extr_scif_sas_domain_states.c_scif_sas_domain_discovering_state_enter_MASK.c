
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_19__ ;
typedef struct TYPE_24__ TYPE_17__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_25__ {scalar_t__ previous_state_id; } ;
struct TYPE_32__ {TYPE_19__ state_machine; } ;
struct TYPE_31__ {scalar_t__ element_count; } ;
struct TYPE_34__ {TYPE_7__ parent; int remote_device_list; TYPE_6__ request_list; int controller; int core_object; scalar_t__ broadcast_change_count; } ;
struct TYPE_29__ {scalar_t__ current_state_id; } ;
struct TYPE_30__ {TYPE_4__ state_machine; } ;
struct TYPE_33__ {TYPE_5__ parent; } ;
struct TYPE_26__ {scalar_t__ smp_target; } ;
struct TYPE_27__ {TYPE_1__ bits; } ;
struct TYPE_24__ {TYPE_2__ u; } ;
struct TYPE_28__ {TYPE_17__ protocols; int sas_address; } ;
struct TYPE_23__ {TYPE_3__ remote; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef int SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_8__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_9__ SCIF_SAS_DOMAIN_T ;
typedef TYPE_10__ SCIC_PORT_PROPERTIES_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_8__* VAR_6 ;
 int FUNC_3 (TYPE_9__*,int ,int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_19__*,int ) ;
 int FUNC_10 (int ,TYPE_10__*) ;
 int FUNC_11 (int ,TYPE_9__*,int *,TYPE_17__*) ;
 int FUNC_12 (int ,TYPE_9__*,TYPE_8__*) ;
 scalar_t__ FUNC_13 (TYPE_9__*,int *) ;
 int FUNC_14 (TYPE_9__*,TYPE_8__*) ;
 int VAR_7 ;

__attribute__((used)) static
void FUNC_15(
   SCI_BASE_OBJECT_T * VAR_8
)
{
   SCIF_SAS_DOMAIN_T * VAR_9 = (SCIF_SAS_DOMAIN_T *)VAR_8;

   FUNC_3(
      VAR_9,
      VAR_7,
      VAR_2
   );

   FUNC_2((
      FUNC_8(VAR_9),
      VAR_0 | VAR_1,
      "scif_sas_domain_discovering_state_enter(0x%x) enter\n",
      VAR_9
   ));

   VAR_9->broadcast_change_count = 0;



   if (VAR_9->parent.state_machine.previous_state_id
       != VAR_4)
   {
      SCIF_SAS_REMOTE_DEVICE_T * VAR_10;
      SCIC_PORT_PROPERTIES_T VAR_11;

      FUNC_10(VAR_9->core_object, &VAR_11);



      VAR_10 = (SCIF_SAS_REMOTE_DEVICE_T *)
                      FUNC_13(
                         VAR_9, &VAR_11.remote.sas_address
                      );
      if (VAR_10 == VAR_6)
      {


         FUNC_11(
            VAR_9->controller,
            VAR_9,
            &VAR_11.remote.sas_address,
            &VAR_11.remote.protocols
         );
      }
      else
      {
         if(VAR_11.remote.protocols.u.bits.smp_target)

            FUNC_14(VAR_9, VAR_10);
      }
   }
   else
   {
      SCI_ABSTRACT_ELEMENT_T * VAR_12 =
             FUNC_4(&(VAR_9->remote_device_list) );

      SCIF_SAS_REMOTE_DEVICE_T * VAR_13;

      while (VAR_12 != ((void*)0))
      {
         VAR_13 = (SCIF_SAS_REMOTE_DEVICE_T *)
                     FUNC_6(VAR_12);

         FUNC_0(VAR_13->parent.state_machine.current_state_id
                == VAR_5);

         VAR_12 =
            FUNC_5(VAR_12);

         FUNC_1((
            FUNC_8(VAR_9),
            VAR_0 | VAR_1,
            "Controller:0x%x Domain:0x%x Device:0x%x removed\n",
            VAR_9->controller, VAR_9, VAR_13
         ));


         FUNC_12(
            VAR_9->controller, VAR_9, VAR_13
         );
      }

      FUNC_0(VAR_9->request_list.element_count == 0);
      FUNC_0(FUNC_7(&VAR_9->remote_device_list) == 0);

      FUNC_9(
         &VAR_9->parent.state_machine, VAR_3
      );
   }
}
