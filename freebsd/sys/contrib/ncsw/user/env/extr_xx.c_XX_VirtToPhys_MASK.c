
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int physAddress_t ;
struct TYPE_2__ {scalar_t__* portal_ce_va; scalar_t__** portal_ce_size; scalar_t__** portal_ce_pa; scalar_t__* portal_ci_va; scalar_t__** portal_ci_size; scalar_t__** portal_ci_pa; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,void*) ;

physAddress_t
FUNC_5(void *VAR_11)
{
 vm_paddr_t VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_9);


 if (VAR_11 == ((void*)0))
  return (-1);


 if ((vm_offset_t)VAR_11 >= VAR_8 &&
     (vm_offset_t)VAR_11 < VAR_8 + VAR_7)
  return (((vm_offset_t)VAR_11 - VAR_8) + VAR_6);


 if (((vm_offset_t)VAR_11 >= VAR_5.portal_ce_va[VAR_0]) &&
     ((vm_offset_t)VAR_11 < VAR_5.portal_ce_va[VAR_0] +
     VAR_5.portal_ce_size[VAR_0][VAR_13]))
  return (VAR_5.portal_ce_pa[VAR_0][VAR_13] +
      (vm_offset_t)VAR_11 - VAR_5.portal_ce_va[VAR_0]);

 if (((vm_offset_t)VAR_11 >= VAR_5.portal_ci_va[VAR_0]) &&
     ((vm_offset_t)VAR_11 < VAR_5.portal_ci_va[VAR_0] +
     VAR_5.portal_ci_size[VAR_0][VAR_13]))
  return (VAR_5.portal_ci_pa[VAR_0][VAR_13] +
      (vm_offset_t)VAR_11 - VAR_5.portal_ci_va[VAR_0]);


 if (((vm_offset_t)VAR_11 >= VAR_5.portal_ce_va[VAR_4]) &&
     ((vm_offset_t)VAR_11 < VAR_5.portal_ce_va[VAR_4] +
     VAR_5.portal_ce_size[VAR_4][VAR_13]))
  return (VAR_5.portal_ce_pa[VAR_4][VAR_13] +
      (vm_offset_t)VAR_11 - VAR_5.portal_ce_va[VAR_4]);

 if (((vm_offset_t)VAR_11 >= VAR_5.portal_ci_va[VAR_4]) &&
     ((vm_offset_t)VAR_11 < VAR_5.portal_ci_va[VAR_4] +
     VAR_5.portal_ci_size[VAR_4][VAR_13]))
  return (VAR_5.portal_ci_pa[VAR_4][VAR_13] +
      (vm_offset_t)VAR_11 - VAR_5.portal_ci_va[VAR_4]);

 if (VAR_3 && (vm_offset_t)VAR_11 >= VAR_1 &&
     (vm_offset_t)VAR_11 <= VAR_2)
  return (FUNC_0((vm_offset_t)VAR_11));
 else
  VAR_12 = FUNC_2((vm_offset_t)VAR_11);

 if (VAR_12 == 0)
  FUNC_4("NetCommSW: "
      "Unable to translate virtual address %p!\n", VAR_11);
 else
  FUNC_3(VAR_10, (vm_offset_t)VAR_11);

 return (VAR_12);
}
