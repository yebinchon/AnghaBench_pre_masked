
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
typedef int boolean_t ;


 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *,int,int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static boolean_t
FUNC_12(pmap_t VAR_13, pdp_entry_t *VAR_14, vm_offset_t VAR_15)
{
 pdp_entry_t VAR_16, VAR_17;
 pd_entry_t *VAR_18, VAR_19, *VAR_20;
 pt_entry_t VAR_21, VAR_22, VAR_23, VAR_24;
 vm_paddr_t VAR_25;
 vm_page_t VAR_26;

 VAR_21 = FUNC_5(VAR_13);
 VAR_22 = FUNC_7(VAR_13);
 VAR_24 = FUNC_9(VAR_13);
 VAR_23 = FUNC_8(VAR_13);

 FUNC_3(VAR_13, VAR_2);
 VAR_17 = *VAR_14;
 FUNC_1((VAR_17 & (VAR_6 | VAR_24)) == (VAR_6 | VAR_24),
     ("pmap_demote_pdpe: oldpdpe is missing PG_PS and/or PG_V"));
 if ((VAR_26 = FUNC_10(((void*)0), VAR_15 >> VAR_5, VAR_9 |
     VAR_10 | VAR_11)) == ((void*)0)) {
  FUNC_0(VAR_1, "pmap_demote_pdpe: failure for va %#lx"
      " in pmap %p", VAR_15, VAR_13);
  return (VAR_0);
 }
 VAR_25 = FUNC_4(VAR_26);
 VAR_18 = (pd_entry_t *)FUNC_2(VAR_25);
 VAR_16 = VAR_25 | VAR_22 | VAR_21 | (VAR_17 & VAR_7) | VAR_23 | VAR_24;
 FUNC_1((VAR_17 & VAR_21) != 0,
     ("pmap_demote_pdpe: oldpdpe is missing PG_A"));
 FUNC_1((VAR_17 & (VAR_22 | VAR_23)) != VAR_23,
     ("pmap_demote_pdpe: oldpdpe is missing PG_M"));
 VAR_19 = VAR_17;




 for (VAR_20 = VAR_18; VAR_20 < VAR_18 + VAR_4; VAR_20++) {
  *VAR_20 = VAR_19;
  VAR_19 += VAR_3;
 }




 *VAR_14 = VAR_16;




 FUNC_6(VAR_13, (vm_offset_t)FUNC_11(VAR_15));

 VAR_12++;
 FUNC_0(VAR_1, "pmap_demote_pdpe: success for va %#lx"
     " in pmap %p", VAR_15, VAR_13);
 return (VAR_8);
}
