
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int pv_major; int pv_minor; } ;
struct TYPE_4__ {TYPE_1__ lp_max_version; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_3,
            struct kobj_attribute *VAR_4,
            char *VAR_5)
{
 ssize_t VAR_6 = 0;

 FUNC_1(&VAR_2);
 if (VAR_1)
  VAR_6 = FUNC_0(VAR_5, VAR_0, "%u.%u\n",
          VAR_1->lp_max_version.pv_major,
          VAR_1->lp_max_version.pv_minor);
 FUNC_2(&VAR_2);

 return VAR_6;
}
