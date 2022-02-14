
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int controller; } ;
struct TYPE_10__ {scalar_t__ previous_state_id; } ;
struct TYPE_11__ {TYPE_1__ state_machine; } ;
struct TYPE_12__ {TYPE_4__* domain; TYPE_2__ parent; int operation_status; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int VAR_4 ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T *VAR_5
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_5;

   FUNC_1(
      VAR_6,
      VAR_4,
      VAR_2
   );

   FUNC_0((
      FUNC_2(VAR_6),
      VAR_0 | VAR_1,
      "Domain:0x%x Device:0x%x Status:0x%x device failed\n",
      VAR_6->domain, VAR_6, VAR_6->operation_status
   ));


   FUNC_3(
      VAR_6->domain->controller,
      VAR_6->domain,
      VAR_6,
      VAR_6->operation_status
   );



   if (VAR_6->parent.state_machine.previous_state_id
       == VAR_3)
      FUNC_4(VAR_6->domain,VAR_6);
}
