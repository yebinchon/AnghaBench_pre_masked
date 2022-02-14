
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kobject* parent; } ;


 int * FUNC_0 (struct kobject*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct kobject *VAR_0)
{
 int VAR_1 = 1;
 struct kobject *VAR_2 = VAR_0;





 do {
  if (FUNC_0(VAR_2) == ((void*)0))
   return 0;
  VAR_1 += FUNC_1(FUNC_0(VAR_2)) + 1;
  VAR_2 = VAR_2->parent;
 } while (VAR_2);
 return VAR_1;
}
