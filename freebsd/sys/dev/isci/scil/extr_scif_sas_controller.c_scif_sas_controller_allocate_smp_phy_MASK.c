
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int smp_phy_memory_list; } ;
typedef int SCIF_SAS_SMP_PHY_T ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

SCIF_SAS_SMP_PHY_T * FUNC_5(
   SCIF_SAS_CONTROLLER_T * VAR_1
)
{
   SCIF_SAS_SMP_PHY_T * VAR_2;

   FUNC_0((
      FUNC_2(VAR_1),
      VAR_0,
      "scif_controller_allocate_smp_phy(0x%x) enter\n",
      VAR_1
   ));

   if( !FUNC_3(&VAR_1->smp_phy_memory_list) )
   {
      VAR_2 = (SCIF_SAS_SMP_PHY_T *)
         FUNC_4(&VAR_1->smp_phy_memory_list);


      FUNC_1((char*)VAR_2,
             0,
             sizeof(SCIF_SAS_SMP_PHY_T)
            );

      return VAR_2;
   }
   else
      return ((void*)0);
}
