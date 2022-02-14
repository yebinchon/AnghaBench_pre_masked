
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_PHY_HANDLE_T ;
typedef int SCIC_SDS_PHY_T ;
typedef int SCIC_PHY_COUNTER_ID_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

SCI_STATUS FUNC_4(
   SCI_PHY_HANDLE_T VAR_9,
   SCIC_PHY_COUNTER_ID_T VAR_10
)
{
   SCIC_SDS_PHY_T *VAR_11;
   SCI_STATUS VAR_12 = VAR_2;

   VAR_11 = (SCIC_SDS_PHY_T *)VAR_9;

   FUNC_0((
      FUNC_3(VAR_11),
      VAR_0,
      "scic_phy_disable_counter(0x%x, 0x%x) enter\n",
      VAR_11, VAR_10
   ));

   switch(VAR_10)
   {
      case 140:
         {
            U32 VAR_13 = FUNC_1(VAR_11);
            VAR_13 &= ~(1 << VAR_5);
            FUNC_2(VAR_11, VAR_13);
         }
         break;
      case 131:
         {
            U32 VAR_14 = FUNC_1(VAR_11);
            VAR_14 &= ~(1 << VAR_7);
            FUNC_2(VAR_11, VAR_14);
         }
         break;
      case 144:
         {
            U32 VAR_15 = FUNC_1(VAR_11);
            VAR_15 &= ~(1 << VAR_3);
            FUNC_2(VAR_11, VAR_15);
         }
         break;
      case 139:
         {
            U32 VAR_16 = FUNC_1(VAR_11);
            VAR_16 &= ~(1 << VAR_6);
            FUNC_2(VAR_11, VAR_16);
         }
         break;
      case 130:
         {
            U32 VAR_17 = FUNC_1(VAR_11);
            VAR_17 &= ~(1 << VAR_8);
            FUNC_2(VAR_11, VAR_17);
         }
         break;
      case 142:
         {
            U32 VAR_18 = FUNC_1(VAR_11);
            VAR_18 &= ~(1 << VAR_4);
            FUNC_2(VAR_11, VAR_18);
         }
         break;


      case 138:
      case 129:
      case 135:
      case 128:
      case 143:
      case 141:
      case 136:
      case 133:
      case 134:
      case 137:
      case 132:
      default:
         VAR_12 = VAR_1;
         break;
   }
   return VAR_12;
}
