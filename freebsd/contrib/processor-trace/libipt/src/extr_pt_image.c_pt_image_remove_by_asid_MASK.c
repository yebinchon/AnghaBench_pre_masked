
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_mapped_section {int dummy; } ;
struct pt_section_list {struct pt_section_list* next; struct pt_mapped_section section; } ;
struct pt_image {struct pt_section_list* sections; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_asid*,struct pt_asid const*) ;
 int FUNC_1 (struct pt_asid const*,struct pt_asid*) ;
 struct pt_asid* FUNC_2 (struct pt_mapped_section*) ;
 int FUNC_3 (struct pt_section_list*) ;
 int VAR_0 ;

int FUNC_4(struct pt_image *VAR_1,
       const struct pt_asid *VAR_2)
{
 struct pt_section_list **VAR_3;
 struct pt_asid VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(&VAR_4, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = 0;
 for (VAR_3 = &VAR_1->sections; *VAR_3;) {
  struct pt_mapped_section *VAR_7;
  const struct pt_asid *VAR_8;
  struct pt_section_list *VAR_9;

  VAR_9 = *VAR_3;
  VAR_7 = &VAR_9->section;
  VAR_8 = FUNC_2(VAR_7);

  VAR_5 = FUNC_1(VAR_8, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  if (!VAR_5) {
   VAR_3 = &VAR_9->next;
   continue;
  }

  *VAR_3 = VAR_9->next;
  FUNC_3(VAR_9);

  VAR_6 += 1;
 }

 return VAR_6;
}
