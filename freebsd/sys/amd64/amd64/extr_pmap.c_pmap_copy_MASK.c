
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
struct TYPE_26__ {scalar_t__ pm_type; } ;
struct TYPE_25__ {scalar_t__ ref_count; scalar_t__ pindex; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (struct spglist*) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,scalar_t__,int *) ;
 TYPE_1__* FUNC_10 (TYPE_2__*,scalar_t__,int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,scalar_t__) ;
 int FUNC_13 (TYPE_2__*) ;
 size_t FUNC_14 (scalar_t__) ;
 int VAR_13 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int* FUNC_16 (int*,scalar_t__) ;
 int* FUNC_17 (TYPE_2__*,scalar_t__) ;
 int* FUNC_18 (int*,scalar_t__) ;
 size_t FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (TYPE_2__*,scalar_t__,int,int ,struct rwlock**) ;
 int FUNC_21 (TYPE_2__*,int) ;
 scalar_t__ FUNC_22 (TYPE_2__*,scalar_t__,TYPE_1__*,struct rwlock**) ;
 scalar_t__ FUNC_23 (TYPE_2__*,scalar_t__,TYPE_1__*,struct spglist*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (struct rwlock*) ;
 int FUNC_26 (struct spglist*,int) ;

void
FUNC_27(pmap_t VAR_14, pmap_t VAR_15, vm_offset_t VAR_16, vm_size_t VAR_17,
    vm_offset_t VAR_18)
{
 struct rwlock *VAR_19;
 struct spglist VAR_20;
 pml4_entry_t *VAR_21;
 pdp_entry_t *VAR_22;
 pd_entry_t *VAR_23, VAR_24;
 pt_entry_t *VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, *VAR_30;
 vm_offset_t VAR_31, VAR_32, VAR_33;
 vm_page_t VAR_34, VAR_35, VAR_36;

 if (VAR_16 != VAR_18)
  return;

 if (VAR_14->pm_type != VAR_15->pm_type)
  return;
 if (FUNC_11(VAR_14))
  return;

 VAR_32 = VAR_18 + VAR_17;
 VAR_19 = ((void*)0);
 if (VAR_14 < VAR_15) {
  FUNC_3(VAR_14);
  FUNC_3(VAR_15);
 } else {
  FUNC_3(VAR_15);
  FUNC_3(VAR_14);
 }

 VAR_26 = FUNC_8(VAR_14);
 VAR_27 = FUNC_13(VAR_14);
 VAR_28 = FUNC_24(VAR_14);

 for (VAR_31 = VAR_18; VAR_31 < VAR_32; VAR_31 = VAR_33) {
  FUNC_0(VAR_31 < VAR_12,
      ("pmap_copy: invalid to pmap_copy page tables"));

  VAR_21 = FUNC_17(VAR_15, VAR_31);
  if ((*VAR_21 & VAR_28) == 0) {
   VAR_33 = (VAR_31 + VAR_2) & ~VAR_11;
   if (VAR_33 < VAR_31)
    VAR_33 = VAR_32;
   continue;
  }

  VAR_22 = FUNC_18(VAR_21, VAR_31);
  if ((*VAR_22 & VAR_28) == 0) {
   VAR_33 = (VAR_31 + VAR_0) & ~VAR_4;
   if (VAR_33 < VAR_31)
    VAR_33 = VAR_32;
   continue;
  }

  VAR_33 = (VAR_31 + VAR_1) & ~VAR_5;
  if (VAR_33 < VAR_31)
   VAR_33 = VAR_32;

  VAR_23 = FUNC_16(VAR_22, VAR_31);
  VAR_24 = *VAR_23;
  if (VAR_24 == 0)
   continue;

  if (VAR_24 & VAR_8) {
   if ((VAR_31 & VAR_5) != 0 || VAR_31 + VAR_1 > VAR_32)
    continue;
   VAR_34 = FUNC_9(VAR_14, VAR_31, ((void*)0));
   if (VAR_34 == ((void*)0))
    break;
   VAR_23 = (pd_entry_t *)
       FUNC_1(FUNC_6(VAR_34));
   VAR_23 = &VAR_23[FUNC_14(VAR_31)];
   if (*VAR_23 == 0 && ((VAR_24 & VAR_7) == 0 ||
       FUNC_20(VAR_14, VAR_31, VAR_24,
       VAR_10, &VAR_19))) {
    *VAR_23 = VAR_24 & ~VAR_9;
    FUNC_21(VAR_14, VAR_1 /
        VAR_3);
    FUNC_7(&VAR_13, 1);
   } else
    VAR_34->ref_count--;
   continue;
  }

  VAR_24 &= VAR_6;
  VAR_36 = FUNC_2(VAR_24);
  FUNC_0(VAR_36->ref_count > 0,
      ("pmap_copy: source page table page is unused"));

  if (VAR_33 > VAR_32)
   VAR_33 = VAR_32;

  VAR_30 = (pt_entry_t *)FUNC_1(VAR_24);
  VAR_30 = &VAR_30[FUNC_19(VAR_31)];
  VAR_35 = ((void*)0);
  for (; VAR_31 < VAR_33; VAR_31 += VAR_3, VAR_30++) {
   VAR_29 = *VAR_30;




   if ((VAR_29 & VAR_7) == 0)
    continue;

   if (VAR_35 != ((void*)0)) {
    FUNC_0(VAR_35->pindex ==
        FUNC_15(VAR_31),
        ("dstmpte pindex/addr mismatch"));
    VAR_35->ref_count++;
   } else if ((VAR_35 = FUNC_10(VAR_14, VAR_31,
       ((void*)0))) == ((void*)0))
    goto out;
   VAR_25 = (pt_entry_t *)
       FUNC_1(FUNC_6(VAR_35));
   VAR_25 = &VAR_25[FUNC_19(VAR_31)];
   if (*VAR_25 == 0 &&
       FUNC_22(VAR_14, VAR_31,
       FUNC_2(VAR_29 & VAR_6), &VAR_19)) {




    *VAR_25 = VAR_29 & ~(VAR_9 | VAR_27 | VAR_26);
    FUNC_21(VAR_14, 1);
   } else {
    FUNC_5(&VAR_20);
    if (FUNC_23(VAR_14, VAR_31, VAR_35,
        &VAR_20)) {







     FUNC_12(VAR_14, VAR_31);
     FUNC_26(&VAR_20, 1);
    }
    goto out;
   }

   if (VAR_35->ref_count >= VAR_36->ref_count)
    break;
  }
 }
out:
 if (VAR_19 != ((void*)0))
  FUNC_25(VAR_19);
 FUNC_4(VAR_15);
 FUNC_4(VAR_14);
}
