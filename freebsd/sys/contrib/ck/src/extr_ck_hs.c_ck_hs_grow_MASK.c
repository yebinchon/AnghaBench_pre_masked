
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {unsigned long capacity; void** entries; unsigned long mask; unsigned long probe_limit; int n_entries; } ;
struct ck_hs {int mode; unsigned long (* hf ) (void const*,int ) ;int m; struct ck_hs_map* map; int seed; } ;


 scalar_t__ FUNC_0 (int) ;
 void const* VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 void const* VAR_3 ;
 void* FUNC_1 (void const*) ;
 int VAR_4 ;
 int FUNC_2 (struct ck_hs_map*,unsigned long,unsigned long) ;
 struct ck_hs_map* FUNC_3 (struct ck_hs*,unsigned long) ;
 int FUNC_4 (int ,struct ck_hs_map*,int) ;
 unsigned long FUNC_5 (struct ck_hs_map*,unsigned long,unsigned long,int ,unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 (struct ck_hs_map**,struct ck_hs_map*) ;
 unsigned long FUNC_8 (void const*,int ) ;

bool
FUNC_9(struct ck_hs *VAR_5,
    unsigned long VAR_6)
{
 struct ck_hs_map *VAR_7, *VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 const void *VAR_14, **VAR_15;

restart:
 VAR_7 = VAR_5->map;
 if (VAR_7->capacity > VAR_6)
  return 0;

 VAR_8 = FUNC_3(VAR_5, VAR_6);
 if (VAR_8 == ((void*)0))
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_7->capacity; VAR_9++) {
  unsigned long VAR_16;

  VAR_14 = VAR_7->entries[VAR_9];
  if (VAR_14 == VAR_0 || VAR_14 == VAR_3)
   continue;






  VAR_16 = VAR_5->hf(VAR_14, VAR_5->seed);
  VAR_12 = VAR_16 & VAR_8->mask;
  VAR_10 = VAR_13 = 0;

  for (;;) {
   VAR_15 = (const void **)((uintptr_t)&VAR_8->entries[VAR_12] & ~(VAR_4 - 1));

   for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
    const void **VAR_17 = VAR_15 + ((VAR_11 + VAR_12) & (VAR_2 - 1));

    if (VAR_13++ == VAR_8->probe_limit)
     break;

    if (FUNC_0(*VAR_17 == VAR_0)) {
     *VAR_17 = VAR_7->entries[VAR_9];
     VAR_8->n_entries++;

     FUNC_2(VAR_8, VAR_16, VAR_13);
     break;
    }
   }

   if (VAR_11 < VAR_2)
    break;

   VAR_12 = FUNC_5(VAR_8, VAR_12, VAR_16, VAR_10++, VAR_13);
  }

  if (VAR_13 > VAR_8->probe_limit) {



   FUNC_4(VAR_5->m, VAR_8, 0);
   VAR_6 <<= 1;
   goto restart;
  }
 }

 FUNC_6();
 FUNC_7(&VAR_5->map, VAR_8);
 FUNC_4(VAR_5->m, VAR_7, 1);
 return 1;
}
