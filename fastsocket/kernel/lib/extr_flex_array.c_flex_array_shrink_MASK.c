
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array_part {int dummy; } ;
struct flex_array {struct flex_array_part** parts; int total_nr_elements; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct flex_array*) ;
 int FUNC_1 (struct flex_array_part*) ;
 scalar_t__ FUNC_2 (struct flex_array_part*) ;

int FUNC_3(struct flex_array *VAR_1)
{
 struct flex_array_part *VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 if (!VAR_1->total_nr_elements)
  return 0;
 if (FUNC_0(VAR_1))
  return VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1->parts[VAR_3];
  if (!VAR_2)
   continue;
  if (FUNC_2(VAR_2)) {
   VAR_1->parts[VAR_3] = ((void*)0);
   FUNC_1(VAR_2);
   VAR_4++;
  }
 }
 return VAR_4;
}
