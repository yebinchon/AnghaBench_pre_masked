
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_type {struct attribute** default_attrs; } ;
struct attribute {int dummy; } ;


 struct kobj_type* FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct kobject*,struct attribute*) ;

__attribute__((used)) static int FUNC_2(struct kobject *VAR_0)
{
 struct kobj_type *VAR_1 = FUNC_0(VAR_0);
 struct attribute *VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 if (VAR_1 && VAR_1->default_attrs) {
  for (VAR_4 = 0; (VAR_2 = VAR_1->default_attrs[VAR_4]) != ((void*)0); VAR_4++) {
   VAR_3 = FUNC_1(VAR_0, VAR_2);
   if (VAR_3)
    break;
  }
 }
 return VAR_3;
}
