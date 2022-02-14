
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_ht_map {int capacity; int deletions; int n_entries; } ;
struct ck_ht_entry {scalar_t__ key; int key_length; int hash; scalar_t__ value; } ;
struct ck_ht {int mode; struct ck_ht_map* map; } ;
typedef int ck_ht_hash_t ;
typedef struct ck_ht_entry ck_ht_entry_t ;
typedef int CK_HT_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;
 void* FUNC_1 (struct ck_ht_entry*) ;
 int FUNC_2 (struct ck_ht_entry*) ;
 int FUNC_3 (struct ck_ht*,int) ;
 int FUNC_4 (struct ck_ht_map*,int ,int ) ;
 struct ck_ht_entry* FUNC_5 (struct ck_ht_map*,int ,struct ck_ht_entry*,struct ck_ht_entry**,void*,int,int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__*,void*) ;

bool
FUNC_8(struct ck_ht *VAR_3,
    ck_ht_hash_t VAR_4,
    ck_ht_entry_t *VAR_5)
{
 struct ck_ht_entry VAR_6, *VAR_7, *VAR_8;
 struct ck_ht_map *VAR_9;
 CK_HT_TYPE VAR_10, VAR_11;
 bool VAR_12 = 0;

 for (;;) {
  VAR_9 = VAR_3->map;

  if (VAR_3->mode & VAR_2) {
   VAR_7 = FUNC_5(VAR_9, VAR_4, &VAR_6, &VAR_8,
       FUNC_1(VAR_5),
       FUNC_2(VAR_5),
       &VAR_10, &VAR_11);
  } else {
   VAR_7 = FUNC_5(VAR_9, VAR_4, &VAR_6, &VAR_8,
       (void *)VAR_5->key,
       sizeof(VAR_5->key),
       &VAR_10, &VAR_11);
  }

  if (VAR_8 != ((void*)0)) {
   VAR_10 = VAR_11;
   break;
  }

  if (VAR_7 != ((void*)0))
   break;

  if (FUNC_3(VAR_3, VAR_9->capacity << 1) == 0)
   return 0;
 }

 if (VAR_7 == ((void*)0)) {
  VAR_7 = VAR_8;
  VAR_12 = 1;
 }

 if (VAR_7->key != VAR_0 &&
     VAR_8 != ((void*)0) && VAR_7 != VAR_8) {







  VAR_10 = VAR_11;


  FUNC_0(&VAR_8->key_length, VAR_5->key_length);
  FUNC_0(&VAR_8->hash, VAR_5->hash);







  if (VAR_8->value == VAR_1) {
   FUNC_0(&VAR_9->deletions, VAR_9->deletions + 1);
   FUNC_6();
  }

  FUNC_7(&VAR_8->value, (void *)VAR_5->value);
  FUNC_6();
  FUNC_7(&VAR_8->key, (void *)VAR_5->key);
  FUNC_6();





  FUNC_0(&VAR_9->deletions, VAR_9->deletions + 1);
  FUNC_6();

  FUNC_7(&VAR_7->key, (void *)VAR_1);
  FUNC_6();
 } else {






  bool VAR_13 = VAR_7->key != VAR_0 &&
      VAR_7->key != VAR_1;

  if (VAR_8 != ((void*)0)) {
   if (VAR_8->key == VAR_1) {
    FUNC_0(&VAR_9->deletions, VAR_9->deletions + 1);
    FUNC_6();
   }

   VAR_7 = VAR_8;
   VAR_10 = VAR_11;
  }






  FUNC_0(&VAR_7->key_length, VAR_5->key_length);
  FUNC_0(&VAR_7->hash, VAR_5->hash);
  FUNC_7(&VAR_7->value, (void *)VAR_5->value);
  FUNC_6();
  FUNC_7(&VAR_7->key, (void *)VAR_5->key);






  if (VAR_13 == 0)
   FUNC_0(&VAR_9->n_entries, VAR_9->n_entries + 1);
 }

 FUNC_4(VAR_9, VAR_4, VAR_10);


 if (VAR_9->n_entries * 2 > VAR_9->capacity)
  FUNC_3(VAR_3, VAR_9->capacity << 1);

 if (VAR_12 == 1) {
  VAR_5->key = VAR_0;
 } else {
  *VAR_5 = VAR_6;
 }

 return 1;
}
