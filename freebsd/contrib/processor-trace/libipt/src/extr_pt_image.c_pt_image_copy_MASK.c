
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vaddr; int asid; int section; } ;
struct pt_section_list {int isid; TYPE_1__ section; struct pt_section_list* next; } ;
typedef struct pt_image {struct pt_section_list* sections; } const pt_image ;


 int FUNC_0 (struct pt_image const*,int ,int *,int ,int ) ;
 int VAR_0 ;

int FUNC_1(struct pt_image *VAR_1, const struct pt_image *VAR_2)
{
 struct pt_section_list *VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;






 if (VAR_1 == VAR_2)
  return 0;

 VAR_4 = 0;
 for (VAR_3 = VAR_2->sections; VAR_3; VAR_3 = VAR_3->next) {
  int VAR_5;

  VAR_5 = FUNC_0(VAR_1, VAR_3->section.section,
           &VAR_3->section.asid,
           VAR_3->section.vaddr,
           VAR_3->isid);
  if (VAR_5 < 0)
   VAR_4 += 1;
 }

 return VAR_4;
}
