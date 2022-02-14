
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U8 ;
typedef int SCI_SAS_ADDRESS_T ;
typedef scalar_t__ SCI_PORT_HANDLE_T ;
typedef int SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static
SCIC_SDS_PORT_T * FUNC_8(
   SCIC_SDS_CONTROLLER_T * VAR_6,
   SCIC_SDS_PHY_T * VAR_7
)
{
   U8 VAR_8;
   SCI_PORT_HANDLE_T VAR_9;
   SCI_SAS_ADDRESS_T VAR_10;
   SCI_SAS_ADDRESS_T VAR_11;
   SCI_SAS_ADDRESS_T VAR_12;
   SCI_SAS_ADDRESS_T VAR_13;

   FUNC_0(*(
      FUNC_1(VAR_6),
      VAR_0 | VAR_2 | VAR_1,
      "scic_sds_port_confgiruation_agent_find_port(0x%08x, 0x%08x) enter\n",
      VAR_6, VAR_7
   ));




   FUNC_5(VAR_7, &VAR_12);
   FUNC_4(VAR_7, &VAR_13);

   for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
   {
      if (FUNC_3(VAR_6, VAR_8, &VAR_9) == VAR_5)
      {
         SCIC_SDS_PORT_T * VAR_14 = (SCIC_SDS_PORT_T *)VAR_9;

         FUNC_7(VAR_14, &VAR_10);
         FUNC_6(VAR_14, &VAR_11);

         if (
               (FUNC_2(VAR_10, VAR_12) == 0)
            && (FUNC_2(VAR_11, VAR_13) == 0)
            )
         {
            return VAR_14;
         }
      }
   }

   return VAR_3;
}
