
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
typedef int uintmax_t ;
struct pv_entry {scalar_t__ pv_va; } ;
typedef scalar_t__ physAddress_t ;
struct TYPE_7__ {scalar_t__** portal_ce_pa; scalar_t__** portal_ce_size; int* portal_ci_va; scalar_t__** portal_ci_pa; scalar_t__** portal_ci_size; int* portal_ce_va; } ;
struct TYPE_5__ {int pv_list; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 struct pv_entry* FUNC_3 (int *) ;
 TYPE_3__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,int ) ;

void *
FUNC_5(physAddress_t VAR_9)
{
 struct pv_entry *VAR_10;
 vm_page_t VAR_11;
 int VAR_12;


 if (VAR_9 >= VAR_5 && VAR_9 < VAR_5 + VAR_6)
  return ((void *)((vm_offset_t)(VAR_9 - VAR_5) +
      VAR_7));

 VAR_12 = FUNC_0(VAR_8);


 if ((VAR_9 >= VAR_4.portal_ce_pa[VAR_0][VAR_12]) &&
     (VAR_9 < VAR_4.portal_ce_pa[VAR_0][VAR_12] +
     VAR_4.portal_ce_size[VAR_0][VAR_12]))
  return ((void *)(VAR_4.portal_ci_va[VAR_0] +
      (vm_offset_t)(VAR_9 - VAR_4.portal_ci_pa[VAR_0][VAR_12])));

 if ((VAR_9 >= VAR_4.portal_ci_pa[VAR_0][VAR_12]) &&
     (VAR_9 < VAR_4.portal_ci_pa[VAR_0][VAR_12] +
     VAR_4.portal_ci_size[VAR_0][VAR_12]))
  return ((void *)(VAR_4.portal_ci_va[VAR_0] +
      (vm_offset_t)(VAR_9 - VAR_4.portal_ci_pa[VAR_0][VAR_12])));


 if ((VAR_9 >= VAR_4.portal_ce_pa[VAR_3][VAR_12]) &&
     (VAR_9 < VAR_4.portal_ce_pa[VAR_3][VAR_12] +
     VAR_4.portal_ce_size[VAR_3][VAR_12]))
  return ((void *)(VAR_4.portal_ce_va[VAR_3] +
      (vm_offset_t)(VAR_9 - VAR_4.portal_ce_pa[VAR_3][VAR_12])));

 if ((VAR_9 >= VAR_4.portal_ci_pa[VAR_3][VAR_12]) &&
     (VAR_9 < VAR_4.portal_ci_pa[VAR_3][VAR_12] +
     VAR_4.portal_ci_size[VAR_3][VAR_12]))
  return ((void *)(VAR_4.portal_ci_va[VAR_3] +
      (vm_offset_t)(VAR_9 - VAR_4.portal_ci_pa[VAR_3][VAR_12])));

 VAR_11 = FUNC_2(VAR_9);
 VAR_10 = FUNC_3(&VAR_11->md.pv_list);

 if (VAR_10 != ((void*)0))
  return ((void *)(VAR_10->pv_va + ((vm_offset_t)VAR_9 & VAR_1)));

 if (VAR_2)
  return ((void *)(uintptr_t)FUNC_1(VAR_9));

 FUNC_4("NetCommSW: "
     "Unable to translate physical address 0x%09jx!\n", (uintmax_t)VAR_9);

 return (((void*)0));
}
