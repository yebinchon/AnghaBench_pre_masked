
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_4__ {int ** phy_table; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

U32 FUNC_2(
   SCIC_SDS_PORT_T * VAR_2
)
{
   U32 VAR_3;
   U32 VAR_4;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scic_sds_port_get_phys(0x%x) enter\n",
      VAR_2
   ));

   VAR_4 = 0;

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      if (VAR_2->phy_table[VAR_3] != ((void*)0))
      {
         VAR_4 |= (1 << VAR_3);
      }
   }

   return VAR_4;
}
