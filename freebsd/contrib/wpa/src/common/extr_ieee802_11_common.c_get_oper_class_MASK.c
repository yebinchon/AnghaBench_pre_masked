
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct oper_class_map {scalar_t__ op_class; } ;


 scalar_t__ FUNC_0 (char const*,scalar_t__) ;
 struct oper_class_map* VAR_0 ;

const struct oper_class_map * FUNC_1(const char *VAR_1, u8 VAR_2)
{
 const struct oper_class_map *VAR_3;

 if (VAR_1)
  VAR_2 = FUNC_0(VAR_1, VAR_2);

 VAR_3 = &VAR_0[0];
 while (VAR_3->op_class && VAR_3->op_class != VAR_2)
  VAR_3++;

 if (!VAR_3->op_class)
  return ((void*)0);

 return VAR_3;
}
