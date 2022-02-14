
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {int max_negotiated_speed; } ;
typedef int SCI_SAS_LINK_RATE ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_2(
   SCIC_SDS_PHY_T * VAR_0,
   SCI_SAS_LINK_RATE VAR_1,
   U32 VAR_2
)
{
   VAR_0->max_negotiated_speed = VAR_1;

   FUNC_0(
      FUNC_1(VAR_0), VAR_2
   );
}
