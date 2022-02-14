
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array {int element_size; int total_nr_elements; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct flex_array *VAR_1)
{
 int VAR_2 = VAR_1->element_size * VAR_1->total_nr_elements;
 if (VAR_2 <= VAR_0)
  return 1;
 return 0;
}
