
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pt_iscache_entry {int dummy; } ;
struct pt_image_section_cache {int capacity; struct pt_iscache_entry* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pt_iscache_entry* FUNC_0 (struct pt_iscache_entry*,int) ;

__attribute__((used)) static int FUNC_1(struct pt_image_section_cache *VAR_2)
{
 struct pt_iscache_entry *VAR_3;
 uint16_t VAR_4, VAR_5;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = VAR_2->capacity;
 VAR_5 = VAR_4 + 8;


 if (VAR_5 < VAR_4)
  return -VAR_1;

 VAR_3 = FUNC_0(VAR_2->entries, VAR_5 * sizeof(*VAR_3));
 if (!VAR_3)
  return -VAR_1;

 VAR_2->capacity = VAR_5;
 VAR_2->entries = VAR_3;
 return 0;
}
