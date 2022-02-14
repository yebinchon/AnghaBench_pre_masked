
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {struct pt_image_section_cache* iscache; } ;
struct pt_image_section_cache {int dummy; } ;


 int FUNC_0 (struct pt_image_section_cache*,struct pt_section*) ;
 int FUNC_1 (struct pt_section*) ;
 int FUNC_2 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_3(struct pt_section *VAR_1)
{
 struct pt_image_section_cache *VAR_2;
 int VAR_3, VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2 = VAR_1->iscache;
 if (!VAR_2)
  return FUNC_2(VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_1);

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 return VAR_4;
}
