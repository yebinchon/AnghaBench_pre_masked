
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meta_obj {scalar_t__ value; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct meta_obj *VAR_0, struct meta_obj *VAR_1)
{



 if (FUNC_0(VAR_0->value == VAR_1->value))
  return 0;
 else if (VAR_0->value < VAR_1->value)
  return -1;
 else
  return 1;
}
