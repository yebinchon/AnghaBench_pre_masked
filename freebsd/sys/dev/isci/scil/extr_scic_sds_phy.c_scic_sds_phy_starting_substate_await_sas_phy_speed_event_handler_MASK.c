
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCIC_SDS_PHY_T *VAR_8,
   U32 VAR_9
)
{
   U32 VAR_10 = VAR_7;

   switch (FUNC_5(VAR_9))
   {
   case 129:


   break;

   case 135:
   case 134:
      FUNC_2(
         VAR_8, VAR_4, VAR_2
      );
   break;

   case 133:
   case 132:
      FUNC_2(
         VAR_8, VAR_5, VAR_2
      );
   break;

   case 131:
   case 130:
      FUNC_2(
         VAR_8, VAR_6, VAR_2
      );
   break;

   case 128:


      FUNC_4(VAR_8);
   break;

   case 136:

      FUNC_3(VAR_8);
   break;

   default:
      FUNC_0((
         FUNC_1(VAR_8),
         VAR_0 | VAR_1,
         "PHY starting substate machine received unexpected event_code %x\n",
         VAR_9
      ));

      VAR_10 = VAR_3;
   break;
   }

   return VAR_10;
}
