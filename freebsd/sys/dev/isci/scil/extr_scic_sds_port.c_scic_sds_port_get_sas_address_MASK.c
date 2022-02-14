
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_8__ {int ** phy_table; } ;
struct TYPE_7__ {scalar_t__ low; scalar_t__ high; } ;
typedef TYPE_1__ SCI_SAS_ADDRESS_T ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void FUNC_3(
   SCIC_SDS_PORT_T * VAR_2,
   SCI_SAS_ADDRESS_T * VAR_3
)
{
   U32 VAR_4;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scic_sds_port_get_sas_address(0x%x, 0x%x) enter\n",
      VAR_2, VAR_3
   ));

   VAR_3->high = 0;
   VAR_3->low = 0;

   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   {
      if (VAR_2->phy_table[VAR_4] != ((void*)0))
      {
         FUNC_2(VAR_2->phy_table[VAR_4], VAR_3);
      }
   }
}
