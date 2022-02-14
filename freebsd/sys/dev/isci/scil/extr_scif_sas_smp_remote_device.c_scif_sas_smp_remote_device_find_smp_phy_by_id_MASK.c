
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_8__ {scalar_t__ phy_identifier; } ;
struct TYPE_6__ {scalar_t__ number_of_phys; int * list_head; } ;
struct TYPE_7__ {TYPE_1__ smp_phy_list; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_2__ SCIF_SAS_SMP_REMOTE_DEVICE_T ;
typedef TYPE_3__ SCIF_SAS_SMP_PHY_T ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

SCIF_SAS_SMP_PHY_T * FUNC_3(
   U8 VAR_0,
   SCIF_SAS_SMP_REMOTE_DEVICE_T * VAR_1
)
{
   SCI_FAST_LIST_ELEMENT_T * VAR_2 = VAR_1->smp_phy_list.list_head;
   SCIF_SAS_SMP_PHY_T * VAR_3 = ((void*)0);

   FUNC_0(VAR_0 < VAR_1->smp_phy_list.number_of_phys);

   while (VAR_2 != ((void*)0))
   {
      VAR_3 = (SCIF_SAS_SMP_PHY_T*) FUNC_2(VAR_2);
      VAR_2 = FUNC_1(VAR_2);

      if (VAR_3->phy_identifier == VAR_0)
         return VAR_3;
   }

   return ((void*)0);
}
