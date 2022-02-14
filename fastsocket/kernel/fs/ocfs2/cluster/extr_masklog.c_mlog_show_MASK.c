
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlog_attribute {int mask; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*) ;
 struct mlog_attribute* FUNC_1 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_0, struct attribute *VAR_1,
    char *VAR_2)
{
 struct mlog_attribute *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3->mask, VAR_2);
}
