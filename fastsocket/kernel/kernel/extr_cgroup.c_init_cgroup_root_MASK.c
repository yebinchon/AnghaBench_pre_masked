
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {struct cgroup* top_cgroup; struct cgroupfs_root* root; } ;
struct cgroupfs_root {int number_of_cgroups; int root_list; int subsys_list; struct cgroup top_cgroup; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cgroup*) ;

__attribute__((used)) static void FUNC_2(struct cgroupfs_root *VAR_0)
{
 struct cgroup *VAR_1 = &VAR_0->top_cgroup;
 FUNC_0(&VAR_0->subsys_list);
 FUNC_0(&VAR_0->root_list);
 VAR_0->number_of_cgroups = 1;
 VAR_1->root = VAR_0;
 VAR_1->top_cgroup = VAR_1;
 FUNC_1(VAR_1);
}
