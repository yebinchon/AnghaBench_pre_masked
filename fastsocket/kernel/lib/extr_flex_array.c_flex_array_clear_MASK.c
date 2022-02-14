
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array_part {int * elements; } ;
struct flex_array {unsigned int total_nr_elements; int element_size; struct flex_array_part** parts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct flex_array*) ;
 int FUNC_1 (struct flex_array*,unsigned int) ;
 size_t FUNC_2 (struct flex_array*,unsigned int) ;
 int FUNC_3 (void*,int ,int ) ;

int FUNC_4(struct flex_array *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = FUNC_1(VAR_3, VAR_4);
 struct flex_array_part *VAR_6;
 void *VAR_7;

 if (VAR_4 >= VAR_3->total_nr_elements)
  return -VAR_1;
 if (FUNC_0(VAR_3))
  VAR_6 = (struct flex_array_part *)&VAR_3->parts[0];
 else {
  VAR_6 = VAR_3->parts[VAR_5];
  if (!VAR_6)
   return -VAR_0;
 }
 VAR_7 = &VAR_6->elements[FUNC_2(VAR_3, VAR_4)];
 FUNC_3(VAR_7, VAR_2, VAR_3->element_size);
 return 0;
}
