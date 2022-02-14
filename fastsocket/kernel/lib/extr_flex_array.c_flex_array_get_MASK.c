
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array_part {void* elements; } ;
struct flex_array {unsigned int total_nr_elements; struct flex_array_part** parts; } ;


 scalar_t__ FUNC_0 (struct flex_array*) ;
 int FUNC_1 (struct flex_array*,unsigned int) ;
 size_t FUNC_2 (struct flex_array*,unsigned int) ;

void *FUNC_3(struct flex_array *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 struct flex_array_part *VAR_3;

 if (VAR_1 >= VAR_0->total_nr_elements)
  return ((void*)0);
 if (FUNC_0(VAR_0))
  VAR_3 = (struct flex_array_part *)&VAR_0->parts[0];
 else {
  VAR_3 = VAR_0->parts[VAR_2];
  if (!VAR_3)
   return ((void*)0);
 }
 return &VAR_3->elements[FUNC_2(VAR_0, VAR_1)];
}
