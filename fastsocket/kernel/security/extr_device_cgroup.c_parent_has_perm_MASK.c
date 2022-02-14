
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dev_exception_item {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cgroup; } ;
struct dev_cgroup {TYPE_2__ css; } ;
struct cgroup {int dummy; } ;
struct TYPE_3__ {struct cgroup* parent; } ;


 struct dev_cgroup* FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct dev_cgroup*,struct dev_exception_item*) ;

__attribute__((used)) static int FUNC_2(struct dev_cgroup *VAR_0,
      struct dev_exception_item *VAR_1)
{
 struct cgroup *VAR_2 = VAR_0->css.cgroup->parent;
 struct dev_cgroup *VAR_3;

 if (!VAR_2)
  return 1;
 VAR_3 = FUNC_0(VAR_2);
 return FUNC_1(VAR_3, VAR_1);
}
