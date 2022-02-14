
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_iscache_lru_entry {int dummy; } ;
struct pt_image_section_cache {unsigned long long used; struct pt_iscache_lru_entry* lru; } ;


 int FUNC_0 (struct pt_image_section_cache*) ;
 int FUNC_1 (struct pt_iscache_lru_entry*) ;
 int FUNC_2 (struct pt_image_section_cache*) ;

__attribute__((used)) static int FUNC_3(struct pt_image_section_cache *VAR_0)
{
 struct pt_iscache_lru_entry *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1 = VAR_0->lru;
 VAR_0->lru = ((void*)0);
 VAR_0->used = 0ull;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_1(VAR_1);
}
