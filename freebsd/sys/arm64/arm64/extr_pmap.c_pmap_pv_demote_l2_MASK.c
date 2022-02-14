
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct rwlock {int dummy; } ;
struct pv_chunk {int* pc_map; scalar_t__ pv_va; struct pv_chunk* pc_pventry; } ;
struct md_page {int dummy; } ;
typedef struct pv_chunk* pv_entry_t ;
typedef TYPE_3__* pmap_t ;
struct TYPE_10__ {int pm_pvchunk; } ;
struct TYPE_8__ {int pv_gen; int pv_list; } ;
struct TYPE_9__ {int oflags; TYPE_1__ md; } ;


 int FUNC_0 (struct rwlock**,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 struct pv_chunk* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct pv_chunk*,int ) ;
 int FUNC_7 (int *,struct pv_chunk*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int) ;
 struct md_page* FUNC_11 (scalar_t__) ;
 int VAR_7 ;
 struct pv_chunk* FUNC_12 (struct md_page*,TYPE_3__*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_13(pmap_t VAR_12, vm_offset_t VAR_13, vm_paddr_t VAR_14,
    struct rwlock **VAR_15)
{
 struct md_page *VAR_16;
 struct pv_chunk *VAR_17;
 pv_entry_t VAR_18;
 vm_offset_t VAR_19;
 vm_page_t VAR_20;
 int VAR_21, VAR_22;

 FUNC_3(VAR_12, VAR_3);
 FUNC_1((VAR_13 & VAR_0) == 0,
     ("pmap_pv_demote_l2: va is not 2mpage aligned"));
 FUNC_1((VAR_14 & VAR_0) == 0,
     ("pmap_pv_demote_l2: pa is not 2mpage aligned"));
 FUNC_0(VAR_15, VAR_14);






 VAR_16 = FUNC_11(VAR_14);
 VAR_18 = FUNC_12(VAR_16, VAR_12, VAR_13);
 FUNC_1(VAR_18 != ((void*)0), ("pmap_pv_demote_l2: pv not found"));
 VAR_20 = FUNC_2(VAR_14);
 FUNC_6(&VAR_20->md.pv_list, VAR_18, VAR_11);
 VAR_20->md.pv_gen++;

 FUNC_4(FUNC_8(&VAR_8, VAR_2 - 1));
 VAR_19 = VAR_13 + VAR_1 - VAR_4;
 for (;;) {
  VAR_17 = FUNC_5(&VAR_12->pm_pvchunk);
  FUNC_1(VAR_17->pc_map[0] != 0 || VAR_17->pc_map[1] != 0 ||
      VAR_17->pc_map[2] != 0, ("pmap_pv_demote_l2: missing spare"));
  for (VAR_22 = 0; VAR_22 < VAR_6; VAR_22++) {
   while (VAR_17->pc_map[VAR_22]) {
    VAR_21 = FUNC_10(VAR_17->pc_map[VAR_22]) - 1;
    VAR_17->pc_map[VAR_22] &= ~(1ul << VAR_21);
    VAR_18 = &VAR_17->pc_pventry[VAR_22 * 64 + VAR_21];
    VAR_13 += VAR_4;
    VAR_18->pv_va = VAR_13;
    VAR_20++;
    FUNC_1((VAR_20->oflags & VAR_5) == 0,
       ("pmap_pv_demote_l2: page %p is not managed", VAR_20));
    FUNC_6(&VAR_20->md.pv_list, VAR_18, VAR_11);
    VAR_20->md.pv_gen++;
    if (VAR_13 == VAR_19)
     goto out;
   }
  }
  FUNC_7(&VAR_12->pm_pvchunk, VAR_17, VAR_7);
  FUNC_6(&VAR_12->pm_pvchunk, VAR_17, VAR_7);
 }
out:
 if (VAR_17->pc_map[0] == 0 && VAR_17->pc_map[1] == 0 && VAR_17->pc_map[2] == 0) {
  FUNC_7(&VAR_12->pm_pvchunk, VAR_17, VAR_7);
  FUNC_6(&VAR_12->pm_pvchunk, VAR_17, VAR_7);
 }
 FUNC_4(FUNC_8(&VAR_9, VAR_2 - 1));
 FUNC_4(FUNC_9(&VAR_10, VAR_2 - 1));
}
