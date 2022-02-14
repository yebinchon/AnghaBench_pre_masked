
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskqgroup_cpu {int tgc_cpu; int tgc_taskq; int tgc_tasks; } ;
struct taskqgroup {int tqg_name; struct taskqgroup_cpu* tqg_queue; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int,int ,char*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct taskqgroup *VAR_3, int VAR_4, int VAR_5)
{
 struct taskqgroup_cpu *VAR_6;

 VAR_6 = &VAR_3->tqg_queue[VAR_4];
 FUNC_0(&VAR_6->tgc_tasks);
 VAR_6->tgc_taskq = FUNC_1(((void*)0), VAR_0,
     VAR_2, &VAR_6->tgc_taskq);
 FUNC_2(&VAR_6->tgc_taskq, 1, VAR_1,
     "%s_%d", VAR_3->tqg_name, VAR_4);
 VAR_6->tgc_cpu = VAR_5;
}
