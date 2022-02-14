
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_4__ {scalar_t__ saved_rx_frame_index; TYPE_1__* owning_controller; } ;
struct TYPE_3__ {int uf_control; } ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__,void**) ;

void * FUNC_2(
   SCI_IO_REQUEST_HANDLE_T VAR_2,
   U32 VAR_3
)
{
   void * VAR_4 = ((void*)0);
   SCIC_SDS_REQUEST_T * VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_2;

   FUNC_0(VAR_3 < VAR_1);

   if (VAR_5->saved_rx_frame_index != VAR_0)
   {
      FUNC_1(
         &(VAR_5->owning_controller->uf_control),
         VAR_5->saved_rx_frame_index,
         &VAR_4
      );
   }

   return VAR_4;
}
