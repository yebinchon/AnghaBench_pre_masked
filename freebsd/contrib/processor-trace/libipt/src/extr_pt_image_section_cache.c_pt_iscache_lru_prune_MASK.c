
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct pt_iscache_lru_entry {scalar_t__ size; struct pt_iscache_lru_entry* next; } ;
struct pt_image_section_cache {unsigned long long limit; scalar_t__ used; struct pt_iscache_lru_entry* lru; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pt_image_section_cache *VAR_1,
    struct pt_iscache_lru_entry **VAR_2)
{
 struct pt_iscache_lru_entry *VAR_3, **VAR_4;
 uint64_t VAR_5, VAR_6;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_5 = VAR_1->limit;
 VAR_6 = 0ull;

 VAR_4 = &VAR_1->lru;
 for (VAR_3 = *VAR_4; VAR_3; VAR_4 = &VAR_3->next, VAR_3 = *VAR_4) {

  VAR_6 += VAR_3->size;
  if (VAR_6 <= VAR_5)
   continue;


  VAR_1->used = VAR_6 - VAR_3->size;
  *VAR_4 = ((void*)0);
  *VAR_2 = VAR_3;

  return 0;
 }


 return -VAR_0;
}
