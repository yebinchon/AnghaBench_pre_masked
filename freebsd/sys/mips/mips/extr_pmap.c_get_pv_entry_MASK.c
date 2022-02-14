
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct pv_chunk {int* pc_map; int * pc_pventry; TYPE_2__* pc_pmap; } ;
typedef int * pv_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {int pm_pvchunk; } ;
struct TYPE_9__ {int phys_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 struct pv_chunk* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct pv_chunk*,int ) ;
 int FUNC_5 (int *,struct pv_chunk*,int ) ;
 int FUNC_6 (int *,struct pv_chunk*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* FUNC_10 (TYPE_2__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (int *,int ) ;
 TYPE_1__* FUNC_12 (int ,int) ;

__attribute__((used)) static pv_entry_t
FUNC_13(pmap_t VAR_19, boolean_t VAR_20)
{
 struct pv_chunk *VAR_21;
 pv_entry_t VAR_22;
 vm_page_t VAR_23;
 int VAR_24, VAR_25, VAR_26;

 FUNC_11(&VAR_18, VAR_2);
 FUNC_1(VAR_19, VAR_0);
 FUNC_2(VAR_15++);
 VAR_16++;
retry:
 VAR_21 = FUNC_3(&VAR_19->pm_pvchunk);
 if (VAR_21 != ((void*)0)) {
  for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++) {
   if (VAR_21->pc_map[VAR_25]) {
    VAR_24 = FUNC_9(VAR_21->pc_map[VAR_25]) - 1;
    break;
   }
  }
  if (VAR_25 < VAR_6) {
   VAR_26 = VAR_25 * sizeof(VAR_21->pc_map[VAR_25]) * VAR_1 + VAR_24;
   VAR_22 = &VAR_21->pc_pventry[VAR_26];
   VAR_21->pc_map[VAR_25] &= ~(1ul << VAR_24);

   for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++)
    if (VAR_21->pc_map[VAR_25] != 0) {
     FUNC_2(VAR_17--);
     return (VAR_22);
    }
   FUNC_6(&VAR_19->pm_pvchunk, VAR_21, VAR_12);
   FUNC_5(&VAR_19->pm_pvchunk, VAR_21, VAR_12);
   FUNC_2(VAR_17--);
   return (VAR_22);
  }
 }

 VAR_23 = FUNC_12(VAR_5, VAR_3 |
     VAR_4);
 if (VAR_23 == ((void*)0)) {
  if (VAR_20) {
   VAR_16--;
   FUNC_2(VAR_10++);
   return (((void*)0));
  }
  VAR_23 = FUNC_10(VAR_19);
  if (VAR_23 == ((void*)0))
   goto retry;
 }
 FUNC_2(VAR_9++);
 FUNC_2(VAR_8++);
 FUNC_8(VAR_23->phys_addr);
 VAR_21 = (struct pv_chunk *)FUNC_0(FUNC_7(VAR_23));
 VAR_21->pc_pmap = VAR_19;
 VAR_21->pc_map[0] = VAR_11[0] & ~1ul;
 for (VAR_25 = 1; VAR_25 < VAR_6; VAR_25++)
  VAR_21->pc_map[VAR_25] = VAR_11[VAR_25];
 FUNC_5(&VAR_14, VAR_21, VAR_13);
 VAR_22 = &VAR_21->pc_pventry[0];
 FUNC_4(&VAR_19->pm_pvchunk, VAR_21, VAR_12);
 FUNC_2(VAR_17 += VAR_7 - 1);
 return (VAR_22);
}
