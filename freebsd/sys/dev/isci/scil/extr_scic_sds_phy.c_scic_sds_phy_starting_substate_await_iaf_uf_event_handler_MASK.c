
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCIC_SDS_PHY_T *VAR_4,
   U32 VAR_5
)
{
   U32 VAR_6 = VAR_3;

   switch (FUNC_5(VAR_5))
   {
   case 129:

      FUNC_3(VAR_4);
      break;

   case 128:


      FUNC_4(VAR_4);
   break;

   case 130:
   case 131:
   case 132:

      FUNC_2(VAR_4);
      break;

   default:
      FUNC_0((
         FUNC_1(VAR_4),
         VAR_0 | VAR_1,
         "PHY starting substate machine received unexpected event_code %x\n",
         VAR_5
      ));

      VAR_6 = VAR_2;
      break;
   }

   return VAR_6;
}
