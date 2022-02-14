
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_21__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
typedef unsigned long uint64_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct pv_chunks_list {int active_reclaims; int pvc_lock; int pvc_list; } ;
struct pv_chunk_header {int dummy; } ;
struct pv_chunk {unsigned long* pc_map; TYPE_4__* pc_pmap; int pv_va; struct pv_chunk* pc_pventry; } ;
struct md_page {int pv_list; } ;
typedef struct pv_chunk* pv_entry_t ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
typedef int pd_entry_t ;
typedef int pc_marker_end_b ;
typedef int pc_marker_b ;
struct TYPE_33__ {int pm_pvchunk; } ;
struct TYPE_29__ {int pv_list; int pv_gen; } ;
struct TYPE_32__ {int flags; int ref_count; int phys_addr; TYPE_1__ md; } ;
struct TYPE_31__ {int ss; } ;
struct TYPE_30__ {TYPE_2__ s; } ;


 int FUNC_0 (struct rwlock**,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct rwlock**) ;
 scalar_t__ FUNC_10 (struct spglist*) ;
 TYPE_3__* FUNC_11 (struct spglist*) ;
 int FUNC_12 (struct spglist*) ;
 int FUNC_13 (struct spglist*,int ) ;
 scalar_t__ FUNC_14 (int *) ;
 struct pv_chunk* FUNC_15 (int *) ;
 int FUNC_16 (int *,struct pv_chunk*,struct pv_chunk*,int ) ;
 int FUNC_17 (int *,struct pv_chunk*,int ) ;
 int FUNC_18 (int *,struct pv_chunk*,int ) ;
 struct pv_chunk* FUNC_19 (struct pv_chunk*,int ) ;
 int FUNC_20 (int *,struct pv_chunk*,int ) ;
 int FUNC_21 (TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (unsigned long) ;
 int FUNC_27 (struct pv_chunk_header*,int) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 struct md_page* FUNC_31 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_21__ VAR_17 ;
 int FUNC_32 (TYPE_4__*) ;
 int FUNC_33 (TYPE_3__*) ;
 int FUNC_34 () ;
 int FUNC_35 (TYPE_4__*) ;
 int FUNC_36 (TYPE_4__*,int ) ;
 int FUNC_37 (TYPE_4__*) ;
 int FUNC_38 () ;
 int* FUNC_39 (TYPE_4__*,int ) ;
 int* FUNC_40 (int*,int ) ;
 int FUNC_41 (TYPE_4__*,int) ;
 int FUNC_42 (TYPE_4__*) ;
 int FUNC_43 (TYPE_4__*,int ,int,struct spglist*) ;
 int FUNC_44 (int*) ;
 struct pv_chunks_list* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_45 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_46 (TYPE_3__*,int ) ;
 int FUNC_47 (TYPE_3__*,int ) ;
 int FUNC_48 (TYPE_3__*) ;
 int FUNC_49 (struct spglist*,int) ;

__attribute__((used)) static vm_page_t
FUNC_50(pmap_t VAR_23, struct rwlock **VAR_24, int VAR_25)
{
 struct pv_chunks_list *VAR_26;
 struct pv_chunk *VAR_27, *VAR_28, *VAR_29;
 struct pv_chunk_header VAR_30, VAR_31;
 struct md_page *VAR_32;
 pd_entry_t *VAR_33;
 pmap_t VAR_34, VAR_35;
 pt_entry_t *VAR_36, VAR_37;
 pt_entry_t VAR_38, VAR_39, VAR_40, VAR_41;
 pv_entry_t VAR_42;
 vm_offset_t VAR_43;
 vm_page_t VAR_44, VAR_45;
 struct spglist VAR_46;
 uint64_t VAR_47;
 int VAR_48, VAR_49, VAR_50;
 bool VAR_51;

 FUNC_6(VAR_23, VAR_0);
 FUNC_2(VAR_24 != ((void*)0), ("reclaim_pv_chunk: lockp is NULL"));
 VAR_35 = ((void*)0);
 VAR_45 = ((void*)0);
 VAR_38 = VAR_39 = VAR_40 = VAR_41 = 0;
 FUNC_12(&VAR_46);
 FUNC_27(&VAR_30, sizeof(VAR_30));
 FUNC_27(&VAR_31, sizeof(VAR_31));
 VAR_28 = (struct pv_chunk *)&VAR_30;
 VAR_29 = (struct pv_chunk *)&VAR_31;






 VAR_51 = FUNC_38();

 VAR_26 = &VAR_18[VAR_25];
 FUNC_29(&VAR_26->pvc_lock);
 VAR_26->active_reclaims++;
 FUNC_17(&VAR_26->pvc_list, VAR_28, VAR_16);
 FUNC_18(&VAR_26->pvc_list, VAR_29, VAR_16);
 while ((VAR_27 = FUNC_19(VAR_28, VAR_16)) != VAR_29 &&
     FUNC_10(&VAR_46)) {
  VAR_34 = VAR_27->pc_pmap;
  if (VAR_34 == ((void*)0)) {






   goto next_chunk;
  }
  FUNC_30(&VAR_26->pvc_lock);






  if (VAR_35 != VAR_34) {
   FUNC_45(VAR_35, VAR_23,
       VAR_51);
   VAR_35 = VAR_34;

   if (VAR_35 > VAR_23) {
    FUNC_9(VAR_24);
    FUNC_5(VAR_35);
    if (VAR_51)
     FUNC_34();
    FUNC_29(&VAR_26->pvc_lock);
    continue;
   } else if (VAR_35 != VAR_23) {
    if (FUNC_7(VAR_35)) {
     if (VAR_51)
      FUNC_34();
     FUNC_29(&VAR_26->pvc_lock);
     continue;
    } else {
     VAR_35 = ((void*)0);
     FUNC_29(&VAR_26->pvc_lock);
     VAR_27 = FUNC_19(VAR_28, VAR_16);
     if (VAR_27 == ((void*)0) ||
         VAR_27->pc_pmap != VAR_34)
      continue;
     goto next_chunk;
    }
   } else if (VAR_51)
    FUNC_34();
   VAR_38 = FUNC_35(VAR_35);
   VAR_39 = FUNC_32(VAR_35);
   VAR_40 = FUNC_37(VAR_35);
   VAR_41 = FUNC_42(VAR_35);
  }




  VAR_50 = 0;
  for (VAR_49 = 0; VAR_49 < VAR_10; VAR_49++) {
   for (VAR_47 = ~VAR_27->pc_map[VAR_49] & VAR_14[VAR_49];
       VAR_47 != 0; VAR_47 &= ~(1UL << VAR_48)) {
    VAR_48 = FUNC_26(VAR_47);
    VAR_42 = &VAR_27->pc_pventry[VAR_49 * 64 + VAR_48];
    VAR_43 = VAR_42->pv_va;
    VAR_33 = FUNC_39(VAR_35, VAR_43);
    if ((*VAR_33 & VAR_8) != 0)
     continue;
    VAR_36 = FUNC_40(VAR_33, VAR_43);
    if ((*VAR_36 & VAR_9) != 0)
     continue;
    VAR_37 = FUNC_44(VAR_36);
    if ((VAR_37 & VAR_38) != 0)
     FUNC_36(VAR_35, VAR_43);
    VAR_44 = FUNC_4(VAR_37 & VAR_7);
    if ((VAR_37 & (VAR_40 | VAR_41)) == (VAR_40 | VAR_41))
     FUNC_48(VAR_44);
    if ((VAR_37 & VAR_39) != 0)
     FUNC_47(VAR_44, VAR_4);
    FUNC_0(VAR_24, VAR_44);
    FUNC_20(&VAR_44->md.pv_list, VAR_42, VAR_22);
    VAR_44->md.pv_gen++;
    if (FUNC_14(&VAR_44->md.pv_list) &&
        (VAR_44->flags & VAR_6) == 0) {
     VAR_32 = FUNC_31(FUNC_21(VAR_44));
     if (FUNC_14(&VAR_32->pv_list)) {
      FUNC_46(VAR_44,
          VAR_5);
     }
    }
    FUNC_33(VAR_44);
    VAR_27->pc_map[VAR_49] |= 1UL << VAR_48;
    FUNC_43(VAR_35, VAR_43, *VAR_33, &VAR_46);
    VAR_50++;
   }
  }
  if (VAR_50 == 0) {
   FUNC_29(&VAR_26->pvc_lock);
   goto next_chunk;
  }

  FUNC_41(VAR_35, VAR_50);
  FUNC_8(FUNC_23(&VAR_20, VAR_50));
  FUNC_8(FUNC_22(&VAR_21, VAR_50));
  FUNC_8(FUNC_25(&VAR_19, VAR_50));
  FUNC_20(&VAR_35->pm_pvchunk, VAR_27, VAR_15);
  if (VAR_27->pc_map[0] == VAR_1 && VAR_27->pc_map[1] == VAR_2 &&
      VAR_27->pc_map[2] == VAR_3) {
   FUNC_8(FUNC_24(&VAR_21, VAR_11));
   FUNC_8(FUNC_24(&VAR_12, 1));
   FUNC_8(FUNC_22(&VAR_13, 1));

   VAR_45 = FUNC_4(FUNC_1((vm_offset_t)VAR_27));
   FUNC_28(VAR_45->phys_addr);
   FUNC_29(&VAR_26->pvc_lock);
   FUNC_20(&VAR_26->pvc_list, VAR_27, VAR_16);
   break;
  }
  FUNC_17(&VAR_35->pm_pvchunk, VAR_27, VAR_15);
  FUNC_29(&VAR_26->pvc_lock);

  if (VAR_35 == VAR_23)
   break;
next_chunk:
  FUNC_20(&VAR_26->pvc_list, VAR_28, VAR_16);
  FUNC_16(&VAR_26->pvc_list, VAR_27, VAR_28, VAR_16);
  if (VAR_26->active_reclaims == 1 && VAR_35 != ((void*)0)) {







   while ((VAR_27 = FUNC_15(&VAR_26->pvc_list)) != VAR_28) {
    FUNC_3(VAR_27->pc_pmap != ((void*)0));
    FUNC_20(&VAR_26->pvc_list, VAR_27, VAR_16);
    FUNC_18(&VAR_26->pvc_list, VAR_27, VAR_16);
   }
  }
 }
 FUNC_20(&VAR_26->pvc_list, VAR_28, VAR_16);
 FUNC_20(&VAR_26->pvc_list, VAR_29, VAR_16);
 VAR_26->active_reclaims--;
 FUNC_30(&VAR_26->pvc_lock);
 FUNC_45(VAR_35, VAR_23, VAR_51);
 if (VAR_45 == ((void*)0) && !FUNC_10(&VAR_46)) {
  VAR_45 = FUNC_11(&VAR_46);
  FUNC_13(&VAR_46, VAR_17.s.ss);

  VAR_45->ref_count = 1;
 }
 FUNC_49(&VAR_46, 1);
 return (VAR_45);
}
