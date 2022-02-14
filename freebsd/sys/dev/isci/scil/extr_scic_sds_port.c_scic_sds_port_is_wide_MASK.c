
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_3__ {int ** phy_table; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef int BOOL ;


 size_t VAR_0 ;

__attribute__((used)) static
BOOL FUNC_0(
   SCIC_SDS_PORT_T *VAR_1
)
{
   U32 VAR_2;
   U32 VAR_3 = 0;

   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      if (VAR_1->phy_table[VAR_2] != ((void*)0))
      {
         VAR_3++;
      }
   }

   return (VAR_3 != 1);
}
