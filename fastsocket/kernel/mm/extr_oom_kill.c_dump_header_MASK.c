
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;
struct TYPE_7__ {TYPE_1__* signal; int comm; } ;
struct TYPE_6__ {int oom_score_adj; int oom_adj; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct mem_cgroup*,int const*) ;
 int FUNC_3 (struct mem_cgroup*,struct task_struct*) ;
 int FUNC_4 (char*,int ,int ,int,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(struct task_struct *VAR_3, gfp_t VAR_4, int VAR_5,
   struct mem_cgroup *VAR_6, const nodemask_t *VAR_7)
{
 FUNC_6(VAR_1);
 FUNC_4("%s invoked oom-killer: gfp_mask=0x%x, order=%d, "
  "oom_adj=%d, oom_score_adj=%d\n",
  VAR_1->comm, VAR_4, VAR_5, VAR_1->signal->oom_adj,
  VAR_1->signal->oom_score_adj);
 FUNC_0(VAR_1);
 FUNC_7(VAR_1);
 FUNC_1();
 FUNC_3(VAR_6, VAR_3);
 FUNC_5(VAR_0);
 if (VAR_2)
  FUNC_2(VAR_6, VAR_7);
}
