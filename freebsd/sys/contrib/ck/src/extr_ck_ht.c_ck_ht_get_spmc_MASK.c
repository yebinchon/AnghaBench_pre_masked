
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_ht_map {int deletions; } ;
struct ck_ht_entry {scalar_t__ key; } ;
struct ck_ht {int mode; int map; } ;
typedef int ck_ht_hash_t ;
typedef struct ck_ht_entry ck_ht_entry_t ;
typedef scalar_t__ CK_HT_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (struct ck_ht_entry*) ;
 int FUNC_2 (struct ck_ht_entry*) ;
 struct ck_ht_entry* FUNC_3 (struct ck_ht_map*,int ,struct ck_ht_entry*,void*,int) ;
 struct ck_ht_map* FUNC_4 (int *) ;

bool
FUNC_5(struct ck_ht *VAR_2,
    ck_ht_hash_t VAR_3,
    ck_ht_entry_t *VAR_4)
{
 struct ck_ht_entry *VAR_5, VAR_6;
 struct ck_ht_map *VAR_7;
 CK_HT_TYPE VAR_8, VAR_9;

restart:
 VAR_7 = FUNC_4(&VAR_2->map);





 VAR_8 = FUNC_0(&VAR_7->deletions);

 if (VAR_2->mode & VAR_1) {
  VAR_5 = FUNC_3(VAR_7, VAR_3, &VAR_6,
      FUNC_1(VAR_4), FUNC_2(VAR_4));
 } else {
  VAR_5 = FUNC_3(VAR_7, VAR_3, &VAR_6,
      (void *)VAR_4->key, sizeof(VAR_4->key));
 }

 VAR_9 = FUNC_0(&VAR_7->deletions);
 if (VAR_8 != VAR_9) {





  goto restart;
 }

 if (VAR_5 == ((void*)0) || VAR_6.key == VAR_0)
  return 0;

 *VAR_4 = VAR_6;
 return 1;
}
