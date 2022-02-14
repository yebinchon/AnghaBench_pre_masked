
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_section {int dummy; } ;
struct pt_iscache_lru_entry {struct pt_iscache_lru_entry* next; scalar_t__ size; struct pt_section* section; } ;
struct pt_image_section_cache {scalar_t__ limit; scalar_t__ used; struct pt_iscache_lru_entry* lru; } ;


 struct pt_iscache_lru_entry* FUNC_0 (int) ;
 int FUNC_1 (struct pt_section*) ;
 int FUNC_2 (struct pt_section*,scalar_t__*) ;
 int FUNC_3 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct pt_image_section_cache *VAR_3,
        struct pt_section *VAR_4)
{
 struct pt_iscache_lru_entry *VAR_5;
 uint64_t VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 if (!VAR_3)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_4, &VAR_6);
 if (VAR_10 < 0)
  return VAR_10;




 VAR_9 = VAR_3->limit;
 if (VAR_9 < VAR_6)
  return 0;

 VAR_10 = FUNC_1(VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_5 = FUNC_0(sizeof(*VAR_5));
 if (!VAR_5) {
  (void) FUNC_3(VAR_4);
  return -VAR_1;
 }

 VAR_5->section = VAR_4;
 VAR_5->size = VAR_6;

 VAR_5->next = VAR_3->lru;
 VAR_3->lru = VAR_5;

 VAR_7 = VAR_3->used;
 VAR_8 = VAR_7 + VAR_6;
 if (VAR_8 < VAR_7 || VAR_8 < VAR_6)
  return -VAR_2;

 VAR_3->used = VAR_8;

 return (VAR_9 < VAR_8) ? 1 : 0;
}
