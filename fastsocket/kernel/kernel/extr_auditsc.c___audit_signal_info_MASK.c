
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uid_t ;
struct task_struct {scalar_t__ tgid; int loginuid; int comm; int pid; struct audit_context* audit_context; } ;
struct audit_context {scalar_t__ target_pid; void* aux_pids; int target_comm; int target_sid; void* target_sessionid; void* target_uid; void* target_auid; } ;
struct TYPE_2__ {void* next; int type; } ;
struct audit_aux_data_pids {size_t pid_count; scalar_t__* target_pid; int * target_comm; int * target_sid; void** target_sessionid; void** target_uid; void** target_auid; TYPE_1__ d; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 (struct task_struct*) ;
 void* FUNC_3 (struct task_struct*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct task_struct* VAR_14 ;
 void* FUNC_4 () ;
 struct audit_aux_data_pids* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct task_struct*,int *) ;
 void* FUNC_8 (struct task_struct*) ;

int FUNC_9(int VAR_15, struct task_struct *VAR_16)
{
 struct audit_aux_data_pids *VAR_17;
 struct task_struct *VAR_18 = VAR_14;
 struct audit_context *VAR_19 = VAR_18->audit_context;
 uid_t VAR_20 = FUNC_4(), VAR_21 = FUNC_8(VAR_16);

 if (VAR_9 && VAR_16->tgid == VAR_9) {
  if (VAR_15 == VAR_5 || VAR_15 == VAR_4 || VAR_15 == VAR_6 || VAR_15 == VAR_7) {
   VAR_10 = VAR_18->pid;
   if (VAR_18->loginuid != -1)
    VAR_12 = VAR_18->loginuid;
   else
    VAR_12 = VAR_20;
   FUNC_7(VAR_18, &VAR_11);
  }
  if (!VAR_13 || FUNC_1())
   return 0;
 }



 if (!VAR_19->target_pid) {
  VAR_19->target_pid = VAR_16->tgid;
  VAR_19->target_auid = FUNC_2(VAR_16);
  VAR_19->target_uid = VAR_21;
  VAR_19->target_sessionid = FUNC_3(VAR_16);
  FUNC_7(VAR_16, &VAR_19->target_sid);
  FUNC_6(VAR_19->target_comm, VAR_16->comm, VAR_8);
  return 0;
 }

 VAR_17 = (void *)VAR_19->aux_pids;
 if (!VAR_17 || VAR_17->pid_count == VAR_0) {
  VAR_17 = FUNC_5(sizeof(*VAR_17), VAR_3);
  if (!VAR_17)
   return -VAR_2;

  VAR_17->d.type = VAR_1;
  VAR_17->d.next = VAR_19->aux_pids;
  VAR_19->aux_pids = (void *)VAR_17;
 }
 FUNC_0(VAR_17->pid_count >= VAR_0);

 VAR_17->target_pid[VAR_17->pid_count] = VAR_16->tgid;
 VAR_17->target_auid[VAR_17->pid_count] = FUNC_2(VAR_16);
 VAR_17->target_uid[VAR_17->pid_count] = VAR_21;
 VAR_17->target_sessionid[VAR_17->pid_count] = FUNC_3(VAR_16);
 FUNC_7(VAR_16, &VAR_17->target_sid[VAR_17->pid_count]);
 FUNC_6(VAR_17->target_comm[VAR_17->pid_count], VAR_16->comm, VAR_8);
 VAR_17->pid_count++;

 return 0;
}
