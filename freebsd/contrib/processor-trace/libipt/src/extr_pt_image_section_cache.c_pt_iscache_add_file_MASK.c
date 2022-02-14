
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct pt_section {int dummy; } ;
struct pt_iscache_entry {struct pt_section* section; int laddr; } ;
struct pt_image_section_cache {int size; struct pt_iscache_entry* entries; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pt_image_section_cache*,struct pt_section*,int ) ;
 int FUNC_2 (struct pt_image_section_cache*,char const*,int ,int ,int ) ;
 int FUNC_3 (struct pt_image_section_cache*) ;
 int FUNC_4 (struct pt_image_section_cache*) ;
 int FUNC_5 (struct pt_section**,char const*,int ,int ) ;
 int FUNC_6 (struct pt_section*) ;
 int FUNC_7 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_8(struct pt_image_section_cache *VAR_1,
   const char *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
   uint64_t VAR_5)
{
 struct pt_section *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3,
            VAR_4, VAR_5);
 if (VAR_8 < 0) {
  (void) FUNC_4(VAR_1);
  return VAR_8;
 }
 if (VAR_8 < VAR_1->size) {
  const struct pt_iscache_entry *VAR_10;

  VAR_10 = &VAR_1->entries[VAR_8];
  if (VAR_10->laddr == VAR_5) {
   VAR_7 = FUNC_4(VAR_1);
   if (VAR_7 < 0)
    return VAR_7;

   return FUNC_0((uint16_t) VAR_8);
  }

  VAR_6 = VAR_10->section;

  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7 < 0) {
   (void) FUNC_4(VAR_1);
   return VAR_7;
  }

  VAR_7 = FUNC_4(VAR_1);
  if (VAR_7 < 0) {
   (void) FUNC_7(VAR_6);
   return VAR_7;
  }
 } else {
  VAR_7 = FUNC_4(VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_6 = ((void*)0);
  VAR_7 = FUNC_5(&VAR_6, VAR_2, VAR_3, VAR_4);
  if (VAR_7 < 0)
   return VAR_7;
 }


 VAR_9 = FUNC_1(VAR_1, VAR_6, VAR_5);




 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_9;
}
