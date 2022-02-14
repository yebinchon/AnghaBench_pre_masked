
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct pt_section {int dummy; } ;
struct pt_iscache_lru_entry {int dummy; } ;
struct pt_iscache_entry {struct pt_section* section; } ;
struct pt_image_section_cache {size_t size; unsigned long long used; struct pt_iscache_lru_entry* lru; scalar_t__ capacity; struct pt_iscache_entry* entries; } ;


 int FUNC_0 (struct pt_iscache_entry*) ;
 int FUNC_1 (struct pt_image_section_cache*) ;
 int FUNC_2 (struct pt_iscache_lru_entry*) ;
 int FUNC_3 (struct pt_image_section_cache*) ;
 int FUNC_4 (struct pt_section*,struct pt_image_section_cache*) ;
 int FUNC_5 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_6(struct pt_image_section_cache *VAR_1)
{
 struct pt_iscache_lru_entry *VAR_2;
 struct pt_iscache_entry *VAR_3;
 uint16_t VAR_4, VAR_5;
 int VAR_6;

 if (!VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3 = VAR_1->entries;
 VAR_5 = VAR_1->size;
 VAR_2 = VAR_1->lru;

 VAR_1->entries = ((void*)0);
 VAR_1->capacity = 0;
 VAR_1->size = 0;
 VAR_1->lru = ((void*)0);
 VAR_1->used = 0ull;

 VAR_6 = FUNC_3(VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  struct pt_section *VAR_7;

  VAR_7 = VAR_3[VAR_4].section;




  VAR_6 = FUNC_4(VAR_7, VAR_1);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_5(VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
 }

 FUNC_0(VAR_3);
 return 0;
}
