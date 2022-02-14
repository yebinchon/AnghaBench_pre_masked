
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct freezer {int state; } ;
struct cgroup_iter {int dummy; } ;
struct cgroup {int dummy; } ;
typedef enum freezer_state { ____Placeholder_freezer_state } freezer_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cgroup*,struct cgroup_iter*) ;
 struct task_struct* FUNC_2 (struct cgroup*,struct cgroup_iter*) ;
 int FUNC_3 (struct cgroup*,struct cgroup_iter*) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct cgroup *VAR_3,
     struct freezer *VAR_4)
{
 struct cgroup_iter VAR_5;
 struct task_struct *VAR_6;
 unsigned int VAR_7 = 0, VAR_8 = 0;
 enum freezer_state VAR_9 = VAR_4->state;

 FUNC_3(VAR_3, &VAR_5);
 while ((VAR_6 = FUNC_2(VAR_3, &VAR_5))) {
  VAR_8++;
  if (FUNC_4(VAR_6))
   VAR_7++;
 }

 if (VAR_9 == VAR_2) {
  FUNC_0(VAR_7 > 0);
 } else if (VAR_9 == VAR_0) {
  if (VAR_7 == VAR_8)
   VAR_4->state = VAR_1;
 } else {
  FUNC_0(VAR_7 != VAR_8);
 }

 FUNC_1(VAR_3, &VAR_5);
}
