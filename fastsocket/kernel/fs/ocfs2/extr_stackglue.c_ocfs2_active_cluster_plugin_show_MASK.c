
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* sp_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_4,
      struct kobj_attribute *VAR_5,
      char *VAR_6)
{
 ssize_t VAR_7 = 0;

 FUNC_1(&VAR_3);
 if (VAR_2) {
  VAR_7 = FUNC_0(VAR_6, VAR_1, "%s\n",
          VAR_2->sp_name);
  if (VAR_7 == VAR_1)
   VAR_7 = -VAR_0;
 }
 FUNC_2(&VAR_3);

 return VAR_7;
}
