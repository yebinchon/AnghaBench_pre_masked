
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static
BOOL FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_5
)
{
   U32 VAR_6;
   SCIC_SDS_CONTROLLER_T *VAR_7 = (SCIC_SDS_CONTROLLER_T*)VAR_5;

   FUNC_0((
      FUNC_2(VAR_5),
      VAR_1,
      "scic_sds_controller_polling_interrupt_handler(0x%d) enter\n",
      VAR_5
   ));
   VAR_6 = FUNC_1(VAR_7);
   if ((VAR_6 &
         (VAR_2 |
          VAR_3 |
          VAR_4)) == 0)
   {
      return VAR_0;
   }

   return FUNC_3(
             VAR_5, VAR_6
          );
}
