
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_7__ {int protocol; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_7(
   SCIC_SDS_PHY_T *VAR_6,
   U32 VAR_7
)
{
   U32 VAR_8 = VAR_5;

   switch (FUNC_6(VAR_7))
   {
   case 131:

      FUNC_4(VAR_6);
      break;

   case 128:


      break;

   case 129:
      VAR_6->protocol = VAR_2;


      FUNC_2(
         FUNC_3(VAR_6),
         VAR_3
         );
      break;

   case 130:


      FUNC_5(VAR_6);
   break;

   default:
      FUNC_0((
         FUNC_1(VAR_6),
         VAR_0 | VAR_1,
         "PHY starting substate machine received unexpected event_code %x\n",
         VAR_7
      ));

      VAR_8 = VAR_4;
      break;
   }

   return VAR_8;
}
