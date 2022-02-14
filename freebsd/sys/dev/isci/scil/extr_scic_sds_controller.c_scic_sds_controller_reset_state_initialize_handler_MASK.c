
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_28__ {scalar_t__ logical_port_entries; scalar_t__ task_context_entries; scalar_t__ remote_node_entries; int port_agent; TYPE_4__* scu_registers; int * port_table; int * phy_table; int timeout_timer; } ;
struct TYPE_25__ {int * protocol_engine; int * port; } ;
struct TYPE_26__ {int * viit; TYPE_2__ ptsg; TYPE_1__* pe; } ;
struct TYPE_27__ {TYPE_3__ peg0; } ;
struct TYPE_24__ {int ll; int tl; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_5__ SCIC_SDS_CONTROLLER_T ;


 void* FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,int *) ;
 int FUNC_15 (TYPE_5__*,int ) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*) ;
 int FUNC_22 (TYPE_5__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_23 (int *,int *,int *) ;
 scalar_t__ FUNC_24 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_25 (int *,int *,int **,int *) ;
 int FUNC_26 (TYPE_5__*) ;
 int FUNC_27 (TYPE_5__*,int ,scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 scalar_t__ FUNC_29 (scalar_t__) ;
 scalar_t__ FUNC_30 (scalar_t__) ;

__attribute__((used)) static
SCI_STATUS FUNC_31(
   SCI_BASE_CONTROLLER_T *VAR_12
)
{
   U32 VAR_13;
   SCI_STATUS VAR_14 = VAR_8;
   SCIC_SDS_CONTROLLER_T *VAR_15;

   VAR_15 = (SCIC_SDS_CONTROLLER_T *)VAR_12;

   FUNC_1(*(
      FUNC_11(VAR_12),
      VAR_1 | VAR_2,
      "scic_sds_controller_reset_state_initialize_handler(0x%x) enter\n",
      VAR_12
   ));

   FUNC_12(
      FUNC_18(VAR_15),
      VAR_4
   );

   VAR_15->timeout_timer = FUNC_14(
      VAR_12,
      VAR_11,
      VAR_12
   );

   FUNC_19(VAR_15);




   FUNC_22(VAR_15);
   if (VAR_8 == VAR_14)
   {
      U32 VAR_16;
      U32 VAR_17;


      FUNC_10(VAR_15, 0x00000000);



      VAR_14 = VAR_5;
      VAR_17 = 100;

      while (VAR_17-- && (VAR_14 != VAR_8))
      {

         FUNC_13(VAR_9);
         VAR_16 = FUNC_9(VAR_15);

         if ((VAR_16 & VAR_10) == VAR_10)
         {
            VAR_14 = VAR_8;
         }
      }
   }





   if (VAR_14 == VAR_8)
   {
      U32 VAR_18;
      U32 VAR_19;
      U32 VAR_20;
      U32 VAR_21;



      VAR_21 = FUNC_8(VAR_15);

      VAR_18 =
         FUNC_28(VAR_21);
      VAR_19 =
         FUNC_29(VAR_21);
      VAR_20 =
         FUNC_30(VAR_21);


      for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13++)
      {
         FUNC_27(
            VAR_15,
            VAR_15->scu_registers->peg0.ptsg.protocol_engine[VAR_13],
            VAR_13
         );
      }




      FUNC_15(VAR_15, VAR_7);


      VAR_15->logical_port_entries =
         FUNC_0(VAR_18, VAR_15->logical_port_entries);

      VAR_15->task_context_entries =
         FUNC_0(VAR_20, VAR_15->task_context_entries);

      VAR_15->remote_node_entries =
         FUNC_0(VAR_19, VAR_15->remote_node_entries);
   }


   if (VAR_14 == VAR_8)
   {
      U32 VAR_22;


      VAR_22 = FUNC_6(VAR_15);
      VAR_22 |= FUNC_5(VAR_0);
      FUNC_7(VAR_15, VAR_22);


      VAR_22 = FUNC_3(VAR_15);
      VAR_22 |= FUNC_2(VAR_0);
      FUNC_4(VAR_15, VAR_22);
   }



   if (VAR_14 == VAR_8)
   {

      for (VAR_13 = 0;
           (VAR_14 == VAR_8) && (VAR_13 < VAR_6);
           VAR_13++)
      {
         VAR_14 = FUNC_23(
            &VAR_15->phy_table[VAR_13],
            &VAR_15->scu_registers->peg0.pe[VAR_13].tl,
            &VAR_15->scu_registers->peg0.pe[VAR_13].ll
         );
      }
   }


   if(VAR_14 == VAR_8)
   {
      FUNC_26(VAR_15);
   }

   if (VAR_14 == VAR_8)
   {

      for (VAR_13 = 0;
              (VAR_13 < VAR_15->logical_port_entries)
           && (VAR_14 == VAR_8);
           VAR_13++)
      {
         VAR_14 = FUNC_25(
            &VAR_15->port_table[VAR_13],
            &VAR_15->scu_registers->peg0.ptsg.port[VAR_13],
            &VAR_15->scu_registers->peg0.ptsg.protocol_engine,
            &VAR_15->scu_registers->peg0.viit[VAR_13]
         );
      }
   }

   if (VAR_8 == VAR_14)
   {
      VAR_14 = FUNC_24(
                  VAR_15,
                  &VAR_15->port_agent
               );
   }


   if (VAR_14 == VAR_8)
   {
      FUNC_12(
         FUNC_18(VAR_15),
         VAR_3
      );
   }
   else
   {

      FUNC_21(VAR_15);

      FUNC_1(*(
         FUNC_11(VAR_12),
         VAR_1 | VAR_2,
         "Invalid Port Configuration from scic_sds_controller_reset_state_initialize_handler(0x%x) \n",
         VAR_12
      ));

   }

   return VAR_14;
}
