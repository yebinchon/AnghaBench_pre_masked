
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {int protocol; int starting_substate_machine; } ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static
void FUNC_4(
   SCIC_SDS_PHY_T * VAR_3
)
{
   U32 VAR_4;

   VAR_4 = FUNC_1(VAR_3);
   VAR_4 |= FUNC_0(VAR_0);
   FUNC_2(VAR_3, VAR_4);

   FUNC_3(
      &VAR_3->starting_substate_machine,
      VAR_2
   );

   VAR_3->protocol = VAR_1;
}
