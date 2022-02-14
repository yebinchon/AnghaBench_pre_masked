
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t phy_index; } ;
struct TYPE_9__ {scalar_t__* phy_table; int physical_port_index; int logical_port_index; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_PORT_T *VAR_3,
   SCIC_SDS_PHY_T *VAR_4
)
{



   if (
         (VAR_3->phy_table[VAR_4->phy_index] == VAR_1)
      && (FUNC_0(VAR_4) == VAR_1)
      && FUNC_2(VAR_3, VAR_4->phy_index)
      )
   {


      VAR_3->logical_port_index = VAR_3->physical_port_index;
      VAR_3->phy_table[VAR_4->phy_index] = VAR_4;
      FUNC_1(VAR_4, VAR_3);

      return VAR_2;
   }

   return VAR_0;
}
