
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t uint16_t ;
struct pt_section {int dummy; } ;
struct pt_iscache_entry {scalar_t__ laddr; struct pt_section* section; } ;
struct pt_image_section_cache {size_t size; struct pt_iscache_entry* entries; } ;


 char* FUNC_0 (struct pt_section const*) ;
 scalar_t__ FUNC_1 (struct pt_section const*) ;
 scalar_t__ FUNC_2 (struct pt_section const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_4(const struct pt_image_section_cache *VAR_1,
          const char *VAR_2, uint64_t VAR_3,
          uint64_t VAR_4, uint64_t VAR_5)
{
 const struct pt_section *VAR_6;
 uint16_t VAR_7, VAR_8;
 int VAR_9;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_6 = ((void*)0);
 VAR_9 = VAR_8 = VAR_1->size;
 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
  const struct pt_iscache_entry *VAR_10;
  const struct pt_section *VAR_11;

  VAR_10 = &VAR_1->entries[VAR_7];




  VAR_11 = VAR_10->section;


  if (VAR_11 != VAR_6) {
   const char *VAR_12;


   if (VAR_6)
    continue;

   if (VAR_3 != FUNC_1(VAR_11))
    continue;

   if (VAR_4 != FUNC_2(VAR_11))
    continue;

   VAR_12 = FUNC_0(VAR_11);
   if (!VAR_12)
    return -VAR_0;

   if (FUNC_3(VAR_2, VAR_12) != 0)
    continue;


   VAR_6 = VAR_11;
   VAR_9 = VAR_7;
  }





  if (VAR_5 == VAR_10->laddr)
   return VAR_7;
 }

 return VAR_9;
}
