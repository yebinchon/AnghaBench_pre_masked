
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct taskqgroup {int tqg_cnt; TYPE_1__* tqg_queue; } ;
struct taskq_bind_task {int bt_task; int bt_cpuid; } ;
struct TYPE_2__ {int tgc_taskq; int tgc_cpu; } ;


 int FUNC_0 (int *,int ,int ,int ,struct taskq_bind_task*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 struct taskq_bind_task* FUNC_2 (int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct taskqgroup *VAR_3)
{
 struct taskq_bind_task *VAR_4;
 int VAR_5;





 if (VAR_3->tqg_cnt == 1)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3->tqg_cnt; VAR_5++) {
  VAR_4 = FUNC_2(sizeof (*VAR_4), VAR_0, VAR_1);
  FUNC_0(&VAR_4->bt_task, 0, 0, VAR_2, VAR_4);
  VAR_4->bt_cpuid = VAR_3->tqg_queue[VAR_5].tgc_cpu;
  FUNC_1(VAR_3->tqg_queue[VAR_5].tgc_taskq,
      &VAR_4->bt_task);
 }
}
