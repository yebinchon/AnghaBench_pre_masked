
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_group_cred {int session_keyring; int * process_keyring; int lock; int usage; } ;
struct task_struct {struct cred* real_cred; struct cred* cred; int * replacement_session_keyring; int cred_guard_mutex; } ;
struct cred {TYPE_1__* user; struct thread_group_cred* tgcred; int * thread_keyring; int usage; } ;
struct TYPE_2__ {int processes; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cred*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct cred*) ;
 void* FUNC_5 (struct cred*) ;
 int FUNC_6 (struct cred*) ;
 int FUNC_7 (char*,struct cred*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 struct thread_group_cred* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 struct cred* FUNC_12 () ;
 int FUNC_13 (struct cred*) ;
 int FUNC_14 (struct cred*) ;
 int FUNC_15 (struct cred*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct cred*) ;

int FUNC_18(struct task_struct *VAR_4, unsigned long VAR_5)
{



 struct cred *VAR_6;
 int VAR_7;

 FUNC_11(&VAR_4->cred_guard_mutex);
 VAR_4->replacement_session_keyring = ((void*)0);

 if (



  VAR_5 & VAR_1
     ) {
  VAR_4->real_cred = FUNC_5(VAR_4->cred);
  FUNC_5(VAR_4->cred);
  FUNC_0(VAR_4->cred, 2);
  FUNC_7("share_creds(%p{%d,%d})",
         VAR_4->cred, FUNC_2(&VAR_4->cred->usage),
         FUNC_14(VAR_4->cred));
  FUNC_1(&VAR_4->cred->user->processes);
  return 0;
 }

 VAR_6 = FUNC_12();
 if (!VAR_6)
  return -VAR_2;

 if (VAR_5 & VAR_0) {
  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 < 0)
   goto error_put;
 }
 FUNC_1(&VAR_6->user->processes);
 VAR_4->cred = VAR_4->real_cred = FUNC_5(VAR_6);
 FUNC_0(VAR_6, 2);
 FUNC_17(VAR_6);
 return 0;

error_put:
 FUNC_13(VAR_6);
 return VAR_7;
}
