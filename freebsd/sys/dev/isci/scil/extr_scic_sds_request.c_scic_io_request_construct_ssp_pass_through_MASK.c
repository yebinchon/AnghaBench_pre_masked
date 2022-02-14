
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int state_machine; } ;
struct TYPE_15__ {TYPE_1__ parent; } ;
struct TYPE_13__ {int (* scic_cb_passthru_get_transfer_length ) (TYPE_4__*) ;int (* scic_cb_passthru_get_data_direction ) (TYPE_4__*) ;} ;
struct TYPE_14__ {TYPE_2__ common_callbacks; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_3__ SCIC_SSP_PASSTHRU_REQUEST_CALLBACKS_T ;
typedef TYPE_4__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

SCI_STATUS FUNC_8 (
   void * VAR_3,
   SCIC_SSP_PASSTHRU_REQUEST_CALLBACKS_T *VAR_4
)
{
   SCI_STATUS VAR_5 = VAR_2;
   SCIC_SDS_REQUEST_T * VAR_6;

   VAR_6 = (SCIC_SDS_REQUEST_T * )VAR_3;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0,
      "scic_io_request_construct_ssp_pass_through(0x%x) enter\n",
      VAR_3
   ));


   FUNC_5(
      VAR_6,
      VAR_4->common_callbacks.scic_cb_passthru_get_data_direction (VAR_6),
      VAR_4->common_callbacks.scic_cb_passthru_get_transfer_length(VAR_6)
   );


   VAR_5 = FUNC_3 (
               VAR_6,
               VAR_4
            );
   if (VAR_5 != VAR_2)
   {
      return VAR_5;
   }


   FUNC_4(VAR_6);

   FUNC_2(
      &VAR_6->parent.state_machine,
      VAR_1
   );

   return VAR_5;
}
