
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_ht_map {size_t capacity; struct ck_ht_entry* entries; } ;
struct ck_ht_iterator {size_t offset; } ;
struct ck_ht_entry {uintptr_t key; } ;
struct ck_ht {struct ck_ht_map* map; } ;


 uintptr_t VAR_0 ;
 uintptr_t VAR_1 ;

bool
FUNC_0(struct ck_ht *VAR_2,
    struct ck_ht_iterator *VAR_3,
    struct ck_ht_entry **VAR_4)
{
 struct ck_ht_map *VAR_5 = VAR_2->map;
 uintptr_t VAR_6;

 if (VAR_3->offset >= VAR_5->capacity)
  return 0;

 do {
  VAR_6 = VAR_5->entries[VAR_3->offset].key;
  if (VAR_6 != VAR_0 && VAR_6 != VAR_1)
   break;
 } while (++VAR_3->offset < VAR_5->capacity);

 if (VAR_3->offset >= VAR_5->capacity)
  return 0;

 *VAR_4 = VAR_5->entries + VAR_3->offset++;
 return 1;
}
