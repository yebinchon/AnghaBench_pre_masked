
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
struct TYPE_5__ {scalar_t__ valid; int ref_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int ,scalar_t__,int*,struct rwlock**) ;
 int FUNC_13 (int*,int) ;
 int FUNC_14 (scalar_t__,int ,int,int ) ;
 int FUNC_15 (scalar_t__) ;
 int VAR_26 ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int*) ;
 int FUNC_18 (int ,scalar_t__,int,struct rwlock**) ;
 TYPE_1__* FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int*,int,scalar_t__,int ) ;
 int FUNC_22 (int ,scalar_t__,struct rwlock**) ;
 TYPE_1__* FUNC_23 (int *,int ,int) ;

__attribute__((used)) static pt_entry_t *
FUNC_24(pmap_t VAR_27, pt_entry_t *VAR_28, vm_offset_t VAR_29,
    struct rwlock **VAR_30)
{
 pt_entry_t *VAR_31, VAR_32, VAR_33;
 vm_offset_t VAR_34;
 vm_paddr_t VAR_35;
 vm_page_t VAR_36;

 FUNC_6(VAR_27, VAR_17);
 VAR_31 = ((void*)0);
 VAR_33 = FUNC_17(VAR_28);
 FUNC_4((VAR_33 & VAR_3) == VAR_10,
     ("pmap_demote_l2: Demoting a non-block entry"));
 VAR_29 &= ~VAR_11;

 VAR_34 = 0;
 if (VAR_29 <= (vm_offset_t)VAR_28 && VAR_29 + VAR_12 > (vm_offset_t)VAR_28) {
  VAR_34 = FUNC_10(VAR_20);
  if (VAR_34 == 0)
   return (((void*)0));
 }





 if ((VAR_33 & VAR_0) == 0) {
  FUNC_4((VAR_33 & VAR_7) == 0,
      ("pmap_demote_l2: a wired mapping is missing ATTR_AF"));
  FUNC_12(VAR_27, VAR_29, VAR_28, VAR_30);
  FUNC_1(VAR_9, "pmap_demote_l2: failure for va %#lx in pmap %p",
      VAR_29, VAR_27);
  goto fail;
 }

 if ((VAR_36 = FUNC_19(VAR_27, VAR_29)) == ((void*)0)) {
  FUNC_4((VAR_33 & VAR_7) == 0,
      ("pmap_demote_l2: page table page for a wired mapping"
      " is missing"));
  FUNC_4(VAR_29 < VAR_25 || FUNC_7(VAR_29),
      ("pmap_demote_l2: No saved mpte for va %#lx", VAR_29));
  VAR_36 = FUNC_23(((void*)0), FUNC_16(VAR_29),
      (FUNC_7(VAR_29) ? VAR_21 : VAR_23) |
      VAR_22 | VAR_24);





  if (VAR_36 == ((void*)0)) {
   FUNC_12(VAR_27, VAR_29, VAR_28, VAR_30);
   FUNC_1(VAR_9, "pmap_demote_l2: failure for va %#lx"
       " in pmap %p", VAR_29, VAR_27);
   goto fail;
  }

  if (VAR_29 < VAR_25) {
   VAR_36->ref_count = VAR_18;
   FUNC_20(VAR_27, 1);
  }
 }
 VAR_35 = FUNC_8(VAR_36);
 VAR_31 = (pt_entry_t *)FUNC_5(VAR_35);
 VAR_32 = (VAR_33 & ~VAR_3) | VAR_15;
 FUNC_4((VAR_33 & (VAR_2 | VAR_5)) !=
     (FUNC_0(VAR_1) | VAR_5),
     ("pmap_demote_l2: L2 entry is writeable but not dirty"));
 if (VAR_36->valid == 0 || (VAR_31[0] & VAR_4) != (VAR_32 & VAR_4))
  FUNC_13(VAR_31, VAR_32);




 if (VAR_34 != 0) {
  FUNC_14(VAR_34, VAR_20,
      FUNC_3((vm_offset_t)VAR_28) & ~VAR_14, VAR_8);
  VAR_28 = (pt_entry_t *)(VAR_34 + ((vm_offset_t)VAR_28 & VAR_19));
 }
 if ((VAR_33 & VAR_6) != 0)
  FUNC_22(VAR_27, VAR_16 - 1, VAR_30);





 FUNC_21(VAR_27, VAR_28, VAR_35 | VAR_13, VAR_29, VAR_20);




 if ((VAR_33 & VAR_6) != 0)
  FUNC_18(VAR_27, VAR_29, VAR_33 & ~VAR_4, VAR_30);

 FUNC_9(&VAR_26, 1);
 FUNC_2(VAR_9, "pmap_demote_l2: success for va %#lx"
     " in pmap %p %lx", VAR_29, VAR_27, VAR_31[0]);

fail:
 if (VAR_34 != 0) {
  FUNC_15(VAR_34);
  FUNC_11(VAR_34, VAR_20);
 }

 return (VAR_31);

}
