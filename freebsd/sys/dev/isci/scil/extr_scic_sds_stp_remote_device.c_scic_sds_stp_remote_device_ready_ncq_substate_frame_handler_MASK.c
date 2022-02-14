
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_9__ {int uf_control; } ;
struct TYPE_8__ {scalar_t__ fis_type; int status; } ;
struct TYPE_7__ {int ready_substate_machine; void* not_ready_reason; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SATA_FIS_HEADER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int ,void**) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_7,
   U32 VAR_8
)
{
   SCI_STATUS VAR_9;
   SATA_FIS_HEADER_T * VAR_10;

   VAR_9 = FUNC_3(
      &(FUNC_2(VAR_7)->uf_control),
      VAR_8,
      (void **)&VAR_10
   );

   if (VAR_9 == VAR_6)
   {
      if (
            (VAR_10->fis_type == VAR_2)
         && (VAR_10->status & VAR_0)
         )
      {
         VAR_7->not_ready_reason =
            VAR_3;



         FUNC_0(
            &VAR_7->ready_substate_machine,
            VAR_4
         );
      }
      else if (
            (VAR_10->fis_type == VAR_1)
         && (VAR_10->status & VAR_0)
         )
      {


         VAR_7->not_ready_reason =
            VAR_3;

         FUNC_0(
            &VAR_7->ready_substate_machine,
            VAR_4
         );
      }
      else
      {
         VAR_9 = VAR_5;
      }

      FUNC_1(
         FUNC_2(VAR_7), VAR_8
      );
   }

   return VAR_9;
}
