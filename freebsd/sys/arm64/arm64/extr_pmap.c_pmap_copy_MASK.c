
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef scalar_t__ pmap_t ;
typedef int pd_entry_t ;
struct TYPE_8__ {scalar_t__ ref_count; scalar_t__ pindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_16 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct spglist*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 int VAR_17 ;
 TYPE_1__* FUNC_9 (scalar_t__,scalar_t__,int *) ;
 TYPE_1__* FUNC_10 (scalar_t__,scalar_t__,int *) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int* FUNC_12 (scalar_t__,scalar_t__) ;
 int* FUNC_13 (int*,scalar_t__) ;
 int* FUNC_14 (int*,scalar_t__) ;
 size_t FUNC_15 (scalar_t__) ;
 int VAR_18 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 size_t FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int*) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__,int,int ,struct rwlock**) ;
 int FUNC_20 (scalar_t__,int) ;
 int FUNC_21 (int*,int) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__,TYPE_1__*,struct rwlock**) ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__,TYPE_1__*,struct spglist*) ;
 int FUNC_24 (struct rwlock*) ;
 int FUNC_25 (struct spglist*,int) ;

void
FUNC_26(pmap_t VAR_19, pmap_t VAR_20, vm_offset_t VAR_21, vm_size_t VAR_22,
    vm_offset_t VAR_23)
{
 struct rwlock *VAR_24;
 struct spglist VAR_25;
 pd_entry_t *VAR_26, *VAR_27, *VAR_28, VAR_29;
 pt_entry_t *VAR_30, VAR_31, VAR_32, VAR_33, *VAR_34;
 vm_offset_t VAR_35, VAR_36, VAR_37;
 vm_page_t VAR_38, VAR_39, VAR_40;

 if (VAR_21 != VAR_23)
  return;
 VAR_36 = VAR_23 + VAR_22;
 VAR_24 = ((void*)0);
 if (VAR_19 < VAR_20) {
  FUNC_3(VAR_19);
  FUNC_3(VAR_20);
 } else {
  FUNC_3(VAR_20);
  FUNC_3(VAR_19);
 }
 for (VAR_35 = VAR_23; VAR_35 < VAR_36; VAR_35 = VAR_37) {
  VAR_26 = FUNC_12(VAR_20, VAR_35);
  if (FUNC_18(VAR_26) == 0) {
   VAR_37 = (VAR_35 + VAR_8) & ~VAR_7;
   if (VAR_37 < VAR_35)
    VAR_37 = VAR_36;
   continue;
  }
  VAR_27 = FUNC_13(VAR_26, VAR_35);
  if (FUNC_18(VAR_27) == 0) {
   VAR_37 = (VAR_35 + VAR_10) & ~VAR_9;
   if (VAR_37 < VAR_35)
    VAR_37 = VAR_36;
   continue;
  }
  VAR_37 = (VAR_35 + VAR_13) & ~VAR_12;
  if (VAR_37 < VAR_35)
   VAR_37 = VAR_36;
  VAR_28 = FUNC_14(VAR_27, VAR_35);
  VAR_29 = FUNC_18(VAR_28);
  if (VAR_29 == 0)
   continue;
  if ((VAR_29 & VAR_2) == VAR_11) {
   if ((VAR_35 & VAR_12) != 0 ||
       VAR_35 + VAR_13 > VAR_36)
    continue;
   VAR_38 = FUNC_9(VAR_19, VAR_35, ((void*)0));
   if (VAR_38 == ((void*)0))
    break;
   VAR_28 = (pd_entry_t *)
       FUNC_1(FUNC_6(VAR_38));
   VAR_28 = &VAR_28[FUNC_15(VAR_35)];
   if (FUNC_18(VAR_28) == 0 &&
       ((VAR_29 & VAR_5) == 0 ||
       FUNC_19(VAR_19, VAR_35, VAR_29,
       VAR_16, &VAR_24))) {
    VAR_31 = VAR_0 | VAR_6;
    VAR_32 = 0;
    if ((VAR_29 & VAR_4) != 0)
     VAR_32 |= VAR_1;
    FUNC_21(VAR_28, (VAR_29 & ~VAR_31) | VAR_32);
    FUNC_20(VAR_19, VAR_13 /
        VAR_15);
    FUNC_7(&VAR_18, 1);
   } else
    VAR_38->ref_count--;
   continue;
  }
  FUNC_0((VAR_29 & VAR_2) == VAR_14,
      ("pmap_copy: invalid L2 entry"));
  VAR_29 &= ~VAR_3;
  VAR_40 = FUNC_2(VAR_29);
  FUNC_0(VAR_40->ref_count > 0,
      ("pmap_copy: source page table page is unused"));
  if (VAR_37 > VAR_36)
   VAR_37 = VAR_36;
  VAR_34 = (pt_entry_t *)FUNC_1(VAR_29);
  VAR_34 = &VAR_34[FUNC_17(VAR_35)];
  VAR_39 = ((void*)0);
  for (; VAR_35 < VAR_37; VAR_35 += VAR_15, VAR_34++) {
   VAR_33 = FUNC_18(VAR_34);




   if ((VAR_33 & VAR_5) == 0)
    continue;

   if (VAR_39 != ((void*)0)) {
    FUNC_0(VAR_39->pindex == FUNC_16(VAR_35),
        ("dstmpte pindex/addr mismatch"));
    VAR_39->ref_count++;
   } else if ((VAR_39 = FUNC_10(VAR_19, VAR_35,
       ((void*)0))) == ((void*)0))
    goto out;
   VAR_30 = (pt_entry_t *)
       FUNC_1(FUNC_6(VAR_39));
   VAR_30 = &VAR_30[FUNC_17(VAR_35)];
   if (FUNC_18(VAR_30) == 0 &&
       FUNC_22(VAR_19, VAR_35,
       FUNC_2(VAR_33 & ~VAR_3), &VAR_24)) {




    VAR_31 = VAR_0 | VAR_6;
    VAR_32 = 0;
    if ((VAR_33 & VAR_4) != 0)
     VAR_32 |= VAR_1;
    FUNC_21(VAR_30, (VAR_33 & ~VAR_31) | VAR_32);
    FUNC_20(VAR_19, 1);
   } else {
    FUNC_5(&VAR_25);
    if (FUNC_23(VAR_19, VAR_35, VAR_39,
        &VAR_25)) {
     FUNC_11(VAR_19, VAR_35);
     FUNC_25(&VAR_25, 1);
    }
    goto out;
   }

   if (VAR_39->ref_count >= VAR_40->ref_count)
    break;
  }
 }
out:




 FUNC_8(VAR_17);

 if (VAR_24 != ((void*)0))
  FUNC_24(VAR_24);
 FUNC_4(VAR_20);
 FUNC_4(VAR_19);
}
