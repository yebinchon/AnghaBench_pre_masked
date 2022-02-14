
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_ht_map {scalar_t__ n_entries; } ;
struct ck_ht_entry {scalar_t__ key; } ;
struct ck_ht {int mode; struct ck_ht_map* map; } ;
typedef int ck_ht_hash_t ;
typedef struct ck_ht_entry ck_ht_entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;
 void* FUNC_1 (struct ck_ht_entry*) ;
 int FUNC_2 (struct ck_ht_entry*) ;
 struct ck_ht_entry* FUNC_3 (struct ck_ht_map*,int ,struct ck_ht_entry*,void*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__*,void*) ;

bool
FUNC_6(struct ck_ht *VAR_3,
    ck_ht_hash_t VAR_4,
    ck_ht_entry_t *VAR_5)
{
 struct ck_ht_map *VAR_6;
 struct ck_ht_entry *VAR_7, VAR_8;

 VAR_6 = VAR_3->map;

 if (VAR_3->mode & VAR_2) {
  VAR_7 = FUNC_3(VAR_6, VAR_4, &VAR_8,
      FUNC_1(VAR_5),
      FUNC_2(VAR_5));
 } else {
  VAR_7 = FUNC_3(VAR_6, VAR_4, &VAR_8,
      (void *)VAR_5->key,
      sizeof(VAR_5->key));
 }


 if (VAR_7 == ((void*)0) || VAR_8.key == VAR_0)
  return 0;

 *VAR_5 = VAR_8;

 FUNC_5(&VAR_7->key, (void *)VAR_1);
 FUNC_4();
 FUNC_0(&VAR_6->n_entries, VAR_6->n_entries - 1);
 return 1;
}
