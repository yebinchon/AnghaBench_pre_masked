
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ operation_status; TYPE_1__* state_handlers; int core_object; } ;
struct TYPE_5__ {int (* stop_complete_handler ) (TYPE_2__*,scalar_t__) ;} ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T *VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_4;

   FUNC_0(
      VAR_5,
      VAR_3,
      VAR_1
   );

   VAR_5->operation_status = FUNC_1(
                                    VAR_5->core_object,
                                    VAR_0
                                 );


   if (VAR_5->operation_status != VAR_2)
   {






      VAR_5->state_handlers->stop_complete_handler(
         VAR_5, VAR_5->operation_status
      );
   }
}
