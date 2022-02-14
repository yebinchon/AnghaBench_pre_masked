
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t U16 ;
struct TYPE_7__ {scalar_t__ max_negotiated_speed; } ;
struct TYPE_6__ {TYPE_2__** phy_table; } ;
typedef scalar_t__ SCI_SAS_LINK_RATE ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;

SCI_SAS_LINK_RATE FUNC_1(
   SCIC_SDS_PORT_T * VAR_3
)
{
   U16 VAR_4 = 0;
   SCI_SAS_LINK_RATE VAR_5 = VAR_1;
   SCIC_SDS_PHY_T * VAR_6 = ((void*)0);



   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   {
      VAR_6 = VAR_3->phy_table[VAR_4];
      if (
            (VAR_6 != ((void*)0))
         && (FUNC_0(VAR_3, VAR_6) == VAR_2)
         && (VAR_6->max_negotiated_speed < VAR_5)
         )
         VAR_5 = VAR_6->max_negotiated_speed;
   }

   return VAR_5;
}
