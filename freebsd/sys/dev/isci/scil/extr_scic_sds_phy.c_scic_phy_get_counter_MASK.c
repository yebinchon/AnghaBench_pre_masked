
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
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
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_18 ;
 int VAR_19 ;

SCI_STATUS FUNC_3(
   SCI_PHY_HANDLE_T VAR_20,
   SCIC_PHY_COUNTER_ID_T VAR_21,
   U32 * VAR_22
)
{
   SCIC_SDS_PHY_T *VAR_23;
   SCI_STATUS VAR_24 = VAR_2;
   VAR_23 = (SCIC_SDS_PHY_T *)VAR_20;

   FUNC_0((
      FUNC_1(VAR_23),
      VAR_0,
      "scic_phy_get_counter(0x%x, 0x%x) enter\n",
      VAR_23, VAR_21
   ));

   switch(VAR_21)
   {
      case 138:
         *VAR_22 = FUNC_2(VAR_23, VAR_13);
         break;
      case 129:
         *VAR_22 = FUNC_2(VAR_23, VAR_19);
         break;
      case 135:
         *VAR_22 = FUNC_2(VAR_23, VAR_11);
         break;
      case 128:
         *VAR_22 = FUNC_2(VAR_23, VAR_18);
         break;
      case 143:
         *VAR_22 = FUNC_2(VAR_23, VAR_9);
         break;
      case 141:
         *VAR_22 = FUNC_2(VAR_23, VAR_17);
         break;
      case 136:
         *VAR_22 = FUNC_2(VAR_23, VAR_14);
         break;
      case 140:
         *VAR_22 = VAR_23->error_counter[VAR_5];
         break;
      case 131:
         *VAR_22 = VAR_23->error_counter[VAR_7];
         break;
      case 144:
         *VAR_22 = VAR_23->error_counter[VAR_3];
         break;
      case 139:
         *VAR_22 = VAR_23->error_counter[VAR_6];
         break;
      case 130:
         *VAR_22 = VAR_23->error_counter[VAR_8];
         break;
      case 142:
         *VAR_22 = VAR_23->error_counter[VAR_4];
         break;
      case 133:
         *VAR_22 = FUNC_2(VAR_23, VAR_16);
         break;
      case 134:
         *VAR_22 = FUNC_2(VAR_23, VAR_15);
         break;
      case 137:
         *VAR_22 = FUNC_2(VAR_23, VAR_12);
         break;
      case 132:
         *VAR_22 = FUNC_2(VAR_23, VAR_10);
         break;
      default:
         VAR_24 = VAR_1;
         break;
   }

   return VAR_24;
}
