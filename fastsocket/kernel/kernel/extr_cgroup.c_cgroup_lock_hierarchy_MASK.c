
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroupfs_root {int dummy; } ;
struct cgroup_subsys {int hierarchy_mutex; struct cgroupfs_root* root; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cgroup_subsys** VAR_1 ;

__attribute__((used)) static void FUNC_1(struct cgroupfs_root *VAR_2)
{

 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct cgroup_subsys *VAR_4 = VAR_1[VAR_3];
  if (VAR_4->root == VAR_2)
   FUNC_0(&VAR_4->hierarchy_mutex);
 }
}
