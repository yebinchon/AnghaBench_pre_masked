
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_mapped_section {int dummy; } ;
struct pt_section_list {int isid; struct pt_section_list* next; struct pt_mapped_section section; } ;
struct pt_section {int dummy; } ;
struct pt_image {struct pt_section_list* sections; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_asid const*,struct pt_asid const*) ;
 struct pt_section_list* FUNC_1 (struct pt_section*,struct pt_asid const*,scalar_t__,scalar_t__,scalar_t__,int) ;
 struct pt_asid* FUNC_2 (struct pt_mapped_section const*) ;
 scalar_t__ FUNC_3 (struct pt_mapped_section const*) ;
 scalar_t__ FUNC_4 (struct pt_mapped_section const*) ;
 scalar_t__ FUNC_5 (struct pt_mapped_section const*) ;
 struct pt_section* FUNC_6 (struct pt_mapped_section const*) ;
 int FUNC_7 (struct pt_section_list*) ;
 scalar_t__ FUNC_8 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_9(struct pt_image *VAR_2, struct pt_section *VAR_3,
   const struct pt_asid *VAR_4, uint64_t VAR_5, int VAR_6)
{
 struct pt_section_list **VAR_7, *VAR_8, *VAR_9, *VAR_10;
 uint64_t VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_3);
 VAR_12 = VAR_5;
 VAR_13 = VAR_12 + VAR_11;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_12, 0ull, VAR_11, VAR_6);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = ((void*)0);
 VAR_14 = 0;


 VAR_7 = &(VAR_2->sections);
 while (*VAR_7) {
  const struct pt_mapped_section *VAR_15;
  const struct pt_asid *VAR_16;
  struct pt_section_list *VAR_17;
  struct pt_section *VAR_18;
  uint64_t VAR_19, VAR_20, VAR_21;

  VAR_17 = *VAR_7;
  VAR_15 = &VAR_17->section;
  VAR_16 = FUNC_2(VAR_15);

  VAR_14 = FUNC_0(VAR_16, VAR_4);
  if (VAR_14 < 0)
   break;

  if (!VAR_14) {
   VAR_7 = &((*VAR_7)->next);
   continue;
  }

  VAR_19 = FUNC_3(VAR_15);
  VAR_20 = FUNC_4(VAR_15);

  if ((VAR_13 <= VAR_19) || (VAR_20 <= VAR_12)) {
   VAR_7 = &((*VAR_7)->next);
   continue;
  }


  VAR_18 = FUNC_6(VAR_15);
  VAR_21 = FUNC_5(VAR_15);





  *VAR_7 = VAR_17->next;




  VAR_17->next = VAR_9;
  VAR_9 = VAR_17;


  if (VAR_19 < VAR_12) {
   VAR_10 = FUNC_1(VAR_18, VAR_16, VAR_19, VAR_21,
       VAR_12 - VAR_19, VAR_17->isid);
   if (!VAR_10) {
    VAR_14 = -VAR_1;
    break;
   }

   VAR_10->next = VAR_8;
   VAR_8 = VAR_10;
  }


  if (VAR_13 < VAR_20) {
   VAR_10 = FUNC_1(VAR_18, VAR_16, VAR_13,
       VAR_21 + (VAR_13 - VAR_19),
       VAR_20 - VAR_13, VAR_17->isid);
   if (!VAR_10) {
    VAR_14 = -VAR_1;
    break;
   }

   VAR_10->next = VAR_8;
   VAR_8 = VAR_10;
  }
 }

 if (VAR_14 < 0) {
  FUNC_7(VAR_8);


  for (; *VAR_7; VAR_7 = &((*VAR_7)->next))
   ;

  *VAR_7 = VAR_9;
  return VAR_14;
 }

 FUNC_7(VAR_9);

 *VAR_7 = VAR_8;
 return 0;
}
