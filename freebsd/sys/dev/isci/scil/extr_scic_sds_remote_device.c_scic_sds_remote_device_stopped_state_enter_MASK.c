
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ previous_state_id; } ;
struct TYPE_9__ {TYPE_1__ state_machine; } ;
struct TYPE_10__ {TYPE_2__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_3__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_3 ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T *VAR_4
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_5 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_4;

   FUNC_0(
      VAR_5,
      VAR_3,
      VAR_0
   );



   if (VAR_5->parent.state_machine.previous_state_id
       == VAR_1)
   {
      FUNC_1(
         FUNC_3(VAR_5),
         VAR_5,
         VAR_2
      );
   }

   FUNC_2(
      FUNC_3(VAR_5),
      VAR_5
   );
}
