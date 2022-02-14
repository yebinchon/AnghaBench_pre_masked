
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vm_page_t ;
typedef int vm_offset_t ;
struct timeval {int member_0; int member_1; } ;
struct pv_chunk {int* pc_map; int * pc_pventry; TYPE_1__* pc_pmap; } ;
typedef int * pv_entry_t ;
typedef TYPE_1__* pmap_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int pm_pvchunk; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 struct pv_chunk* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct pv_chunk*,int ) ;
 int FUNC_4 (int *,struct pv_chunk*,int ) ;
 int FUNC_5 (int *,struct pv_chunk*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (scalar_t__*) ;
 int * FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int **,int) ;
 int FUNC_10 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_11 (struct timeval*,struct timeval const*) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (int *,int ,int) ;

__attribute__((used)) static pv_entry_t
FUNC_14(pmap_t VAR_20, boolean_t VAR_21)
{
 static const struct timeval VAR_22 = { 60, 0 };
 static struct timeval VAR_23;
 int VAR_24, VAR_25;
 pv_entry_t VAR_26;
 struct pv_chunk *VAR_27;
 vm_page_t VAR_28;

 FUNC_12(&VAR_19, VAR_1);
 FUNC_0(VAR_20, VAR_0);
 FUNC_1(VAR_14++);
 VAR_15++;
 if (VAR_15 > VAR_16)
  if (FUNC_11(&VAR_23, &VAR_22))
   FUNC_10("Approaching the limit on PV entries, consider "
       "increasing either the vm.pmap.shpgperproc or the "
       "vm.pmap.pv_entries tunable.\n");
retry:
 VAR_27 = FUNC_2(&VAR_20->pm_pvchunk);
 if (VAR_27 != ((void*)0)) {
  for (VAR_25 = 0; VAR_25 < VAR_5; VAR_25++) {
   if (VAR_27->pc_map[VAR_25]) {
    VAR_24 = FUNC_6(VAR_27->pc_map[VAR_25]);
    break;
   }
  }
  if (VAR_25 < VAR_5) {
   VAR_26 = &VAR_27->pc_pventry[VAR_25 * 32 + VAR_24];
   VAR_27->pc_map[VAR_25] &= ~(1ul << VAR_24);

   for (VAR_25 = 0; VAR_25 < VAR_5; VAR_25++)
    if (VAR_27->pc_map[VAR_25] != 0) {
     FUNC_1(VAR_17--);
     return (VAR_26);
    }
   FUNC_5(&VAR_20->pm_pvchunk, VAR_27, VAR_11);
   FUNC_4(&VAR_20->pm_pvchunk, VAR_27, VAR_11);
   FUNC_1(VAR_17--);
   return (VAR_26);
  }
 }





 if (VAR_18 == 0 || (VAR_28 = FUNC_13(((void*)0), 0, VAR_3 |
     VAR_2 | VAR_4)) == ((void*)0)) {
  if (VAR_21) {
   VAR_15--;
   FUNC_1(VAR_9++);
   return (((void*)0));
  }
  VAR_28 = FUNC_8(VAR_20);
  if (VAR_28 == ((void*)0))
   goto retry;
 }
 FUNC_1(VAR_8++);
 FUNC_1(VAR_7++);
 VAR_27 = (struct pv_chunk *)FUNC_7(&VAR_18);
 FUNC_9((vm_offset_t)VAR_27, &VAR_28, 1);
 VAR_27->pc_pmap = VAR_20;
 VAR_27->pc_map[0] = VAR_10[0] & ~1ul;
 for (VAR_25 = 1; VAR_25 < VAR_5; VAR_25++)
  VAR_27->pc_map[VAR_25] = VAR_10[VAR_25];
 FUNC_4(&VAR_13, VAR_27, VAR_12);
 VAR_26 = &VAR_27->pc_pventry[0];
 FUNC_3(&VAR_20->pm_pvchunk, VAR_27, VAR_11);
 FUNC_1(VAR_17 += VAR_6 - 1);
 return (VAR_26);
}
