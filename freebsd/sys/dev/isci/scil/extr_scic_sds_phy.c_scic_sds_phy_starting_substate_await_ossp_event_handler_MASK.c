
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {void* is_in_link_training; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;


 void* VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCIC_SDS_PHY_T *VAR_5,
   U32 VAR_6
)
{
   U32 VAR_7 = VAR_3;

   switch (FUNC_4(VAR_6))
   {
   case 129:
      FUNC_2(VAR_5);
      VAR_5->is_in_link_training = VAR_4;
   break;

   case 128:
      FUNC_3(VAR_5);
      VAR_5->is_in_link_training = VAR_4;
   break;

   default:
      FUNC_0((
         FUNC_1(VAR_5),
         VAR_0 | VAR_1,
         "PHY starting substate machine received unexpected event_code %x\n",
         VAR_6
      ));

      VAR_7 = VAR_2;
   break;
   }

   return VAR_7;
}
