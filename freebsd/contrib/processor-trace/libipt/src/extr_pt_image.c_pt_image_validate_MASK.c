
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_section_list {int isid; int section; } ;
struct pt_mapped_section {int dummy; } ;
struct pt_image {struct pt_section_list* sections; } ;


 int FUNC_0 (int *,struct pt_mapped_section const*,int) ;
 scalar_t__ FUNC_1 (struct pt_mapped_section const*) ;
 scalar_t__ FUNC_2 (struct pt_mapped_section const*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(const struct pt_image *VAR_2,
        const struct pt_mapped_section *VAR_3, uint64_t VAR_4,
        int VAR_5)
{
 const struct pt_section_list *VAR_6;
 uint64_t VAR_7, VAR_8;
 int VAR_9;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;


 VAR_7 = FUNC_1(VAR_3);
 VAR_8 = FUNC_2(VAR_3);
 if (VAR_4 < VAR_7 || VAR_8 <= VAR_4)
  return -VAR_1;
 VAR_6 = VAR_2->sections;
 if (!VAR_6)
  return -VAR_1;

 if (VAR_6->isid != VAR_5)
  return -VAR_1;

 VAR_9 = FUNC_0(&VAR_6->section, VAR_3, sizeof(*VAR_3));
 if (VAR_9)
  return -VAR_1;

 return 0;
}
