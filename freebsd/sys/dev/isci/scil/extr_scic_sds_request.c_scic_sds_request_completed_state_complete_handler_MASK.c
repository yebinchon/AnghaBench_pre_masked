
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_5__ {scalar_t__ was_tag_assigned_by_user; scalar_t__ saved_rx_frame_index; TYPE_1__ parent; int owning_controller; int io_tag; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_REQUEST_T *VAR_4
)
{
   SCIC_SDS_REQUEST_T *VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_4;

   if (VAR_5->was_tag_assigned_by_user != VAR_3)
   {
      FUNC_1(
         VAR_5->owning_controller, VAR_5->io_tag
      );
   }

   if (VAR_5->saved_rx_frame_index != VAR_2)
   {
      FUNC_2(
         VAR_5->owning_controller, VAR_5->saved_rx_frame_index);
   }

   FUNC_0(
      &VAR_5->parent.state_machine,
      VAR_0
   );

   FUNC_3(VAR_5);

   return VAR_1;
}
