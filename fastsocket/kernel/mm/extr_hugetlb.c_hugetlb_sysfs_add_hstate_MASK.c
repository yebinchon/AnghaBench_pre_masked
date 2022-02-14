
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct hstate {int name; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 struct hstate* VAR_1 ;
 struct kobject* FUNC_0 (int ,struct kobject*) ;
 int FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct kobject*,struct attribute_group*) ;

__attribute__((used)) static int FUNC_3(struct hstate *VAR_2, struct kobject *VAR_3,
        struct kobject **VAR_4,
        struct attribute_group *VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_2 - VAR_1;

 VAR_4[VAR_7] = FUNC_0(VAR_2->name, VAR_3);
 if (!VAR_4[VAR_7])
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4[VAR_7], VAR_5);
 if (VAR_6)
  FUNC_1(VAR_4[VAR_7]);

 return VAR_6;
}
