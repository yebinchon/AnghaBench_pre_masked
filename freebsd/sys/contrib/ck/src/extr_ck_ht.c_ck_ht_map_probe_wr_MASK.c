
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct ck_ht_map {size_t mask; size_t probe_limit; int mode; scalar_t__ entries; } ;
struct ck_ht_entry {uintptr_t key; int value; int hash; } ;
struct TYPE_5__ {size_t value; } ;
typedef TYPE_1__ ck_ht_hash_t ;
typedef struct ck_ht_entry ck_ht_entry_t ;
typedef scalar_t__ CK_HT_TYPE ;


 size_t VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (struct ck_ht_entry*) ;
 int FUNC_1 (struct ck_ht_entry*) ;
 scalar_t__ FUNC_2 (struct ck_ht_map*,TYPE_1__) ;
 size_t FUNC_3 (struct ck_ht_map*,size_t,TYPE_1__,scalar_t__) ;
 scalar_t__ FUNC_4 (void*,void const*,int ) ;

__attribute__((used)) static struct ck_ht_entry *
FUNC_5(struct ck_ht_map *VAR_8,
    ck_ht_hash_t VAR_9,
    ck_ht_entry_t *VAR_10,
    ck_ht_entry_t **VAR_11,
    const void *VAR_12,
    uint16_t VAR_13,
    CK_HT_TYPE *VAR_14,
    CK_HT_TYPE *VAR_15)
{
 struct ck_ht_entry *VAR_16, *VAR_17;
 struct ck_ht_entry *VAR_18 = ((void*)0);
 size_t VAR_19, VAR_20, VAR_21;
 CK_HT_TYPE VAR_22 = 0;
 CK_HT_TYPE VAR_23;

 if (VAR_14 == ((void*)0)) {
  VAR_23 = FUNC_2(VAR_8, VAR_9);
 } else {
  VAR_23 = VAR_5;
 }

 VAR_19 = VAR_9.value & VAR_8->mask;
 for (VAR_20 = 0; VAR_20 < VAR_8->probe_limit; VAR_20++) {





  VAR_16 = (void *)((uintptr_t)(VAR_8->entries + VAR_19) &
        ~(VAR_6 - 1));

  for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
   uint16_t VAR_24;

   if (VAR_22++ > VAR_23)
    break;

   VAR_17 = VAR_16 + ((VAR_21 + VAR_19) & (VAR_0 - 1));






   if (VAR_17->key == VAR_3) {
    if (VAR_18 == ((void*)0)) {
     VAR_18 = VAR_17;
     *VAR_15 = VAR_22;
    }

    continue;
   }

   if (VAR_17->key == VAR_1)
    goto leave;

   if (VAR_17->key == (uintptr_t)VAR_12)
    goto leave;

   if (VAR_8->mode & VAR_4) {
    void *VAR_25;





    VAR_24 = FUNC_1(VAR_17);
    if (VAR_24 != VAR_13)
     continue;





    if (VAR_17->hash != VAR_9.value)
     continue;


    VAR_25 = FUNC_0(VAR_17);
    if (FUNC_4(VAR_25, VAR_12, VAR_13) == 0)
     goto leave;
   }
  }

  VAR_19 = FUNC_3(VAR_8, VAR_19, VAR_9, VAR_22);
 }

 VAR_17 = ((void*)0);

leave:
 if (VAR_14 != ((void*)0)) {
  *VAR_14 = VAR_22;
 } else if (VAR_18 == ((void*)0)) {
  *VAR_15 = VAR_22;
 }

 *VAR_11 = VAR_18;

 if (VAR_17 != ((void*)0)) {
  *VAR_10 = *VAR_17;
 }

 return VAR_17;
}
