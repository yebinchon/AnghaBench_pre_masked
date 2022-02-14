
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_iscache_lru_entry {int dummy; } ;
struct pt_image_section_cache {scalar_t__ used; scalar_t__ limit; } ;


 int FUNC_0 (struct pt_image_section_cache*) ;
 int FUNC_1 (struct pt_iscache_lru_entry*) ;
 int FUNC_2 (struct pt_image_section_cache*,struct pt_iscache_lru_entry**) ;
 int FUNC_3 (struct pt_image_section_cache*) ;
 int VAR_0 ;

int FUNC_4(struct pt_image_section_cache *VAR_1, uint64_t VAR_2)
{
 struct pt_iscache_lru_entry *VAR_3;
 int VAR_4, VAR_5;

 if (!VAR_1)
  return -VAR_0;

 VAR_5 = 0;
 VAR_3 = ((void*)0);

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->limit = VAR_2;
 if (VAR_2 < VAR_1->used)
  VAR_5 = FUNC_2(VAR_1, &VAR_3);

 VAR_4 = FUNC_3(VAR_1);

 if (VAR_4 < 0 || VAR_5 < 0)
  return (VAR_5 < 0) ? VAR_5 : VAR_4;

 return FUNC_1(VAR_3);
}
