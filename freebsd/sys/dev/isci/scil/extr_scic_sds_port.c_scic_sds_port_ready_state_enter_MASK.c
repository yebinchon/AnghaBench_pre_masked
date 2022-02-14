
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ previous_state_id; } ;
struct TYPE_11__ {TYPE_1__ state_machine; } ;
struct TYPE_12__ {TYPE_2__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_3__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static
void FUNC_7(
   SCI_BASE_OBJECT_T *VAR_4
)
{
   SCIC_SDS_PORT_T *VAR_5;
   VAR_5 = (SCIC_SDS_PORT_T *)VAR_4;


   FUNC_6(
      VAR_5, VAR_1
   );

   if (
          VAR_2
      == VAR_5->parent.state_machine.previous_state_id
      )
   {
      FUNC_1(
         FUNC_3(VAR_5),
         VAR_5,
         VAR_3
      );
   }
   else
   {

      FUNC_2(
         FUNC_3(VAR_5),
         VAR_5,
         VAR_0
      );
   }



   FUNC_5(VAR_5);


   FUNC_0(
      FUNC_4(VAR_5)
   );
}
