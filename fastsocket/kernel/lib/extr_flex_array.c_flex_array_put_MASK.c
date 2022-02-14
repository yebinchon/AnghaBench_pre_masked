
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array_part {int * elements; } ;
struct flex_array {unsigned int total_nr_elements; int element_size; int * parts; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct flex_array_part* FUNC_0 (struct flex_array*,int,int ) ;
 scalar_t__ FUNC_1 (struct flex_array*) ;
 int FUNC_2 (struct flex_array*,unsigned int) ;
 size_t FUNC_3 (struct flex_array*,unsigned int) ;
 int FUNC_4 (void*,void*,int ) ;

int FUNC_5(struct flex_array *VAR_2, unsigned int VAR_3, void *VAR_4,
   gfp_t VAR_5)
{
 int VAR_6 = FUNC_2(VAR_2, VAR_3);
 struct flex_array_part *VAR_7;
 void *VAR_8;

 if (VAR_3 >= VAR_2->total_nr_elements)
  return -VAR_1;
 if (FUNC_1(VAR_2))
  VAR_7 = (struct flex_array_part *)&VAR_2->parts[0];
 else {
  VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_5);
  if (!VAR_7)
   return -VAR_0;
 }
 VAR_8 = &VAR_7->elements[FUNC_3(VAR_2, VAR_3)];
 FUNC_4(VAR_8, VAR_4, VAR_2->element_size);
 return 0;
}
