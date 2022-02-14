
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_iter {int * cg_link; } ;
struct cgroup {int css_sets; } ;


 int FUNC_0 (struct cgroup*,struct cgroup_iter*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3(struct cgroup *VAR_2, struct cgroup_iter *VAR_3)
{





 if (!VAR_1)
  FUNC_1();

 FUNC_2(&VAR_0);
 VAR_3->cg_link = &VAR_2->css_sets;
 FUNC_0(VAR_2, VAR_3);
}
