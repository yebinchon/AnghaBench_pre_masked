
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_6__ {TYPE_1__ attached_sas_address; int list_element; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_2__ SCIF_SAS_SMP_PHY_T ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

SCIF_SAS_SMP_PHY_T * FUNC_2(
   SCIF_SAS_SMP_PHY_T * VAR_0
)
{
   SCI_FAST_LIST_ELEMENT_T * VAR_1 = FUNC_0(
      &(VAR_0->list_element) );

   SCIF_SAS_SMP_PHY_T * VAR_2;

   while (VAR_1 != ((void*)0))
   {
      VAR_2 = (SCIF_SAS_SMP_PHY_T *)FUNC_1(VAR_1);

      VAR_1 = FUNC_0( &(VAR_2->list_element));

      if (VAR_2->attached_sas_address.high == VAR_0->attached_sas_address.high
          &&VAR_2->attached_sas_address.low == VAR_0->attached_sas_address.low)
         return VAR_2;
   }

   return ((void*)0);
}
