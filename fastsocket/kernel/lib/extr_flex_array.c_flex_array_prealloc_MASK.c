
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array_part {int dummy; } ;
struct flex_array {unsigned int total_nr_elements; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct flex_array_part* FUNC_0 (struct flex_array*,int,int ) ;
 scalar_t__ FUNC_1 (struct flex_array*) ;
 int FUNC_2 (struct flex_array*,unsigned int) ;

int FUNC_3(struct flex_array *VAR_2, unsigned int VAR_3,
   unsigned int VAR_4, gfp_t VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 unsigned int VAR_9;
 struct flex_array_part *VAR_10;

 if (!VAR_3 && !VAR_4)
  return 0;
 if (VAR_3 >= VAR_2->total_nr_elements)
  return -VAR_1;
 if (!VAR_4)
  return 0;

 VAR_9 = VAR_3 + VAR_4 - 1;

 if (VAR_9 >= VAR_2->total_nr_elements)
  return -VAR_1;
 if (FUNC_1(VAR_2))
  return 0;
 VAR_6 = FUNC_2(VAR_2, VAR_3);
 VAR_7 = FUNC_2(VAR_2, VAR_9);
 for (VAR_8 = VAR_6; VAR_8 <= VAR_7; VAR_8++) {
  VAR_10 = FUNC_0(VAR_2, VAR_8, VAR_5);
  if (!VAR_10)
   return -VAR_0;
 }
 return 0;
}
