
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_15__ ;


typedef TYPE_4__* vm_page_t ;
typedef int vm_offset_t ;
typedef unsigned long uint32_t ;
struct spglist {int dummy; } ;
struct pv_chunk {unsigned long* pc_map; int pv_va; struct pv_chunk* pc_pventry; TYPE_5__* pc_pmap; } ;
struct pch {int dummy; } ;
struct md_page {int pv_list; } ;
typedef struct pv_chunk* pv_entry_t ;
typedef int pt2_entry_t ;
typedef int pt1_entry_t ;
typedef TYPE_5__* pmap_t ;
struct TYPE_25__ {int resident_count; } ;
struct TYPE_28__ {int pm_pvchunk; TYPE_2__ pm_stats; } ;
struct TYPE_24__ {int pv_list; } ;
struct TYPE_27__ {int flags; int ref_count; TYPE_1__ md; } ;
struct TYPE_26__ {int ss; } ;
struct TYPE_23__ {TYPE_3__ s; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct spglist*) ;
 TYPE_4__* FUNC_8 (struct spglist*) ;
 int FUNC_9 (struct spglist*) ;
 int FUNC_10 (struct spglist*,int ) ;
 int FUNC_11 (int *,struct pch*,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 struct pv_chunk* FUNC_13 (int *) ;
 int FUNC_14 (struct pch*) ;
 int FUNC_15 (int *,struct pv_chunk*,int ) ;
 int FUNC_16 (struct pch*,struct pv_chunk*,int ) ;
 int FUNC_17 (int *,struct pv_chunk*,int ) ;
 int FUNC_18 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_19 (unsigned long) ;
 struct md_page* FUNC_20 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_15__ VAR_13 ;
 int FUNC_21 (int ) ;
 int * FUNC_22 (TYPE_5__*,int ) ;
 int* FUNC_23 (TYPE_5__*,int ) ;
 int FUNC_24 (int*) ;
 int FUNC_25 (scalar_t__*,int ) ;
 int FUNC_26 (int ,int) ;
 int FUNC_27 (TYPE_5__*,int ) ;
 int FUNC_28 (TYPE_5__*,int ,struct spglist*) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (int) ;
 int FUNC_32 (int*) ;
 int FUNC_33 (int*) ;
 int FUNC_34 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_35 (TYPE_4__*,int ) ;
 int FUNC_36 (TYPE_4__*,int ) ;
 int FUNC_37 (TYPE_4__*) ;
 int FUNC_38 (struct spglist*,int) ;
 int FUNC_39 (int) ;

__attribute__((used)) static vm_page_t
FUNC_40(pmap_t VAR_20)
{
 struct pch VAR_21;
 struct pv_chunk *VAR_22;
 struct md_page *VAR_23;
 pt1_entry_t *VAR_24;
 pmap_t VAR_25;
 pt2_entry_t *VAR_26, VAR_27;
 pv_entry_t VAR_28;
 vm_offset_t VAR_29;
 vm_page_t VAR_30, VAR_31;
 struct spglist VAR_32;
 uint32_t VAR_33;
 int VAR_34, VAR_35, VAR_36;

 FUNC_3(VAR_20, VAR_0);
 VAR_25 = ((void*)0);
 VAR_31 = ((void*)0);
 FUNC_9(&VAR_32);
 FUNC_14(&VAR_21);
 while ((VAR_22 = FUNC_13(&VAR_14)) != ((void*)0) && (VAR_19 == 0 ||
     FUNC_7(&VAR_32))) {
  FUNC_17(&VAR_14, VAR_22, VAR_12);
  if (VAR_25 != VAR_22->pc_pmap) {
   if (VAR_25 != ((void*)0)) {
    if (VAR_25 != VAR_20)
     FUNC_5(VAR_25);
   }
   VAR_25 = VAR_22->pc_pmap;

   if (VAR_25 > VAR_20)
    FUNC_2(VAR_25);
   else if (VAR_25 != VAR_20 && !FUNC_4(VAR_25)) {
    VAR_25 = ((void*)0);
    FUNC_16(&VAR_21, VAR_22, VAR_12);
    continue;
   }
  }




  VAR_36 = 0;
  for (VAR_35 = 0; VAR_35 < VAR_6; VAR_35++) {
   for (VAR_33 = ~VAR_22->pc_map[VAR_35] & VAR_10[VAR_35];
       VAR_33 != 0; VAR_33 &= ~(1UL << VAR_34)) {
    VAR_34 = FUNC_19(VAR_33) - 1;
    VAR_28 = &VAR_22->pc_pventry[VAR_35 * 32 + VAR_34];
    VAR_29 = VAR_28->pv_va;
    VAR_24 = FUNC_22(VAR_25, VAR_29);
    if (FUNC_29(FUNC_30(VAR_24)))
     continue;
    VAR_26 = FUNC_23(VAR_25, VAR_29);
    VAR_27 = FUNC_32(VAR_26);
    if ((VAR_27 & VAR_5) == 0)
     VAR_27 = FUNC_33(VAR_26);
    FUNC_24(VAR_26);
    if ((VAR_27 & VAR_5) != 0)
     continue;
    FUNC_0(VAR_27 != 0,
        ("pmap_pv_reclaim: pmap %p va %#x zero pte",
        VAR_25, VAR_29));
    FUNC_27(VAR_25, VAR_29);
    VAR_30 = FUNC_1(FUNC_34(VAR_27));
    if (FUNC_31(VAR_27))
     FUNC_37(VAR_30);
    if ((VAR_27 & VAR_4) != 0)
     FUNC_36(VAR_30, VAR_1);
    FUNC_17(&VAR_30->md.pv_list, VAR_28, VAR_18);
    if (FUNC_12(&VAR_30->md.pv_list) &&
        (VAR_30->flags & VAR_3) == 0) {
     VAR_23 = FUNC_20(FUNC_18(VAR_30));
     if (FUNC_12(&VAR_23->pv_list)) {
      FUNC_35(VAR_30,
          VAR_2);
     }
    }
    VAR_22->pc_map[VAR_35] |= 1UL << VAR_34;
    FUNC_28(VAR_25, VAR_29, &VAR_32);
    VAR_36++;
   }
  }
  if (VAR_36 == 0) {
   FUNC_16(&VAR_21, VAR_22, VAR_12);
   continue;
  }

  VAR_25->pm_stats.resident_count -= VAR_36;
  FUNC_6(VAR_16 += VAR_36);
  FUNC_6(VAR_17 += VAR_36);
  VAR_15 -= VAR_36;
  FUNC_17(&VAR_25->pm_pvchunk, VAR_22, VAR_11);
  for (VAR_35 = 0; VAR_35 < VAR_6; VAR_35++)
   if (VAR_22->pc_map[VAR_35] != VAR_10[VAR_35]) {
    FUNC_15(&VAR_25->pm_pvchunk, VAR_22,
        VAR_11);
    FUNC_16(&VAR_21, VAR_22, VAR_12);





    if (VAR_25 == VAR_20)
     goto out;
    break;
   }
  if (VAR_35 == VAR_6) {
   FUNC_6(VAR_17 -= VAR_7);
   FUNC_6(VAR_8--);
   FUNC_6(VAR_9++);

   VAR_31 = FUNC_1(FUNC_21((vm_offset_t)VAR_22));
   FUNC_26((vm_offset_t)VAR_22, 1);
   FUNC_25(&VAR_19, (vm_offset_t)VAR_22);
   break;
  }
 }
out:
 FUNC_11(&VAR_14, &VAR_21, VAR_12);
 if (VAR_25 != ((void*)0)) {
  if (VAR_25 != VAR_20)
   FUNC_5(VAR_25);
 }
 if (VAR_31 == ((void*)0) && VAR_19 != 0 && FUNC_7(&VAR_32)) {
  VAR_31 = FUNC_8(&VAR_32);
  FUNC_10(&VAR_32, VAR_13.s.ss);

  VAR_31->ref_count = 1;
  FUNC_39(1);
 }
 FUNC_38(&VAR_32, 0);
 return (VAR_31);
}
