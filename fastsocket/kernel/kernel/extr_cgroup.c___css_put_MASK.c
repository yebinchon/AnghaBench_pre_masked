
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int refcnt; struct cgroup* cgroup; } ;
struct cgroup {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct cgroup*) ;
 int FUNC_3 (struct cgroup*) ;
 scalar_t__ FUNC_4 (struct cgroup*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct cgroup_subsys_state *VAR_1, int VAR_2)
{
 struct cgroup *VAR_3 = VAR_1->cgroup;
 int VAR_4;
 FUNC_5();
 VAR_4 = FUNC_1(VAR_2, &VAR_1->refcnt);
 if (VAR_4 == 1) {
  if (FUNC_4(VAR_3)) {
   FUNC_7(VAR_0, &VAR_3->flags);
   FUNC_3(VAR_3);
  }
  FUNC_2(VAR_3);
 }
 FUNC_6();
 FUNC_0(VAR_4 < 1);
}
