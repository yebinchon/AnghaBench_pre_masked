
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int * SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static
void FUNC_10(
   SCI_CONTROLLER_HANDLE_T VAR_5
)
{
   U32 VAR_6;
   SCIC_SDS_CONTROLLER_T *VAR_7;
   VAR_7 = (SCIC_SDS_CONTROLLER_T *)VAR_5;

   FUNC_1(*(
      FUNC_5(VAR_5),
      VAR_0,
      "scic_sds_controller_single_vector_completion_handler(0x%d) enter\n",
      VAR_5
   ));

   VAR_6 = FUNC_3(VAR_7);
   VAR_6 &= (VAR_3 | VAR_4);

   if (VAR_6 & VAR_3)
   {
      FUNC_0((
         FUNC_5(VAR_7),
         VAR_0,
         "SCIC Controller has encountered a fatal error.\n"
      ));



      FUNC_6(
         FUNC_8(VAR_7),
         VAR_1
      );
      return;
   }

   if (
           (VAR_6 & VAR_4)
        && !FUNC_7(VAR_7)
      )
   {
      FUNC_0((
         FUNC_5(VAR_7),
         VAR_0,
         "SCIC Controller has encountered a fatal error.\n"
      ));



      FUNC_6(
         FUNC_8(VAR_7),
         VAR_1
      );
      return;
   }

   if (FUNC_7(VAR_7))
   {
      FUNC_9(VAR_7);



      FUNC_4(
         VAR_7,
         (VAR_2 | VAR_4)
      );
   }

   FUNC_2(VAR_7, 0x00000000);
}
