
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ck_ht_map {int capacity; size_t mask; size_t probe_limit; int n_entries; struct ck_ht_entry* entries; } ;
struct ck_ht_hash {size_t value; } ;
struct ck_ht_entry {scalar_t__ key; size_t hash; } ;
struct ck_ht {int mode; int m; struct ck_ht_map* map; int seed; int (* h ) (struct ck_ht_hash*,scalar_t__*,int,int ) ;} ;
typedef int CK_HT_TYPE ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (struct ck_ht_entry*) ;
 int FUNC_2 (struct ck_ht_entry*) ;
 int FUNC_3 (struct ck_ht_map*,struct ck_ht_hash,int) ;
 struct ck_ht_map* FUNC_4 (struct ck_ht*,int) ;
 int FUNC_5 (int ,struct ck_ht_map*,int) ;
 size_t FUNC_6 (struct ck_ht_map*,size_t,struct ck_ht_hash,int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct ck_ht_map**,struct ck_ht_map*) ;
 int FUNC_9 (struct ck_ht_hash*,void*,int ,int ) ;
 int FUNC_10 (struct ck_ht_hash*,scalar_t__*,int,int ) ;

bool
FUNC_11(struct ck_ht *VAR_5, CK_HT_TYPE VAR_6)
{
 struct ck_ht_map *VAR_7, *VAR_8;
 struct ck_ht_entry *VAR_9, *VAR_10;
 struct ck_ht_hash VAR_11;
 size_t VAR_12, VAR_13, VAR_14, VAR_15;
 CK_HT_TYPE VAR_16;

restart:
 VAR_7 = VAR_5->map;

 if (VAR_7->capacity >= VAR_6)
  return 0;

 VAR_8 = FUNC_4(VAR_5, VAR_6);
 if (VAR_8 == ((void*)0))
  return 0;

 for (VAR_12 = 0; VAR_12 < VAR_7->capacity; VAR_12++) {
  VAR_10 = &VAR_7->entries[VAR_12];

  if (VAR_10->key == VAR_1 || VAR_10->key == VAR_2)
   continue;

  if (VAR_5->mode & VAR_3) {
   VAR_11.value = VAR_10->hash;



  } else {

   VAR_11.value = VAR_10->hash;



  }

  VAR_15 = VAR_11.value & VAR_8->mask;
  VAR_16 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_8->probe_limit; VAR_13++) {
   VAR_9 = (void *)((uintptr_t)(VAR_8->entries + VAR_15) & ~(VAR_4 - 1));

   for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
    struct ck_ht_entry *VAR_17 = VAR_9 + ((VAR_14 + VAR_15) & (VAR_0 - 1));

    VAR_16++;
    if (FUNC_0(VAR_17->key == VAR_1)) {
     *VAR_17 = *VAR_10;
     VAR_8->n_entries++;
     FUNC_3(VAR_8, VAR_11, VAR_16);
     break;
    }
   }

   if (VAR_14 < VAR_0)
    break;

   VAR_15 = FUNC_6(VAR_8, VAR_15, VAR_11, VAR_16);
  }

  if (VAR_13 == VAR_8->probe_limit) {




   FUNC_5(VAR_5->m, VAR_8, 0);
   VAR_6 <<= 1;
   goto restart;
  }
 }

 FUNC_7();
 FUNC_8(&VAR_5->map, VAR_8);
 FUNC_5(VAR_5->m, VAR_7, 1);
 return 1;
}
