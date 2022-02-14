
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_mapped_section {int dummy; } ;
struct pt_section_list {struct pt_section_list* next; struct pt_mapped_section section; } ;
struct pt_section {int dummy; } ;
struct pt_image {struct pt_section_list* sections; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_asid*,struct pt_asid const*) ;
 int FUNC_1 (struct pt_asid const*,struct pt_asid*) ;
 struct pt_asid* FUNC_2 (struct pt_mapped_section*) ;
 struct pt_section* FUNC_3 (struct pt_mapped_section*) ;
 char* FUNC_4 (struct pt_section const*) ;
 int FUNC_5 (struct pt_section_list*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

int FUNC_7(struct pt_image *VAR_1, const char *VAR_2,
    const struct pt_asid *VAR_3)
{
 struct pt_section_list **VAR_4;
 struct pt_asid VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_5, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = 0;
 for (VAR_4 = &VAR_1->sections; *VAR_4;) {
  struct pt_mapped_section *VAR_8;
  const struct pt_section *VAR_9;
  const struct pt_asid *VAR_10;
  struct pt_section_list *VAR_11;
  const char *VAR_12;

  VAR_11 = *VAR_4;
  VAR_8 = &VAR_11->section;
  VAR_10 = FUNC_2(VAR_8);

  VAR_6 = FUNC_1(VAR_10, &VAR_5);
  if (VAR_6 < 0)
   return VAR_6;

  if (!VAR_6) {
   VAR_4 = &VAR_11->next;
   continue;
  }

  VAR_9 = FUNC_3(VAR_8);
  VAR_12 = FUNC_4(VAR_9);

  if (VAR_12 && (FUNC_6(VAR_12, VAR_2) == 0)) {
   *VAR_4 = VAR_11->next;
   FUNC_5(VAR_11);

   VAR_7 += 1;
  } else
   VAR_4 = &VAR_11->next;
 }

 return VAR_7;
}
