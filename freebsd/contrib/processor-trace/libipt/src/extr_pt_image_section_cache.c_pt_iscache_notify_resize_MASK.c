
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {int dummy; } ;
struct pt_iscache_lru_entry {int dummy; } ;
struct pt_image_section_cache {int dummy; } ;


 int FUNC_0 (struct pt_image_section_cache*) ;
 int FUNC_1 (struct pt_iscache_lru_entry*) ;
 int FUNC_2 (struct pt_image_section_cache*,struct pt_iscache_lru_entry**) ;
 int FUNC_3 (struct pt_image_section_cache*,struct pt_section*,int ) ;
 int FUNC_4 (struct pt_image_section_cache*) ;

int FUNC_5(struct pt_image_section_cache *VAR_0,
        struct pt_section *VAR_1, uint64_t VAR_2)
{
 struct pt_iscache_lru_entry *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = ((void*)0);

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_5 > 0)
  VAR_5 = FUNC_2(VAR_0, &VAR_3);

 VAR_4 = FUNC_4(VAR_0);

 if (VAR_4 < 0 || VAR_5 < 0)
  return (VAR_5 < 0) ? VAR_5 : VAR_4;

 return FUNC_1(VAR_3);
}
