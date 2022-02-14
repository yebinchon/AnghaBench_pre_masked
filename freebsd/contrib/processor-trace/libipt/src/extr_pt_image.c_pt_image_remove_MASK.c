
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_mapped_section {int dummy; } ;
struct pt_section_list {struct pt_section_list* next; struct pt_mapped_section section; } ;
typedef struct pt_section const pt_section ;
struct pt_image {struct pt_section_list* sections; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_asid const*,struct pt_asid const*) ;
 struct pt_asid* FUNC_1 (struct pt_mapped_section*) ;
 scalar_t__ FUNC_2 (struct pt_mapped_section*) ;
 struct pt_section const* FUNC_3 (struct pt_mapped_section*) ;
 int FUNC_4 (struct pt_section_list*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_5(struct pt_image *VAR_2, struct pt_section *VAR_3,
      const struct pt_asid *VAR_4, uint64_t VAR_5)
{
 struct pt_section_list **VAR_6;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 for (VAR_6 = &VAR_2->sections; *VAR_6; VAR_6 = &((*VAR_6)->next)) {
  struct pt_mapped_section *VAR_7;
  const struct pt_section *VAR_8;
  const struct pt_asid *VAR_9;
  struct pt_section_list *VAR_10;
  uint64_t VAR_11;
  int VAR_12;

  VAR_10 = *VAR_6;
  VAR_7 = &VAR_10->section;
  VAR_9 = FUNC_1(VAR_7);

  VAR_12 = FUNC_0(VAR_9, VAR_4);
  if (VAR_12 < 0)
   return VAR_12;

  if (!VAR_12)
   continue;

  VAR_11 = FUNC_2(VAR_7);
  VAR_8 = FUNC_3(VAR_7);
  if (VAR_8 == VAR_3 && VAR_11 == VAR_5) {
   *VAR_6 = VAR_10->next;
   FUNC_4(VAR_10);

   return 0;
  }
 }

 return -VAR_0;
}
