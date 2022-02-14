
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t uint16_t ;
struct pt_section {int dummy; } ;
struct pt_iscache_entry {scalar_t__ laddr; struct pt_section* section; } ;
struct pt_image_section_cache {size_t size; struct pt_iscache_entry* entries; } ;


 int FUNC_0 (size_t) ;
 char* FUNC_1 (struct pt_section const*) ;
 scalar_t__ FUNC_2 (struct pt_section const*) ;
 scalar_t__ FUNC_3 (struct pt_section const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int FUNC_5(struct pt_image_section_cache *VAR_1,
      const char *VAR_2, uint64_t VAR_3,
      uint64_t VAR_4, uint64_t VAR_5)
{
 uint16_t VAR_6, VAR_7;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_7 = VAR_1->size;
 for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
  const struct pt_iscache_entry *VAR_8;
  const struct pt_section *VAR_9;
  const char *VAR_10;
  uint64_t VAR_11, VAR_12;

  VAR_8 = &VAR_1->entries[VAR_6];




  VAR_9 = VAR_8->section;
  VAR_10 = FUNC_1(VAR_9);
  VAR_11 = FUNC_2(VAR_9);
  VAR_12 = FUNC_3(VAR_9);

  if (VAR_8->laddr != VAR_5)
   continue;

  if (VAR_11 != VAR_3)
   continue;

  if (VAR_12 != VAR_4)
   continue;


  if (!VAR_10)
   return -VAR_0;

  if (FUNC_4(VAR_10, VAR_2) != 0)
   continue;

  return FUNC_0(VAR_6);
 }

 return 0;
}
