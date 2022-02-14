
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {int dummy; } ;
struct pt_image_section_cache {int dummy; } ;
struct pt_image {int dummy; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_asid*,struct pt_asid const*) ;
 int FUNC_1 (struct pt_image*,struct pt_section*,struct pt_asid*,int ,int) ;
 int FUNC_2 (struct pt_image_section_cache*,struct pt_section**,int *,int) ;
 int FUNC_3 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_4(struct pt_image *VAR_1,
   struct pt_image_section_cache *VAR_2, int VAR_3,
   const struct pt_asid *VAR_4)
{
 struct pt_section *VAR_5;
 struct pt_asid VAR_6;
 uint64_t VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_2, &VAR_5, &VAR_7, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_0(&VAR_6, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = FUNC_1(VAR_1, VAR_5, &VAR_6, VAR_7, VAR_3);




 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 return VAR_9;
}
