
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int dummy; } ;
struct pt_iscache_lru_entry {int dummy; } ;
struct pt_image_section_cache {int dummy; } ;


 int FUNC_0 (struct pt_image_section_cache*) ;
 int FUNC_1 (struct pt_image_section_cache*,struct pt_section*) ;
 int FUNC_2 (struct pt_iscache_lru_entry*) ;
 int FUNC_3 (struct pt_image_section_cache*,struct pt_iscache_lru_entry**) ;
 int FUNC_4 (struct pt_image_section_cache*) ;

int FUNC_5(struct pt_image_section_cache *VAR_0,
     struct pt_section *VAR_1)
{
 struct pt_iscache_lru_entry *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = ((void*)0);

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4 > 0)
  VAR_4 = FUNC_3(VAR_0, &VAR_2);

 VAR_3 = FUNC_4(VAR_0);

 if (VAR_3 < 0 || VAR_4 < 0)
  return (VAR_4 < 0) ? VAR_4 : VAR_3;

 return FUNC_2(VAR_2);
}
