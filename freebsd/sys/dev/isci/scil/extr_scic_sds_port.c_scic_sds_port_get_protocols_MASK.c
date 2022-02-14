
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_10__ {int ** phy_table; } ;
struct TYPE_8__ {scalar_t__ all; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_2__ SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T ;
typedef TYPE_3__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static
void FUNC_3(
   SCIC_SDS_PORT_T * VAR_2,
   SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T * VAR_3
)
{
   U8 VAR_4;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scic_sds_port_get_protocols(0x%x, 0x%x) enter\n",
      VAR_2, VAR_3
   ));

   VAR_3->u.all = 0;

   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   {
      if (VAR_2->phy_table[VAR_4] != ((void*)0))
      {
         FUNC_2(VAR_2->phy_table[VAR_4], VAR_3);
      }
   }
}
