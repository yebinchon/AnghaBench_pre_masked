
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * error_counter; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_PHY_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;
typedef int SCIC_PHY_COUNTER_ID_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;

SCI_STATUS FUNC_3(
   SCI_PHY_HANDLE_T VAR_20,
   SCIC_PHY_COUNTER_ID_T VAR_21
)
{
   SCIC_SDS_PHY_T *VAR_22;
   SCI_STATUS VAR_23 = VAR_2;
   VAR_22 = (SCIC_SDS_PHY_T *)VAR_20;

   FUNC_0((
      FUNC_1(VAR_22),
      VAR_0,
      "scic_phy_clear_counter(0x%x, 0x%x) enter\n",
      VAR_22, VAR_21
   ));

   switch(VAR_21)
   {
      case 138:
         FUNC_2(VAR_22, VAR_13, 0);
         break;
      case 129:
         FUNC_2(VAR_22, VAR_19, 0);
         break;
      case 135:
         FUNC_2(VAR_22, VAR_11, 0);
         break;
      case 128:
         FUNC_2(VAR_22, VAR_18, 0);
         break;
      case 143:
         FUNC_2(VAR_22, VAR_9, 0);
         break;
      case 141:
         FUNC_2(VAR_22, VAR_17, 0);
         break;
      case 136:
         FUNC_2(VAR_22, VAR_14, 0);
         break;
      case 140:
         VAR_22->error_counter[VAR_5] = 0;
         break;
      case 131:
         VAR_22->error_counter[VAR_7] = 0;
         break;
      case 144:
         VAR_22->error_counter[VAR_3] = 0;
         break;
      case 139:
         VAR_22->error_counter[VAR_6] = 0;
         break;
      case 130:
         VAR_22->error_counter[VAR_8] = 0;
         break;
      case 142:
         VAR_22->error_counter[VAR_4] = 0;
         break;
      case 133:
         FUNC_2(VAR_22, VAR_16, 0);
         break;
      case 134:
         FUNC_2(VAR_22, VAR_15, 0);
         break;
      case 137:
         FUNC_2(VAR_22, VAR_12, 0);
         break;
      case 132:
         FUNC_2(VAR_22, VAR_10, 0);
         break;
      default:
         VAR_23 = VAR_1;
   }

   return VAR_23;
}
