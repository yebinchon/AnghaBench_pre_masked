
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_4__ {int ** phy_table; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;

SCIC_SDS_PHY_T * FUNC_1(
   SCIC_SDS_PORT_T *VAR_1
)
{
   U32 VAR_2;
   SCIC_SDS_PHY_T *VAR_3;

   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {


      VAR_3 = VAR_1->phy_table[VAR_2];
      if (
            (VAR_3 != ((void*)0))
         && FUNC_0(VAR_1, VAR_3)
         )
      {
         return VAR_3;
      }
   }

   return ((void*)0);
}
