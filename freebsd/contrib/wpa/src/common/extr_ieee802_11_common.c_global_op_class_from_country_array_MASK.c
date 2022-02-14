
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct country_op_class {scalar_t__ country_op_class; scalar_t__ global_op_class; } ;



__attribute__((used)) static u8
FUNC_0(u8 VAR_0, size_t VAR_1,
       const struct country_op_class *VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2[VAR_3].country_op_class == VAR_0)
   return VAR_2[VAR_3].global_op_class;
 }

 return 0;
}
