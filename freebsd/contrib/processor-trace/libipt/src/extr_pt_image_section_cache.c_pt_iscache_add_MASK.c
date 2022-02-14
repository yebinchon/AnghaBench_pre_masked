
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint16_t ;
struct pt_section {int dummy; } ;
struct pt_iscache_entry {int laddr; struct pt_section* section; } ;
struct pt_image_section_cache {int size; scalar_t__ capacity; struct pt_iscache_entry* entries; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (struct pt_image_section_cache*) ;
 int FUNC_2 (struct pt_image_section_cache*,char const*,int ,int ,int ) ;
 int FUNC_3 (struct pt_image_section_cache*) ;
 int FUNC_4 (struct pt_image_section_cache*) ;
 int FUNC_5 (struct pt_image_section_cache*,struct pt_section*) ;
 int FUNC_6 (struct pt_image_section_cache*) ;
 int FUNC_7 (struct pt_section*,struct pt_image_section_cache*) ;
 int FUNC_8 (struct pt_section*,struct pt_image_section_cache*) ;
 char* FUNC_9 (struct pt_section*) ;
 int FUNC_10 (struct pt_section*) ;
 int FUNC_11 (struct pt_section*) ;
 int FUNC_12 (struct pt_section*) ;
 int FUNC_13 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_14(struct pt_image_section_cache *VAR_1,
     struct pt_section *VAR_2, uint64_t VAR_3)
{
 const char *VAR_4;
 uint64_t VAR_5, VAR_6;
 uint16_t VAR_7;
 int VAR_8;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;


 VAR_4 = FUNC_9(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_11(VAR_2);
 VAR_6 = FUNC_13(VAR_2);
 VAR_8 = FUNC_10(VAR_2);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_7(VAR_2, VAR_1);
 if (VAR_8 < 0)
  goto out_put;

 VAR_8 = FUNC_3(VAR_1);
 if (VAR_8 < 0)
  goto out_detach;
 for (;;) {
  const struct pt_iscache_entry *VAR_9;
  struct pt_section *VAR_10;
  int VAR_11;




  VAR_11 = FUNC_2(VAR_1, VAR_4,
             VAR_5, VAR_6, VAR_3);
  if (VAR_11 < 0) {
   VAR_8 = VAR_11;
   goto out_unlock_detach;
  }


  if (VAR_1->size <= VAR_11)
   break;

  VAR_9 = &VAR_1->entries[VAR_11];






  VAR_10 = VAR_9->section;
  if (VAR_10 == VAR_2) {
   if (VAR_9->laddr == VAR_3) {
    VAR_8 = FUNC_6(VAR_1);
    if (VAR_8 < 0)
     goto out_detach;

    VAR_8 = FUNC_8(VAR_2, VAR_1);
    if (VAR_8 < 0)
     goto out_lru;

    VAR_8 = FUNC_12(VAR_2);
    if (VAR_8 < 0)
     return VAR_8;

    return FUNC_0((uint16_t) VAR_11);
   }

   break;
  }
  VAR_8 = FUNC_10(VAR_10);
  if (VAR_8 < 0)
   goto out_unlock_detach;

  VAR_8 = FUNC_6(VAR_1);
  if (VAR_8 < 0) {
   (void) FUNC_12(VAR_10);
   goto out_detach;
  }

  VAR_8 = FUNC_8(VAR_2, VAR_1);
  if (VAR_8 < 0) {
   (void) FUNC_12(VAR_10);
   goto out_lru;
  }

  VAR_8 = FUNC_7(VAR_10, VAR_1);
  if (VAR_8 < 0) {
   (void) FUNC_12(VAR_10);
   goto out_lru;
  }

  VAR_8 = FUNC_3(VAR_1);
  if (VAR_8 < 0) {
   (void) FUNC_12(VAR_2);

   VAR_2 = VAR_10;
   goto out_detach;
  }







  VAR_8 = FUNC_5(VAR_1, VAR_2);
  if (VAR_8 < 0) {
   (void) FUNC_12(VAR_2);

   VAR_2 = VAR_10;
   goto out_unlock_detach;
  }


  VAR_8 = FUNC_12(VAR_2);
  if (VAR_8 < 0) {

   VAR_2 = VAR_10;
   goto out_unlock_detach;
  }





  VAR_2 = VAR_10;
 }


 if (VAR_1->capacity <= VAR_1->size) {

  if (VAR_1->capacity < VAR_1->size) {
   VAR_8 = -VAR_0;
   goto out_unlock_detach;
  }

  VAR_8 = FUNC_1(VAR_1);
  if (VAR_8 < 0)
   goto out_unlock_detach;


  if (VAR_1->capacity <= VAR_1->size) {
   VAR_8 = -VAR_0;
   goto out_unlock_detach;
  }
 }






 VAR_7 = VAR_1->size++;

 VAR_1->entries[VAR_7].section = VAR_2;
 VAR_1->entries[VAR_7].laddr = VAR_3;

 VAR_8 = FUNC_6(VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_0(VAR_7);

 out_unlock_detach:
 (void) FUNC_6(VAR_1);

 out_detach:
 (void) FUNC_8(VAR_2, VAR_1);

 out_lru:
 (void) FUNC_4(VAR_1);

 out_put:
 (void) FUNC_12(VAR_2);

 return VAR_8;
}
