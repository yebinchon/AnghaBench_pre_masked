
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int comm; int pid; } ;
struct audit_context {int target_comm; int target_sid; int target_sessionid; int target_uid; int target_auid; int target_pid; } ;
struct TYPE_2__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct task_struct*,int *) ;
 int FUNC_4 (struct task_struct*) ;

void FUNC_5(struct task_struct *VAR_2)
{
 struct audit_context *VAR_3 = VAR_1->audit_context;

 VAR_3->target_pid = VAR_2->pid;
 VAR_3->target_auid = FUNC_0(VAR_2);
 VAR_3->target_uid = FUNC_4(VAR_2);
 VAR_3->target_sessionid = FUNC_1(VAR_2);
 FUNC_3(VAR_2, &VAR_3->target_sid);
 FUNC_2(VAR_3->target_comm, VAR_2->comm, VAR_0);
}
