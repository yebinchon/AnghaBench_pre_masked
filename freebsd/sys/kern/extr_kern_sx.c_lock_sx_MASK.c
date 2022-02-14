
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx {int dummy; } ;
struct lock_object {int dummy; } ;


 int FUNC_0 (struct sx*) ;
 int FUNC_1 (struct sx*) ;

void
FUNC_2(struct lock_object *VAR_0, uintptr_t VAR_1)
{
 struct sx *VAR_2;

 VAR_2 = (struct sx *)VAR_0;
 if (VAR_1)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_2);
}
