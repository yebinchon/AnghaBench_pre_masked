
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef scalar_t__ SCI_BASE_CONTROLLER_STATES ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(
   SCI_CONTROLLER_HANDLE_T VAR_5
)
{
   SCI_BASE_CONTROLLER_STATES VAR_6;
   SCIC_SDS_CONTROLLER_T *VAR_7;
   VAR_7 = (SCIC_SDS_CONTROLLER_T *)VAR_5;

   VAR_6 = FUNC_3(
                      FUNC_5(VAR_7)
                   );

   if (VAR_6 == VAR_2)
   {
      FUNC_6(
         VAR_7, VAR_4
      );
   }
   else if (VAR_6 == VAR_3)
   {
      FUNC_2(
         FUNC_5(VAR_7),
         VAR_1
      );

      FUNC_4(VAR_5, VAR_4);
   }
   else
   {

      FUNC_0((
         FUNC_1(VAR_7),
         VAR_0,
         "Controller timer fired when controller was not in a state being timed.\n"
      ));
   }
}
