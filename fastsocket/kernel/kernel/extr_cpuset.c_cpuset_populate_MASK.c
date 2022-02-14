
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys {int dummy; } ;
struct cgroup {int parent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cgroup*,struct cgroup_subsys*,int *) ;
 int FUNC_2 (struct cgroup*,struct cgroup_subsys*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct cgroup_subsys *VAR_2, struct cgroup *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_2, VAR_1, FUNC_0(VAR_1));
 if (VAR_4)
  return VAR_4;

 if (!VAR_3->parent)
  VAR_4 = FUNC_1(VAR_3, VAR_2,
          &VAR_0);
 return VAR_4;
}
