
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_section {int dummy; } ;
struct pt_iscache_lru_entry {scalar_t__ size; struct pt_section* section; } ;
struct pt_image_section_cache {scalar_t__ limit; scalar_t__ used; struct pt_iscache_lru_entry* lru; } ;


 int FUNC_0 (struct pt_image_section_cache*,struct pt_section*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_image_section_cache *VAR_1,
     struct pt_section *VAR_2, uint64_t VAR_3)
{
 struct pt_iscache_lru_entry *VAR_4;
 uint64_t VAR_5, VAR_6;
 int VAR_7;

 if (!VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_1, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4 = VAR_1->lru;
 if (!VAR_4) {
  if (VAR_7)
   return -VAR_0;
  return 0;
 }





 if (VAR_4->section != VAR_2) {
  if (VAR_1->limit < VAR_3)
   return 0;

  return -VAR_0;
 }

 VAR_5 = VAR_4->size;
 VAR_4->size = VAR_3;


 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_1->used;
 VAR_6 -= VAR_5;
 VAR_6 += VAR_3;

 VAR_1->used = VAR_6;

 return (VAR_1->limit < VAR_6) ? 1 : 0;
}
