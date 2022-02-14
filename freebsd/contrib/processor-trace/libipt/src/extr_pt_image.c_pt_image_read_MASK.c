
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct pt_mapped_section {int dummy; } ;
struct pt_section_list {int isid; struct pt_mapped_section section; } ;
struct pt_section {int dummy; } ;
struct pt_image {struct pt_section_list* sections; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_image*,struct pt_asid const*,int ) ;
 int FUNC_1 (struct pt_image*,int*,int *,int ,struct pt_asid const*,int ) ;
 int FUNC_2 (struct pt_mapped_section*,int *,int ,int ) ;
 struct pt_section* FUNC_3 (struct pt_mapped_section*) ;
 int FUNC_4 (struct pt_section*) ;
 int FUNC_5 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_6(struct pt_image *VAR_2, int *VAR_3, uint8_t *VAR_4,
    uint16_t VAR_5, const struct pt_asid *VAR_6, uint64_t VAR_7)
{
 struct pt_mapped_section *VAR_8;
 struct pt_section_list *VAR_9;
 struct pt_section *VAR_10;
 int VAR_11, VAR_12;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_2, VAR_6, VAR_7);
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_1)
   return VAR_11;

  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7);
 }

 VAR_9 = VAR_2->sections;
 if (!VAR_9)
  return -VAR_0;

 *VAR_3 = VAR_9->isid;
 VAR_8 = &VAR_9->section;

 VAR_10 = FUNC_3(VAR_8);

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = FUNC_2(VAR_8, VAR_4, VAR_5, VAR_7);

 VAR_11 = FUNC_5(VAR_10);
  if (VAR_11 < 0)
   return VAR_11;

 if (VAR_12 < 0) {
  if (VAR_12 != -VAR_1)
   return VAR_12;

  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7);
 }

 return VAR_12;
}
