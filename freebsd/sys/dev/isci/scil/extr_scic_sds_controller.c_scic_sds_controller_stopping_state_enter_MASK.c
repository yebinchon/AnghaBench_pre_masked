
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int state_machine; } ;
struct TYPE_8__ {TYPE_1__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIC_SDS_CONTROLLER_T *VAR_3;
   VAR_3= (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_2(
      VAR_3, VAR_1);



   FUNC_3(VAR_3);
   FUNC_4(VAR_3);

   if (!FUNC_1(VAR_3))
   {
      FUNC_0(
         &VAR_3->parent.state_machine,
         VAR_0
      );
   }
}
