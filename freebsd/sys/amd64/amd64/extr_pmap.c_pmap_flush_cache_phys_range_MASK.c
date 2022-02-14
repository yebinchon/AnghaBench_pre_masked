
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_memattr_t ;
typedef int pt_entry_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,scalar_t__,int,scalar_t__*) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__) ;
 int * FUNC_11 (scalar_t__) ;

void
FUNC_12(vm_paddr_t VAR_9, vm_paddr_t VAR_10, vm_memattr_t VAR_11)
{
 pt_entry_t *VAR_12;
 vm_offset_t VAR_13;
 int VAR_14, VAR_15;

 FUNC_0((VAR_9 & VAR_2) == 0,
     ("pmap_flush_cache_phys_range: spa not page-aligned"));
 FUNC_0((VAR_10 & VAR_2) == 0,
     ("pmap_flush_cache_phys_range: epa not page-aligned"));

 if (VAR_9 < VAR_6) {
  FUNC_5(FUNC_2(VAR_9), FUNC_2(FUNC_1(
      VAR_6, VAR_10)));
  if (VAR_6 >= VAR_10)
   return;
  VAR_9 = VAR_6;
 }

 VAR_15 = FUNC_4(VAR_8, VAR_11, 0) | VAR_4 |
     VAR_5;
 VAR_14 = FUNC_9(VAR_7, VAR_3, VAR_0 | VAR_1,
     &VAR_13);
 FUNC_0(VAR_14 == 0, ("vmem_alloc failed: %d", VAR_14));
 VAR_12 = FUNC_11(VAR_13);
 for (; VAR_9 < VAR_10; VAR_9 += VAR_3) {
  FUNC_7();
  FUNC_6(VAR_12, VAR_9 | VAR_15);
  FUNC_3(VAR_13);

  FUNC_5(VAR_13, VAR_13 + VAR_3);
  FUNC_8();
 }
 FUNC_10(VAR_7, VAR_13, VAR_3);
}
