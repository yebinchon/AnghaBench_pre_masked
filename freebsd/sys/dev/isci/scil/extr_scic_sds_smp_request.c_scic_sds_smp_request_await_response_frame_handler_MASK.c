
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_23__ {int state_machine; } ;
struct TYPE_26__ {TYPE_6__ parent; int started_substate_machine; int * response_buffer; } ;
struct TYPE_25__ {scalar_t__ smp_frame_type; scalar_t__ function; } ;
struct TYPE_18__ {int attached_stp_target; scalar_t__ attached_sata_device; } ;
struct TYPE_19__ {TYPE_1__ bits; } ;
struct TYPE_20__ {TYPE_2__ u; } ;
struct TYPE_21__ {TYPE_3__ protocols; } ;
struct TYPE_22__ {TYPE_4__ discover; } ;
struct TYPE_24__ {TYPE_5__ response; } ;
struct TYPE_17__ {int uf_control; } ;
typedef TYPE_7__ SMP_RESPONSE_T ;
typedef TYPE_8__ SMP_RESPONSE_HEADER_T ;
typedef int SMP_RESPONSE_BODY_T ;
typedef int SCI_STATUS ;
typedef TYPE_9__ SCIC_SDS_REQUEST_T ;
typedef TYPE_10__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_10__*,int ) ;
 TYPE_10__* FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*,int ,int ) ;
 int FUNC_7 (int *,int ,void**) ;
 int FUNC_8 (int *,int ,void**) ;
 int FUNC_9 (int *,void*,int) ;

__attribute__((used)) static
SCI_STATUS FUNC_10(
   SCIC_SDS_REQUEST_T * VAR_9,
   U32 VAR_10
)
{
   SCI_STATUS VAR_11;
   void * VAR_12;
   SMP_RESPONSE_HEADER_T * VAR_13;
   U8 * VAR_14 = VAR_9->response_buffer;



   SCIC_SDS_CONTROLLER_T * VAR_15 = FUNC_5(VAR_9);

   FUNC_1((
      FUNC_2(VAR_9),
      VAR_0,
      "scic_sds_smp_request_await_response_frame_handler(0x%x, 0x%x) enter\n",
      VAR_9, VAR_10
   ));

   VAR_11 = FUNC_8(
      &(VAR_15->uf_control),
      VAR_10,
      &VAR_12
   );


   FUNC_9(
      (U32*) VAR_14,
      VAR_12,
      sizeof(SMP_RESPONSE_HEADER_T)/sizeof(U32)
   );
   VAR_13 = (SMP_RESPONSE_HEADER_T*) VAR_14;

   if (VAR_13->smp_frame_type == VAR_7)
   {
      void * VAR_16;

      VAR_11 = FUNC_7(
         &(VAR_15->uf_control),
         VAR_10,
         &VAR_16
      );

      FUNC_9(
         (U32*) (VAR_14 + sizeof(SMP_RESPONSE_HEADER_T)),
         VAR_16,
         sizeof(SMP_RESPONSE_BODY_T)/sizeof(U32)
      );
      if (VAR_13->function == VAR_8)
      {
          SMP_RESPONSE_T * VAR_17;

          VAR_17 = (SMP_RESPONSE_T *)VAR_14;





          if (VAR_17->response.discover.protocols.u.bits.attached_sata_device
           && !VAR_17->response.discover.protocols.u.bits.attached_stp_target)
          {
              VAR_17->response.discover.protocols.u.bits.attached_stp_target = 1;

              FUNC_1((
                  FUNC_2(VAR_9),
                 VAR_0,
                 "scic_sds_smp_request_await_response_frame_handler(0x%x) Found SATA dev, setting STP bit.\n",
                 VAR_9
              ));
          }
      }







      FUNC_6(
         VAR_9, VAR_5, VAR_4
      );

      FUNC_3(
         &VAR_9->started_substate_machine,
         VAR_1
      );
   }
   else
   {

      FUNC_0((
         FUNC_2(VAR_9),
         VAR_0,
         "SCIC SMP Request 0x%08x received unexpected frame %d type 0x%02x\n",
         VAR_9, VAR_10, VAR_13->smp_frame_type
      ));

     FUNC_6(
        VAR_9,
        VAR_6,
        VAR_3
     );

     FUNC_3(
         &VAR_9->parent.state_machine,
         VAR_2
      );
   }

   FUNC_4(
      VAR_15, VAR_10
   );

   return VAR_4;
}
