
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ,int,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int ,int*,int,scalar_t__,int ) ;
 int * FUNC_12 (int *,int ,int) ;

__attribute__((used)) static pt_entry_t *
FUNC_13(pmap_t VAR_19, pt_entry_t *VAR_20, vm_offset_t VAR_21)
{
 pt_entry_t *VAR_22, VAR_23, VAR_24;
 vm_offset_t VAR_25;
 vm_paddr_t VAR_26, VAR_27;
 vm_page_t VAR_28;
 int VAR_29;

 FUNC_4(VAR_19, VAR_13);
 VAR_24 = FUNC_10(VAR_20);
 FUNC_2((VAR_24 & VAR_0) == VAR_5,
     ("pmap_demote_l1: Demoting a non-block entry"));
 FUNC_2((VAR_21 & VAR_6) == 0,
     ("pmap_demote_l1: Invalid virtual address %#lx", VAR_21));
 FUNC_2((VAR_24 & VAR_2) == 0,
     ("pmap_demote_l1: Level 1 table shouldn't be managed"));

 VAR_25 = 0;
 if (VAR_21 <= (vm_offset_t)VAR_20 && VAR_21 + VAR_7 > (vm_offset_t)VAR_20) {
  VAR_25 = FUNC_6(VAR_15);
  if (VAR_25 == 0)
   return (((void*)0));
 }

 if ((VAR_28 = FUNC_12(((void*)0), 0, VAR_16 |
     VAR_17 | VAR_18)) == ((void*)0)) {
  FUNC_0(VAR_4, "pmap_demote_l1: failure for va %#lx"
      " in pmap %p", VAR_21, VAR_19);
  return (((void*)0));
 }

 VAR_26 = FUNC_5(VAR_28);
 VAR_22 = (pt_entry_t *)FUNC_3(VAR_26);


 VAR_27 = VAR_24 & ~VAR_1;

 VAR_23 = VAR_24 & VAR_1;


 for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++) {
  VAR_22[VAR_29] = VAR_23 | VAR_27;
  VAR_27 += VAR_10;
 }
 FUNC_2(VAR_22[0] == ((VAR_24 & ~VAR_0) | VAR_9),
     ("Invalid l2 page (%lx != %lx)", VAR_22[0],
     (VAR_24 & ~VAR_0) | VAR_9));

 if (VAR_25 != 0) {
  FUNC_8(VAR_25, VAR_15,
      FUNC_1((vm_offset_t)VAR_20) & ~VAR_11, VAR_3);
  VAR_20 = (pt_entry_t *)(VAR_25 + ((vm_offset_t)VAR_20 & VAR_14));
 }

 FUNC_11(VAR_19, VAR_20, VAR_26 | VAR_8, VAR_21, VAR_15);

 if (VAR_25 != 0) {
  FUNC_9(VAR_25);
  FUNC_7(VAR_25, VAR_15);
 }

 return (VAR_22);
}
