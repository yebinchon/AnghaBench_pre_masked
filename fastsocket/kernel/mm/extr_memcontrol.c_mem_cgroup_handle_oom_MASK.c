
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int task_list; int private; int func; scalar_t__ flags; } ;
struct oom_wait_info {TYPE_1__ wait; struct mem_cgroup* mem; } ;
struct mem_cgroup {scalar_t__ oom_kill_disable; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct mem_cgroup*) ;
 int FUNC_4 (struct mem_cgroup*) ;
 int FUNC_5 (struct mem_cgroup*) ;
 int FUNC_6 (struct mem_cgroup*) ;
 int FUNC_7 (struct mem_cgroup*,int ) ;
 int FUNC_8 (struct mem_cgroup*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct mem_cgroup*) ;
 int FUNC_10 (int *,TYPE_1__*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ) ;

bool FUNC_16(struct mem_cgroup *VAR_6, gfp_t VAR_7)
{
 struct oom_wait_info VAR_8;
 bool VAR_9, VAR_10;

 VAR_8.mem = VAR_6;
 VAR_8.wait.flags = 0;
 VAR_8.wait.func = VAR_5;
 VAR_8.wait.private = VAR_2;
 FUNC_0(&VAR_8.wait.task_list);
 VAR_10 = 1;
 FUNC_3(VAR_6);


 FUNC_13(&VAR_3);
 VAR_9 = FUNC_4(VAR_6);





 FUNC_10(&VAR_4, &VAR_8.wait, VAR_0);
 if (!VAR_9 || VAR_6->oom_kill_disable)
  VAR_10 = 0;
 if (VAR_9)
  FUNC_5(VAR_6);
 FUNC_14(&VAR_3);

 if (VAR_10) {
  FUNC_2(&VAR_4, &VAR_8.wait);
  FUNC_7(VAR_6, VAR_7);
 } else {
  FUNC_11();
  FUNC_2(&VAR_4, &VAR_8.wait);
 }
 FUNC_13(&VAR_3);
 if (VAR_9)
  FUNC_6(VAR_6);
 FUNC_9(VAR_6);
 FUNC_14(&VAR_3);

 FUNC_8(VAR_6);

 if (FUNC_15(VAR_1) || FUNC_1(VAR_2))
  return 0;

 FUNC_12(1);
 return 1;
}
