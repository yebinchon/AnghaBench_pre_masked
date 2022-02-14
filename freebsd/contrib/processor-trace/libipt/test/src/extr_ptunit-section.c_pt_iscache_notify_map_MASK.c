
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int dummy; } ;
struct pt_image_section_cache {scalar_t__ map; } ;


 int FUNC_0 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_1(struct pt_image_section_cache *VAR_1,
     struct pt_section *VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 if (VAR_1->map <= 0)
  return VAR_1->map;


 VAR_1->map = 0;

 return FUNC_0(VAR_2);
}
