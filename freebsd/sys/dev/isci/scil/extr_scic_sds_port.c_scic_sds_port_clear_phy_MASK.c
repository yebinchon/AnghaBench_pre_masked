
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int * port_table; } ;
struct TYPE_12__ {size_t phy_index; } ;
struct TYPE_11__ {TYPE_2__** phy_table; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_PORT_T *VAR_4,
   SCIC_SDS_PHY_T *VAR_5
)
{

   if (
           (VAR_4->phy_table[VAR_5->phy_index] == VAR_5)
        && (FUNC_0(VAR_5) == VAR_4)
      )
   {

      FUNC_1(
         VAR_5,
         &FUNC_2(VAR_4)->port_table[VAR_2]
      );

      VAR_4->phy_table[VAR_5->phy_index] = VAR_1;

      return VAR_3;
   }

   return VAR_0;
}
