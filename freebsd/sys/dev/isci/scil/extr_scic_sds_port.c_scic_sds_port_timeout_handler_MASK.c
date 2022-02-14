
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(
   void *VAR_6
)
{
   U32 VAR_7;
   SCIC_SDS_PORT_T * VAR_8;

   VAR_8 = (SCIC_SDS_PORT_T *)VAR_6;
   VAR_7 = FUNC_3(
                           &VAR_8->parent.state_machine);

   if (VAR_7 == VAR_2)
   {


      FUNC_2(
         &VAR_8->parent.state_machine,
         VAR_1
      );
   }
   else if (VAR_7 == VAR_3)
   {


      FUNC_0((
         FUNC_1(VAR_8),
         VAR_0,
         "SCIC Port 0x%x failed to stop before tiemout.\n",
         VAR_8
      ));
   }
   else if (VAR_7 == VAR_4)
   {

      FUNC_4(
         FUNC_5(VAR_8),
         VAR_6,
         VAR_5
      );
   }
   else
   {


      FUNC_0((
         FUNC_1(VAR_8),
         VAR_0,
         "SCIC Port 0x%x is processing a timeout operation in state %d.\n",
         VAR_8, VAR_7
      ));
   }
}
