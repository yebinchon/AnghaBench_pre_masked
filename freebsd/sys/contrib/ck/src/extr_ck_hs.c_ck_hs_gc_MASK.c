
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ck_hs_map {scalar_t__ n_entries; unsigned int probe_maximum; unsigned long* probe_bound; int capacity; void** entries; unsigned long mask; } ;
struct ck_hs {int mode; unsigned long (* hf ) (void const*,int ) ;TYPE_1__* m; int seed; struct ck_hs_map* map; } ;
struct TYPE_2__ {unsigned long* (* malloc ) (unsigned long) ;int (* free ) (unsigned long*,unsigned long,int) ;} ;
typedef unsigned long CK_HS_WORD ;


 void const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*,unsigned long) ;
 void const* VAR_3 ;
 void* FUNC_1 (void const*) ;
 unsigned long VAR_4 ;
 int FUNC_2 (struct ck_hs_map*,unsigned long) ;
 void** FUNC_3 (struct ck_hs*,struct ck_hs_map*,unsigned long*,void const***,unsigned long,void const*,void const**,int ,int ) ;
 int FUNC_4 (struct ck_hs_map*,unsigned long) ;
 void* FUNC_5 (int,void const*,unsigned long) ;
 int FUNC_6 (void const**,void const*) ;
 int FUNC_7 (unsigned int*,unsigned int) ;
 int FUNC_8 (unsigned long*,int ,unsigned long) ;
 unsigned long* FUNC_9 (unsigned long) ;
 unsigned long FUNC_10 (void const*,int ) ;
 int FUNC_11 (unsigned long*,unsigned long,int) ;

bool
FUNC_12(struct ck_hs *VAR_5, unsigned long VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8 = 0;
 unsigned long VAR_9;
 struct ck_hs_map *VAR_10 = VAR_5->map;
 unsigned int VAR_11;
 CK_HS_WORD *VAR_12 = ((void*)0);

 if (VAR_10->n_entries == 0) {
  FUNC_7(&VAR_10->probe_maximum, 0);
  if (VAR_10->probe_bound != ((void*)0))
   FUNC_8(VAR_10->probe_bound, 0, sizeof(CK_HS_WORD) * VAR_10->capacity);

  return 1;
 }

 if (VAR_6 == 0) {
  VAR_11 = 0;

  if (VAR_10->probe_bound != ((void*)0)) {
   VAR_8 = sizeof(CK_HS_WORD) * VAR_10->capacity;
   VAR_12 = VAR_5->m->malloc(VAR_8);
   if (VAR_12 == ((void*)0))
    return 0;

   FUNC_8(VAR_12, 0, VAR_8);
  }
 } else {
  VAR_11 = VAR_10->probe_maximum;
 }

 for (VAR_9 = 0; VAR_9 < VAR_10->capacity; VAR_9++) {
  const void **VAR_13, *VAR_14, **VAR_15, *VAR_16;
  unsigned long VAR_17, VAR_18, VAR_19;

  VAR_16 = VAR_10->entries[(VAR_9 + VAR_7) & VAR_10->mask];
  if (VAR_16 == VAR_0 || VAR_16 == VAR_3)
   continue;






  VAR_19 = VAR_5->hf(VAR_16, VAR_5->seed);
  VAR_18 = VAR_19 & VAR_10->mask;

  VAR_15 = FUNC_3(VAR_5, VAR_10, &VAR_17, &VAR_13, VAR_19, VAR_16, &VAR_14,
      FUNC_2(VAR_10, VAR_19), VAR_2);

  if (VAR_13 != ((void*)0)) {
   const void *VAR_20 = FUNC_5(VAR_5->mode, VAR_16, VAR_19);

   FUNC_6(VAR_13, VAR_20);
   FUNC_4(VAR_10, VAR_19);
   FUNC_6(VAR_15, VAR_3);
  }

  if (VAR_6 == 0) {
   if (VAR_17 > VAR_11)
    VAR_11 = VAR_17;

   if (VAR_17 > VAR_4)
    VAR_17 = VAR_4;

   if (VAR_12 != ((void*)0) && VAR_17 > VAR_12[VAR_18])
    VAR_12[VAR_18] = VAR_17;
  } else if (--VAR_6 == 0)
   break;
 }





 if (VAR_11 != VAR_10->probe_maximum)
  FUNC_7(&VAR_10->probe_maximum, VAR_11);

 if (VAR_12 != ((void*)0)) {
  for (VAR_9 = 0; VAR_9 < VAR_10->capacity; VAR_9++)
   FUNC_0(&VAR_10->probe_bound[VAR_9], VAR_12[VAR_9]);

  VAR_5->m->free(VAR_12, VAR_8, 0);
 }

 return 1;
}
