
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_12__ {int uf_control; } ;
struct TYPE_11__ {int owning_controller; scalar_t__ response_buffer; } ;
struct TYPE_10__ {scalar_t__ frame_type; } ;
struct TYPE_9__ {int data_present; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCI_SSP_RESPONSE_IU_T ;
typedef TYPE_2__ SCI_SSP_FRAME_HEADER_T ;
typedef TYPE_3__ SCIC_SDS_REQUEST_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_6__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int *,int ,void**) ;
 int FUNC_6 (int *,int ,void**) ;
 int FUNC_7 (scalar_t__,int *,int) ;

__attribute__((used)) static
SCI_STATUS FUNC_8(
   SCIC_SDS_REQUEST_T * VAR_6,
   U32 VAR_7
)
{
   SCI_STATUS VAR_8;
   SCI_SSP_FRAME_HEADER_T *VAR_9;


   VAR_8 = FUNC_6(
      &(FUNC_3(VAR_6)->uf_control),
      VAR_7,
      (void**) &VAR_9
   );

   if (VAR_9->frame_type == VAR_2)
   {
      SCI_SSP_RESPONSE_IU_T *VAR_10;

      VAR_8 = FUNC_5(
         &(FUNC_3(VAR_6)->uf_control),
         VAR_7,
         (void**) &VAR_10
      );

      FUNC_7(
         VAR_6->response_buffer,
         (U32 *)VAR_10,
         sizeof(SCI_SSP_RESPONSE_IU_T)
      );

      VAR_10 = (SCI_SSP_RESPONSE_IU_T *)VAR_6->response_buffer;

      if (
            (VAR_10->data_present == 0x01)
         || (VAR_10->data_present == 0x02)
         )
      {
         FUNC_4(
            VAR_6,
            VAR_4,
            VAR_1
         );
      }
      else
      {
         FUNC_4(
            VAR_6, VAR_5, VAR_3
         );
      }

   }
   else
   {

      FUNC_0((
         FUNC_1(VAR_6),
         VAR_0,
         "SCIC IO Request 0x%x received unexpected frame %d type 0x%02x\n",
         VAR_6, VAR_7, VAR_9->frame_type
      ));
   }



   FUNC_2(
      VAR_6->owning_controller, VAR_7
   );

   return VAR_3;
}
