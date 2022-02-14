
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_mapped_section {int dummy; } ;
struct pt_section_list {struct pt_section_list* next; struct pt_mapped_section section; } ;
struct pt_image {struct pt_section_list* sections; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_mapped_section*,struct pt_asid const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pt_image *VAR_2,
      const struct pt_asid *VAR_3, uint64_t VAR_4)
{
 struct pt_section_list **VAR_5, **VAR_6;

 if (!VAR_2)
  return -VAR_0;

 VAR_5 = &VAR_2->sections;
 for (VAR_6 = VAR_5; *VAR_6;) {
  struct pt_mapped_section *VAR_7;
  struct pt_section_list *VAR_8;
  int VAR_9;

  VAR_8 = *VAR_6;
  VAR_7 = &VAR_8->section;

  VAR_9 = FUNC_0(VAR_7, VAR_3, VAR_4);
  if (VAR_9 < 0) {
   if (VAR_9 != -VAR_1)
    return VAR_9;

   VAR_6 = &VAR_8->next;
   continue;
  }


  if (VAR_6 != VAR_5) {
   *VAR_6 = VAR_8->next;
   VAR_8->next = *VAR_5;
   *VAR_5 = VAR_8;
  }

  return 0;
 }

 return -VAR_1;
}
