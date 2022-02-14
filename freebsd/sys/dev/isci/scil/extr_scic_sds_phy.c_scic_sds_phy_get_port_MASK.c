
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int owning_port; } ;
typedef int SCI_PORT_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

SCI_PORT_HANDLE_T FUNC_3(
   SCIC_SDS_PHY_T *VAR_3
)
{
   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0,
      "scic_phy_get_port(0x%x) enter\n",
      VAR_3
   ));

   if (FUNC_2(VAR_3->owning_port) == VAR_1)
      return VAR_2;

   return VAR_3->owning_port;
}
