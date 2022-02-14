
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {struct kobj_type* ktype; struct kobject* parent; } ;
struct kobj_type {struct attribute** default_attrs; } ;
struct attribute {int dummy; } ;


 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct kobject*,struct attribute*) ;
 int FUNC_2 (struct kobject*) ;

__attribute__((used)) static int
FUNC_3(struct kobject *VAR_0, struct kobject *VAR_1)
{
 const struct kobj_type *VAR_2;
 int VAR_3;

 VAR_0->parent = VAR_1;
 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == 0 && VAR_0->ktype && VAR_0->ktype->default_attrs) {
  struct attribute **VAR_4;
  VAR_2 = VAR_0->ktype;

  for (VAR_4 = VAR_2->default_attrs; *VAR_4 != ((void*)0); VAR_4++) {
   VAR_3 = FUNC_1(VAR_0, *VAR_4);
   if (VAR_3)
    break;
  }
  if (VAR_3)
   FUNC_2(VAR_0);

 }
 return (VAR_3);
}
