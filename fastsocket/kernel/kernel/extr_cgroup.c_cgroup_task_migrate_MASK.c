
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int cg_list; struct css_set* cgroups; } ;
struct css_set {int tasks; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cgroup {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct css_set* FUNC_1 (struct css_set*,struct cgroup*) ;
 struct css_set* FUNC_2 (struct css_set*,struct cgroup*,struct cgroup_subsys_state**) ;
 int FUNC_3 (struct css_set*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct css_set*) ;
 int FUNC_8 (struct css_set*,struct css_set*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct task_struct*) ;
 int FUNC_13 (struct task_struct*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct cgroup *VAR_6, struct cgroup *VAR_7,
          struct task_struct *VAR_8, bool VAR_9)
{
 struct css_set *VAR_10;
 struct css_set *VAR_11;






 FUNC_12(VAR_8);
 VAR_10 = VAR_8->cgroups;
 FUNC_3(VAR_10);
 FUNC_13(VAR_8);


 if (VAR_9) {

  struct cgroup_subsys_state *VAR_12[VAR_0];
  FUNC_9(&VAR_5);
  VAR_11 = FUNC_2(VAR_10, VAR_6, VAR_12);
  FUNC_0(!VAR_11);
  FUNC_3(VAR_11);
  FUNC_10(&VAR_5);
 } else {
  FUNC_6();

  VAR_11 = FUNC_1(VAR_10, VAR_6);
  if (!VAR_11) {
   FUNC_7(VAR_10);
   return -VAR_2;
  }
 }
 FUNC_7(VAR_10);


 FUNC_12(VAR_8);
 if (VAR_8->flags & VAR_4) {
  FUNC_13(VAR_8);
  FUNC_7(VAR_11);
  return -VAR_3;
 }
 FUNC_8(VAR_8->cgroups, VAR_11);
 FUNC_13(VAR_8);


 FUNC_14(&VAR_5);
 if (!FUNC_4(&VAR_8->cg_list))
  FUNC_5(&VAR_8->cg_list, &VAR_11->tasks);
 FUNC_15(&VAR_5);






 FUNC_7(VAR_10);

 FUNC_11(VAR_1, &VAR_7->flags);
 return 0;
}
