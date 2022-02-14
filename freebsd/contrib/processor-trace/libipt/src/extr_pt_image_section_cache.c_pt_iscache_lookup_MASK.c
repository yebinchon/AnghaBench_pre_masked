
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint16_t ;
struct pt_section {int dummy; } ;
struct pt_iscache_entry {int laddr; struct pt_section* section; } ;
struct pt_image_section_cache {size_t size; struct pt_iscache_entry* entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_image_section_cache*) ;
 int FUNC_1 (struct pt_image_section_cache*) ;
 int FUNC_2 (struct pt_section*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(struct pt_image_section_cache *VAR_3,
        struct pt_section **VAR_4, uint64_t *VAR_5, int VAR_6)
{
 uint16_t VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_3 || !VAR_4 || !VAR_5)
  return -VAR_2;

 if (VAR_6 <= 0)
  return -VAR_1;

 VAR_6 -= 1;
 if (VAR_6 > VAR_0)
  return -VAR_2;

 VAR_7 = (uint16_t) VAR_6;

 VAR_8 = FUNC_0(VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_3->size <= VAR_7)
  VAR_9 = -VAR_1;
 else {
  const struct pt_iscache_entry *VAR_10;

  VAR_10 = &VAR_3->entries[VAR_7];
  *VAR_4 = VAR_10->section;
  *VAR_5 = VAR_10->laddr;

  VAR_9 = FUNC_2(*VAR_4);
 }

 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 return VAR_9;
}
