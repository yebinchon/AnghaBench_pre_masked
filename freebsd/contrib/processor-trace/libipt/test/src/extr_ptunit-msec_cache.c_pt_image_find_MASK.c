
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {int dummy; } ;
struct pt_mapped_section {struct pt_section* section; } ;
struct pt_image {struct pt_section* section; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct pt_image *VAR_2, struct pt_mapped_section *VAR_3,
    const struct pt_asid *VAR_4, uint64_t VAR_5)
{
 struct pt_section *VAR_6;

 (void) VAR_5;

 if (!VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_0;

 VAR_6 = VAR_2->section;
 if (!VAR_6)
  return -VAR_1;

 if (VAR_3->section)
  return -VAR_0;

 VAR_3->section = VAR_6;

 return FUNC_0(VAR_6);
}
