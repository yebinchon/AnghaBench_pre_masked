
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int smp_phy_memory_list; } ;
struct TYPE_6__ {int list_element; } ;
typedef TYPE_1__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(
   SCIF_SAS_CONTROLLER_T * VAR_1,
   SCIF_SAS_SMP_PHY_T * VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scif_controller_free_smp_phy(0x%x, 0x%x) enter\n",
      VAR_1, VAR_2
   ));


   FUNC_2(
      &VAR_1->smp_phy_memory_list,
      &VAR_2->list_element
   );
}
