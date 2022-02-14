
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
typedef unsigned long u_long ;
struct pv_chunk {unsigned long* pc_map; int pv_va; struct pv_chunk* pc_pventry; TYPE_4__* pc_pmap; } ;
struct pch {int dummy; } ;
typedef struct pv_chunk* pv_entry_t ;
typedef scalar_t__ pt_entry_t ;
typedef TYPE_4__* pmap_t ;
typedef scalar_t__ pd_entry_t ;
typedef int inuse ;
struct TYPE_20__ {int resident_count; } ;
struct TYPE_22__ {int pm_pvchunk; TYPE_2__ pm_stats; } ;
struct TYPE_19__ {int pv_flags; int pv_list; } ;
struct TYPE_21__ {int phys_addr; TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int FUNC_8 (int *,struct pch*,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 struct pv_chunk* FUNC_10 (int *) ;
 int FUNC_11 (struct pch*) ;
 int FUNC_12 (int *,struct pv_chunk*,int ) ;
 int FUNC_13 (struct pch*,struct pv_chunk*,int ) ;
 int FUNC_14 (int *,struct pv_chunk*,int ) ;
 int FUNC_15 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (unsigned long) ;
 scalar_t__ FUNC_18 (TYPE_4__*) ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (TYPE_4__*) ;
 scalar_t__* FUNC_20 (TYPE_4__*,int ) ;
 scalar_t__* FUNC_21 (scalar_t__*,int ) ;
 int FUNC_22 (TYPE_4__*,int ,scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_24 (TYPE_3__*,int ) ;
 int FUNC_25 (TYPE_3__*,int ) ;
 int FUNC_26 (TYPE_3__*) ;

__attribute__((used)) static vm_page_t
FUNC_27(pmap_t VAR_20)
{
 struct pch VAR_21;
 struct pv_chunk *VAR_22;
 pd_entry_t *VAR_23;
 pmap_t VAR_24;
 pt_entry_t *VAR_25, VAR_26;
 pv_entry_t VAR_27;
 vm_offset_t VAR_28;
 vm_page_t VAR_29, VAR_30;
 u_long VAR_31;
 int VAR_32, VAR_33, VAR_34, VAR_35;

 FUNC_4(VAR_20, VAR_0);
 VAR_24 = ((void*)0);
 VAR_30 = ((void*)0);
 FUNC_11(&VAR_21);
 while ((VAR_22 = FUNC_10(&VAR_15)) != ((void*)0)) {
  FUNC_14(&VAR_15, VAR_22, VAR_14);
  if (VAR_24 != VAR_22->pc_pmap) {
   if (VAR_24 != ((void*)0)) {
    FUNC_19(VAR_24);
    if (VAR_24 != VAR_20)
     FUNC_6(VAR_24);
   }
   VAR_24 = VAR_22->pc_pmap;

   if (VAR_24 > VAR_20)
    FUNC_3(VAR_24);
   else if (VAR_24 != VAR_20 && !FUNC_5(VAR_24)) {
    VAR_24 = ((void*)0);
    FUNC_13(&VAR_21, VAR_22, VAR_14);
    continue;
   }
  }




  VAR_34 = 0;
  for (VAR_33 = 0; VAR_33 < VAR_8; VAR_33++) {
   for (VAR_31 = ~VAR_22->pc_map[VAR_33] & VAR_12[VAR_33];
       VAR_31 != 0; VAR_31 &= ~(1UL << VAR_32)) {
    VAR_32 = FUNC_17(VAR_31) - 1;
    VAR_35 = VAR_33 * sizeof(VAR_31) * VAR_1 + VAR_32;
    VAR_27 = &VAR_22->pc_pventry[VAR_35];
    VAR_28 = VAR_27->pv_va;
    VAR_23 = FUNC_20(VAR_24, VAR_28);
    FUNC_0(VAR_23 != ((void*)0) && *VAR_23 != 0,
        ("pmap_pv_reclaim: pde"));
    VAR_25 = FUNC_21(VAR_23, VAR_28);
    VAR_26 = *VAR_25;
    if (FUNC_23(&VAR_26, VAR_6))
     continue;
    if (FUNC_18(VAR_24))
     *VAR_25 = VAR_5;
    else
     *VAR_25 = 0;
    VAR_29 = FUNC_2(FUNC_15(VAR_26));
    if (FUNC_23(&VAR_26, VAR_4))
     FUNC_26(VAR_29);
    if (VAR_29->md.pv_flags & VAR_7)
     FUNC_25(VAR_29, VAR_2);
    VAR_29->md.pv_flags &= ~VAR_7;
    FUNC_14(&VAR_29->md.pv_list, VAR_27, VAR_19);
    if (FUNC_9(&VAR_29->md.pv_list))
     FUNC_24(VAR_29, VAR_3);
    VAR_22->pc_map[VAR_33] |= 1UL << VAR_32;
    FUNC_22(VAR_24, VAR_28, *VAR_23);
    VAR_34++;
   }
  }
  if (VAR_34 == 0) {
   FUNC_13(&VAR_21, VAR_22, VAR_14);
   continue;
  }

  VAR_24->pm_stats.resident_count -= VAR_34;
  FUNC_7(VAR_17 += VAR_34);
  FUNC_7(VAR_18 += VAR_34);
  VAR_16 -= VAR_34;
  FUNC_14(&VAR_24->pm_pvchunk, VAR_22, VAR_13);
  for (VAR_33 = 0; VAR_33 < VAR_8; VAR_33++)
   if (VAR_22->pc_map[VAR_33] != VAR_12[VAR_33]) {
    FUNC_12(&VAR_24->pm_pvchunk, VAR_22,
        VAR_13);
    FUNC_13(&VAR_21, VAR_22, VAR_14);





    if (VAR_24 == VAR_20)
     goto out;
    break;
   }
  if (VAR_33 == VAR_8) {
   FUNC_7(VAR_18 -= VAR_9);
   FUNC_7(VAR_10--);
   FUNC_7(VAR_11++);

   VAR_30 = FUNC_2(FUNC_1(
       (vm_offset_t)VAR_22));
   FUNC_16(VAR_30->phys_addr);
   break;
  }
 }
out:
 FUNC_8(&VAR_15, &VAR_21, VAR_14);
 if (VAR_24 != ((void*)0)) {
  FUNC_19(VAR_24);
  if (VAR_24 != VAR_20)
   FUNC_6(VAR_24);
 }
 return (VAR_30);
}
