
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_14__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
typedef unsigned long uint64_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct pv_chunk_header {int dummy; } ;
struct pv_chunk {unsigned long* pc_map; TYPE_4__* pc_pmap; int pv_va; struct pv_chunk* pc_pventry; } ;
struct md_page {int pv_list; } ;
typedef struct pv_chunk* pv_entry_t ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
typedef int pd_entry_t ;
typedef int pc_marker_end_b ;
typedef int pc_marker_b ;
struct TYPE_27__ {int pm_pvchunk; } ;
struct TYPE_25__ {int pv_list; int pv_gen; } ;
struct TYPE_26__ {int flags; int ref_count; int phys_addr; TYPE_2__ md; } ;
struct TYPE_24__ {int ss; } ;
struct TYPE_23__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rwlock**,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct rwlock**) ;
 scalar_t__ FUNC_11 (struct spglist*) ;
 TYPE_3__* FUNC_12 (struct spglist*) ;
 int FUNC_13 (struct spglist*) ;
 int FUNC_14 (struct spglist*,int ) ;
 scalar_t__ FUNC_15 (int *) ;
 struct pv_chunk* FUNC_16 (int *) ;
 int FUNC_17 (int *,struct pv_chunk*,struct pv_chunk*,int ) ;
 int FUNC_18 (int *,struct pv_chunk*,int ) ;
 int FUNC_19 (int *,struct pv_chunk*,int ) ;
 struct pv_chunk* FUNC_20 (struct pv_chunk*,int ) ;
 int FUNC_21 (int *,struct pv_chunk*,int ) ;
 int FUNC_22 (TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (struct pv_chunk_header*,int) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (unsigned long) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 struct md_page* FUNC_32 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_14__ VAR_17 ;
 int FUNC_33 (TYPE_4__*,int ) ;
 int* FUNC_34 (int*,int ) ;
 int FUNC_35 (int*) ;
 int FUNC_36 (int*) ;
 int* FUNC_37 (TYPE_4__*,int ,int*) ;
 scalar_t__ FUNC_38 (int) ;
 int FUNC_39 (TYPE_4__*,int) ;
 int FUNC_40 (TYPE_4__*,int ,int,struct spglist*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_41 (TYPE_3__*,int ) ;
 int FUNC_42 (TYPE_3__*,int ) ;
 int FUNC_43 (TYPE_3__*) ;
 int FUNC_44 (struct spglist*,int) ;

__attribute__((used)) static vm_page_t
FUNC_45(pmap_t VAR_24, struct rwlock **VAR_25)
{
 struct pv_chunk *VAR_26, *VAR_27, *VAR_28;
 struct pv_chunk_header VAR_29, VAR_30;
 struct md_page *VAR_31;
 pd_entry_t *VAR_32;
 pmap_t VAR_33, VAR_34;
 pt_entry_t *VAR_35, VAR_36;
 pv_entry_t VAR_37;
 vm_offset_t VAR_38;
 vm_page_t VAR_39, VAR_40;
 struct spglist VAR_41;
 uint64_t VAR_42;
 int VAR_43, VAR_44, VAR_45, VAR_46;
 static int VAR_47 = 0;

 FUNC_6(VAR_24, VAR_3);
 FUNC_2(VAR_25 != ((void*)0), ("reclaim_pv_chunk: lockp is NULL"));

 VAR_34 = ((void*)0);
 VAR_40 = ((void*)0);
 FUNC_13(&VAR_41);
 FUNC_27(&VAR_29, sizeof(VAR_29));
 FUNC_27(&VAR_30, sizeof(VAR_30));
 VAR_27 = (struct pv_chunk *)&VAR_29;
 VAR_28 = (struct pv_chunk *)&VAR_30;

 FUNC_30(&VAR_19);
 VAR_47++;
 FUNC_18(&VAR_18, VAR_27, VAR_16);
 FUNC_19(&VAR_18, VAR_28, VAR_16);
 while ((VAR_26 = FUNC_20(VAR_27, VAR_16)) != VAR_28 &&
     FUNC_11(&VAR_41)) {
  VAR_33 = VAR_26->pc_pmap;
  if (VAR_33 == ((void*)0)) {






   goto next_chunk;
  }
  FUNC_31(&VAR_19);






  if (VAR_34 != VAR_33) {
   if (VAR_34 != ((void*)0) && VAR_34 != VAR_24)
    FUNC_8(VAR_34);
   VAR_34 = VAR_33;

   if (VAR_34 > VAR_24) {
    FUNC_10(VAR_25);
    FUNC_5(VAR_34);
    FUNC_30(&VAR_19);
    continue;
   } else if (VAR_34 != VAR_24) {
    if (FUNC_7(VAR_34)) {
     FUNC_30(&VAR_19);
     continue;
    } else {
     VAR_34 = ((void*)0);
     FUNC_30(&VAR_19);
     VAR_26 = FUNC_20(VAR_27, VAR_16);
     if (VAR_26 == ((void*)0) ||
         VAR_26->pc_pmap != VAR_33)
      continue;
     goto next_chunk;
    }
   }
  }




  VAR_45 = 0;
  for (VAR_44 = 0; VAR_44 < VAR_10; VAR_44++) {
   for (VAR_42 = ~VAR_26->pc_map[VAR_44] & VAR_14[VAR_44];
       VAR_42 != 0; VAR_42 &= ~(1UL << VAR_43)) {
    VAR_43 = FUNC_29(VAR_42) - 1;
    VAR_37 = &VAR_26->pc_pventry[VAR_44 * 64 + VAR_43];
    VAR_38 = VAR_37->pv_va;
    VAR_32 = FUNC_37(VAR_34, VAR_38, &VAR_46);
    if (VAR_46 != 2)
     continue;
    VAR_35 = FUNC_34(VAR_32, VAR_38);
    VAR_36 = FUNC_35(VAR_35);
    if ((VAR_36 & VAR_2) != 0)
     continue;
    VAR_36 = FUNC_36(VAR_35);
    FUNC_33(VAR_34, VAR_38);
    VAR_39 = FUNC_4(VAR_36 & ~VAR_1);
    if (FUNC_38(VAR_36))
     FUNC_43(VAR_39);
    if ((VAR_36 & VAR_0) != 0)
     FUNC_42(VAR_39, VAR_7);
    FUNC_0(VAR_25, VAR_39);
    FUNC_21(&VAR_39->md.pv_list, VAR_37, VAR_23);
    VAR_39->md.pv_gen++;
    if (FUNC_15(&VAR_39->md.pv_list) &&
        (VAR_39->flags & VAR_9) == 0) {
     VAR_31 = FUNC_32(FUNC_22(VAR_39));
     if (FUNC_15(&VAR_31->pv_list)) {
      FUNC_41(VAR_39,
          VAR_8);
     }
    }
    VAR_26->pc_map[VAR_44] |= 1UL << VAR_43;
    FUNC_40(VAR_34, VAR_38, FUNC_35(VAR_32), &VAR_41);
    VAR_45++;
   }
  }
  if (VAR_45 == 0) {
   FUNC_30(&VAR_19);
   goto next_chunk;
  }

  FUNC_39(VAR_34, VAR_45);
  FUNC_9(FUNC_24(&VAR_21, VAR_45));
  FUNC_9(FUNC_23(&VAR_22, VAR_45));
  FUNC_9(FUNC_26(&VAR_20, VAR_45));
  FUNC_21(&VAR_34->pm_pvchunk, VAR_26, VAR_15);
  if (VAR_26->pc_map[0] == VAR_4 && VAR_26->pc_map[1] == VAR_5 &&
      VAR_26->pc_map[2] == VAR_6) {
   FUNC_9(FUNC_25(&VAR_22, VAR_11));
   FUNC_9(FUNC_25(&VAR_12, 1));
   FUNC_9(FUNC_23(&VAR_13, 1));

   VAR_40 = FUNC_4(FUNC_1((vm_offset_t)VAR_26));
   FUNC_28(VAR_40->phys_addr);
   FUNC_30(&VAR_19);
   FUNC_21(&VAR_18, VAR_26, VAR_16);
   break;
  }
  FUNC_18(&VAR_34->pm_pvchunk, VAR_26, VAR_15);
  FUNC_30(&VAR_19);

  if (VAR_34 == VAR_24)
   break;

next_chunk:
  FUNC_21(&VAR_18, VAR_27, VAR_16);
  FUNC_17(&VAR_18, VAR_26, VAR_27, VAR_16);
  if (VAR_47 == 1 && VAR_34 != ((void*)0)) {







   while ((VAR_26 = FUNC_16(&VAR_18)) != VAR_27) {
    FUNC_3(VAR_26->pc_pmap != ((void*)0));
    FUNC_21(&VAR_18, VAR_26, VAR_16);
    FUNC_19(&VAR_18, VAR_26, VAR_16);
   }
  }
 }
 FUNC_21(&VAR_18, VAR_27, VAR_16);
 FUNC_21(&VAR_18, VAR_28, VAR_16);
 VAR_47--;
 FUNC_31(&VAR_19);
 if (VAR_34 != ((void*)0) && VAR_34 != VAR_24)
  FUNC_8(VAR_34);
 if (VAR_40 == ((void*)0) && !FUNC_11(&VAR_41)) {
  VAR_40 = FUNC_12(&VAR_41);
  FUNC_14(&VAR_41, VAR_17.s.ss);

  VAR_40->ref_count = 1;
 }
 FUNC_44(&VAR_41, 1);
 return (VAR_40);
}
