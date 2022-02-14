
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct foo_obj {int dummy; } ;


 int FUNC_0 (struct foo_obj*) ;
 struct foo_obj* FUNC_1 (struct kobject*) ;

__attribute__((used)) static void FUNC_2(struct kobject *VAR_0)
{
 struct foo_obj *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
