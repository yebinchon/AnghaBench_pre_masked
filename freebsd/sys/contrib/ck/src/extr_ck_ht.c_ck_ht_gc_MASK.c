
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ck_ht_map {scalar_t__ n_entries; unsigned long probe_maximum; unsigned long* probe_bound; int capacity; unsigned long mask; unsigned long deletions; struct ck_ht_entry* entries; } ;
struct ck_ht_hash {unsigned long value; } ;
struct ck_ht_entry {scalar_t__ key; unsigned long hash; unsigned long key_length; scalar_t__ value; } ;
struct ck_ht {int mode; TYPE_1__* m; int seed; int (* h ) (struct ck_ht_hash*,scalar_t__*,int,int ) ;struct ck_ht_map* map; } ;
struct TYPE_2__ {unsigned long* (* malloc ) (unsigned long) ;int (* free ) (unsigned long*,unsigned long,int) ;} ;
typedef unsigned long CK_HT_WORD ;
typedef unsigned long CK_HT_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*,unsigned long) ;
 int FUNC_1 (unsigned long*,unsigned long) ;
 unsigned long VAR_3 ;
 void* FUNC_2 (struct ck_ht_entry*) ;
 int FUNC_3 (struct ck_ht_entry*) ;
 struct ck_ht_entry* FUNC_4 (struct ck_ht_map*,struct ck_ht_hash,struct ck_ht_entry*,struct ck_ht_entry**,void*,int,int *,unsigned long*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__*,void*) ;
 int FUNC_7 (unsigned long*,int ,unsigned long) ;
 unsigned long* FUNC_8 (unsigned long) ;
 int FUNC_9 (struct ck_ht_hash*,void*,int,int ) ;
 int FUNC_10 (struct ck_ht_hash*,scalar_t__*,int,int ) ;
 int FUNC_11 (unsigned long*,unsigned long,int) ;

bool
FUNC_12(struct ck_ht *VAR_4, unsigned long VAR_5, unsigned long VAR_6)
{
 CK_HT_WORD *VAR_7 = ((void*)0);
 struct ck_ht_map *VAR_8 = VAR_4->map;
 CK_HT_TYPE VAR_9, VAR_10;
 CK_HT_TYPE VAR_11 = 0;

 if (VAR_8->n_entries == 0) {
  FUNC_1(&VAR_8->probe_maximum, 0);
  if (VAR_8->probe_bound != ((void*)0))
   FUNC_7(VAR_8->probe_bound, 0, sizeof(CK_HT_WORD) * VAR_8->capacity);

  return 1;
 }

 if (VAR_5 == 0) {
  VAR_9 = 0;

  if (VAR_8->probe_bound != ((void*)0)) {
   VAR_11 = sizeof(CK_HT_WORD) * VAR_8->capacity;
   VAR_7 = VAR_4->m->malloc(VAR_11);
   if (VAR_7 == ((void*)0))
    return 0;

   FUNC_7(VAR_7, 0, VAR_11);
  }
 } else {
  VAR_9 = VAR_8->probe_maximum;
 }

 for (VAR_10 = 0; VAR_10 < VAR_8->capacity; VAR_10++) {
  struct ck_ht_entry *VAR_12, *VAR_13, VAR_14;
  struct ck_ht_hash VAR_15;
  CK_HT_TYPE VAR_16;
  CK_HT_TYPE VAR_17;

  VAR_12 = &VAR_8->entries[(VAR_10 + VAR_6) & VAR_8->mask];
  if (VAR_12->key == VAR_0 ||
      VAR_12->key == VAR_1) {
   continue;
  }

  if (VAR_4->mode & VAR_2) {

   VAR_15.value = VAR_12->hash;




   VAR_12 = FUNC_4(VAR_8, VAR_15, &VAR_14, &VAR_13,
       FUNC_2(VAR_12),
       FUNC_3(VAR_12),
       ((void*)0), &VAR_16);
  } else {

   VAR_15.value = VAR_12->hash;



   VAR_12 = FUNC_4(VAR_8, VAR_15, &VAR_14, &VAR_13,
       (void *)VAR_12->key,
       sizeof(VAR_12->key),
       ((void*)0), &VAR_16);
  }

  VAR_17 = VAR_15.value & VAR_8->mask;

  if (VAR_13 != ((void*)0)) {
   FUNC_1(&VAR_8->deletions, VAR_8->deletions + 1);
   FUNC_5();

   FUNC_1(&VAR_13->key_length, VAR_12->key_length);
   FUNC_1(&VAR_13->hash, VAR_12->hash);

   FUNC_6(&VAR_13->value, (void *)VAR_12->value);
   FUNC_5();
   FUNC_6(&VAR_13->key, (void *)VAR_12->key);
   FUNC_5();
   FUNC_1(&VAR_8->deletions, VAR_8->deletions + 1);
   FUNC_5();
   FUNC_6(&VAR_12->key, (void *)VAR_1);
   FUNC_5();
  }

  if (VAR_5 == 0) {
   if (VAR_16 > VAR_9)
    VAR_9 = VAR_16;

   if (VAR_16 >= VAR_3)
    VAR_16 = VAR_3;

   if (VAR_7 != ((void*)0) && VAR_16 > VAR_7[VAR_17])
    VAR_7[VAR_17] = VAR_16;
  } else if (--VAR_5 == 0)
   break;
 }

 if (VAR_9 != VAR_8->probe_maximum)
  FUNC_1(&VAR_8->probe_maximum, VAR_9);

 if (VAR_7 != ((void*)0)) {
  for (VAR_10 = 0; VAR_10 < VAR_8->capacity; VAR_10++)
   FUNC_0(&VAR_8->probe_bound[VAR_10], VAR_7[VAR_10]);

  VAR_4->m->free(VAR_7, VAR_11, 0);
 }

 return 1;
}
