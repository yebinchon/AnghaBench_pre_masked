
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct rwlock {int dummy; } ;
struct pv_chunk {int* pc_map; int * pc_pventry; TYPE_2__* pc_pmap; } ;
typedef int * pv_entry_t ;
typedef TYPE_2__* pmap_t ;
struct TYPE_9__ {int pm_pvchunk; } ;
struct TYPE_8__ {int phys_addr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 struct pv_chunk* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct pv_chunk*,int ) ;
 int FUNC_5 (int *,struct pv_chunk*,int ) ;
 int FUNC_6 (int *,struct pv_chunk*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__* FUNC_14 (TYPE_2__*,struct rwlock**) ;
 TYPE_1__* FUNC_15 (int *,int ,int) ;

__attribute__((used)) static pv_entry_t
FUNC_16(pmap_t VAR_19, struct rwlock **VAR_20)
{
 int VAR_21, VAR_22;
 pv_entry_t VAR_23;
 struct pv_chunk *VAR_24;
 vm_page_t VAR_25;

 FUNC_1(VAR_19, VAR_0);
 FUNC_2(FUNC_8(&VAR_16, 1));
retry:
 VAR_24 = FUNC_3(&VAR_19->pm_pvchunk);
 if (VAR_24 != ((void*)0)) {
  for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
   if (VAR_24->pc_map[VAR_22]) {
    VAR_21 = FUNC_11(VAR_24->pc_map[VAR_22]) - 1;
    break;
   }
  }
  if (VAR_22 < VAR_7) {
   VAR_23 = &VAR_24->pc_pventry[VAR_22 * 64 + VAR_21];
   VAR_24->pc_map[VAR_22] &= ~(1ul << VAR_21);

   if (VAR_24->pc_map[0] == 0 && VAR_24->pc_map[1] == 0 &&
       VAR_24->pc_map[2] == 0) {
    FUNC_6(&VAR_19->pm_pvchunk, VAR_24, VAR_12);
    FUNC_5(&VAR_19->pm_pvchunk, VAR_24,
        VAR_12);
   }
   FUNC_2(FUNC_8(&VAR_17, 1));
   FUNC_2(FUNC_9(&VAR_18, 1));
   return (VAR_23);
  }
 }

 VAR_25 = FUNC_15(((void*)0), 0, VAR_5 | VAR_4 |
     VAR_6);
 if (VAR_25 == ((void*)0)) {
  if (VAR_20 == ((void*)0)) {
   FUNC_2(VAR_11++);
   return (((void*)0));
  }
  VAR_25 = FUNC_14(VAR_19, VAR_20);
  if (VAR_25 == ((void*)0))
   goto retry;
 }
 FUNC_2(FUNC_7(&VAR_10, 1));
 FUNC_2(FUNC_7(&VAR_9, 1));
 FUNC_10(VAR_25->phys_addr);
 VAR_24 = (void *)FUNC_0(VAR_25->phys_addr);
 VAR_24->pc_pmap = VAR_19;
 VAR_24->pc_map[0] = VAR_1 & ~1ul;
 VAR_24->pc_map[1] = VAR_2;
 VAR_24->pc_map[2] = VAR_3;
 FUNC_12(&VAR_15);
 FUNC_5(&VAR_14, VAR_24, VAR_13);
 FUNC_13(&VAR_15);
 VAR_23 = &VAR_24->pc_pventry[0];
 FUNC_4(&VAR_19->pm_pvchunk, VAR_24, VAR_12);
 FUNC_2(FUNC_8(&VAR_17, 1));
 FUNC_2(FUNC_7(&VAR_18, VAR_8 - 1));
 return (VAR_23);
}
