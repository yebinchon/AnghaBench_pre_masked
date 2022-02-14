
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_mapped_section {int dummy; } ;
struct pt_section_list {int isid; struct pt_mapped_section section; } ;
struct pt_section {int dummy; } ;
struct pt_image {struct pt_section_list* sections; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_image*,struct pt_asid const*,int ) ;
 struct pt_section* FUNC_1 (struct pt_mapped_section*) ;
 int FUNC_2 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_3(struct pt_image *VAR_1, struct pt_mapped_section *VAR_2,
    const struct pt_asid *VAR_3, uint64_t VAR_4)
{
 struct pt_mapped_section *VAR_5;
 struct pt_section_list *VAR_6;
 struct pt_section *VAR_7;
 int VAR_8;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_1, VAR_3, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 = VAR_1->sections;
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = &VAR_6->section;
 VAR_7 = FUNC_1(VAR_5);

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_2 = *VAR_5;

 return VAR_6->isid;
}
