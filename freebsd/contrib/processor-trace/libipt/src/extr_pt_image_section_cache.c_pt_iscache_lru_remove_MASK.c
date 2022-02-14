
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int dummy; } ;
struct pt_iscache_lru_entry {struct pt_iscache_lru_entry* next; struct pt_section const* section; } ;
struct pt_image_section_cache {struct pt_iscache_lru_entry* lru; } ;


 int FUNC_0 (struct pt_iscache_lru_entry*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_image_section_cache *VAR_1,
     const struct pt_section *VAR_2)
{
 struct pt_iscache_lru_entry *VAR_3, **VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_4 = &VAR_1->lru;
 for (VAR_3 = *VAR_4; VAR_3; VAR_4 = &VAR_3->next, VAR_3 = *VAR_4) {

  if (VAR_3->section != VAR_2)
   continue;


  *VAR_4 = VAR_3->next;
  VAR_3->next = ((void*)0);
  break;
 }

 return FUNC_0(VAR_3);
}
