
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct ck_ht_map {size_t mask; size_t probe_limit; int mode; int deletions; scalar_t__ entries; } ;
struct ck_ht_entry {int value; int hash; int key_length; int key; } ;
struct TYPE_9__ {size_t value; } ;
typedef TYPE_1__ ck_ht_hash_t ;
struct TYPE_10__ {uintptr_t key; uintptr_t value; int hash; void* key_length; } ;
typedef TYPE_2__ ck_ht_entry_t ;
typedef scalar_t__ CK_HT_TYPE ;


 size_t VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct ck_ht_map*,TYPE_1__) ;
 size_t FUNC_4 (struct ck_ht_map*,size_t,TYPE_1__,scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (void*,void const*,int ) ;

__attribute__((used)) static struct ck_ht_entry *
FUNC_8(struct ck_ht_map *VAR_7,
    ck_ht_hash_t VAR_8,
    ck_ht_entry_t *VAR_9,
    const void *VAR_10,
    uint16_t VAR_11)
{
 struct ck_ht_entry *VAR_12, *VAR_13;
 size_t VAR_14, VAR_15, VAR_16;
 CK_HT_TYPE VAR_17 = 0;
 CK_HT_TYPE VAR_18;


 CK_HT_TYPE VAR_19 = 0;
 CK_HT_TYPE VAR_20 = 0;
retry:


 VAR_18 = FUNC_3(VAR_7, VAR_8);
 VAR_14 = VAR_8.value & VAR_7->mask;

 for (VAR_15 = 0; VAR_15 < VAR_7->probe_limit; VAR_15++) {





  VAR_12 = (void *)((uintptr_t)(VAR_7->entries + VAR_14) &
        ~(VAR_5 - 1));

  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
   uint16_t VAR_21;

   if (VAR_17++ > VAR_18)
    return ((void*)0);

   VAR_13 = VAR_12 + ((VAR_16 + VAR_14) & (VAR_0 - 1));






   VAR_19 = FUNC_0(&VAR_7->deletions);
   VAR_9->key = (uintptr_t)FUNC_6(&VAR_13->key);
   FUNC_5();
   VAR_9->key_length = FUNC_0(&VAR_13->key_length);
   VAR_9->hash = FUNC_0(&VAR_13->hash);
   VAR_9->value = (uintptr_t)FUNC_6(&VAR_13->value);







   if (VAR_9->key == VAR_3)
    continue;

   if (VAR_9->key == VAR_1)
    goto leave;

   if (VAR_9->key == (uintptr_t)VAR_10)
    goto leave;

   if (VAR_7->mode & VAR_4) {
    void *VAR_22;





    VAR_21 = FUNC_2(VAR_9);
    if (VAR_21 != VAR_11)
     continue;




    if (VAR_9->hash != VAR_8.value)
     continue;

    VAR_20 = FUNC_0(&VAR_7->deletions);





    if (VAR_19 != VAR_20)
     goto retry;


    VAR_22 = FUNC_1(VAR_9);
    if (FUNC_7(VAR_22, VAR_10, VAR_11) == 0)
     goto leave;
   }
  }

  VAR_14 = FUNC_4(VAR_7, VAR_14, VAR_8, VAR_17);
 }

 return ((void*)0);

leave:
 return VAR_13;
}
