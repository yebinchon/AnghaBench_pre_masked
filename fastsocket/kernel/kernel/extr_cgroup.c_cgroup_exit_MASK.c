
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct css_set* cgroups; int cg_list; } ;
struct css_set {int * subsys; } ;
struct cgroup_subsys {int (* exit ) (struct cgroup_subsys*,struct cgroup*,struct cgroup*,struct task_struct*) ;} ;
struct cgroup {int dummy; } ;
struct TYPE_2__ {struct cgroup* cgroup; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct css_set VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct css_set*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct cgroup_subsys*,struct cgroup*,struct cgroup*,struct task_struct*) ;
 struct cgroup_subsys** VAR_4 ;
 struct cgroup* FUNC_5 (struct task_struct*,int) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct task_struct *VAR_5, int VAR_6)
{
 int VAR_7;
 struct css_set *VAR_8;







 if (!FUNC_1(&VAR_5->cg_list)) {
  FUNC_8(&VAR_1);
  if (!FUNC_1(&VAR_5->cg_list))
   FUNC_0(&VAR_5->cg_list);
  FUNC_9(&VAR_1);
 }


 FUNC_6(VAR_5);
 VAR_8 = VAR_5->cgroups;
 VAR_5->cgroups = &VAR_2;

 if (VAR_6 && VAR_3) {




  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   struct cgroup_subsys *VAR_9 = VAR_4[VAR_7];
   if (VAR_9->exit) {
    struct cgroup *VAR_10 =
     FUNC_3(VAR_8->subsys[VAR_7])->cgroup;
    struct cgroup *VAR_11 = FUNC_5(VAR_5, VAR_7);
    VAR_9->exit(VAR_9, VAR_11, VAR_10, VAR_5);
   }
  }
 }
 FUNC_7(VAR_5);

 if (VAR_8)
  FUNC_2(VAR_8);
}
