
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_section {int dummy; } ;
struct pt_image_section_cache {scalar_t__ map; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*,scalar_t__*) ;
 int VAR_0 ;

int FUNC_2(struct pt_image_section_cache *VAR_1,
        struct pt_section *VAR_2, uint64_t VAR_3)
{
 uint64_t VAR_4;
 int VAR_5;

 if (!VAR_1)
  return -VAR_0;

 if (VAR_1->map <= 0)
  return VAR_1->map;


 VAR_1->map = 0;

 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_3 != VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_2);
}
