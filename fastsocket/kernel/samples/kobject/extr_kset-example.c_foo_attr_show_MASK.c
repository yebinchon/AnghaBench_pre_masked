
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct foo_obj {int dummy; } ;
struct foo_attribute {int (* show ) (struct foo_obj*,struct foo_attribute*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct foo_obj*,struct foo_attribute*,char*) ;
 struct foo_attribute* FUNC_1 (struct attribute*) ;
 struct foo_obj* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
        struct attribute *VAR_2,
        char *VAR_3)
{
 struct foo_attribute *VAR_4;
 struct foo_obj *VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = FUNC_2(VAR_1);

 if (!VAR_4->show)
  return -VAR_0;

 return VAR_4->show(VAR_5, VAR_4, VAR_3);
}
