
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int * replacement_session_keyring; TYPE_1__* cred; int * real_cred; int pid; } ;
struct cred {int dummy; } ;
struct TYPE_3__ {int usage; } ;


 int FUNC_0 (struct cred*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int *,TYPE_1__*,int ,int ) ;
 int FUNC_3 (struct cred*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct cred*) ;

void FUNC_6(struct task_struct *VAR_0)
{
 struct cred *VAR_1;

 FUNC_2("exit_creds(%u,%p,%p,{%d,%d})", VAR_0->pid, VAR_0->real_cred, VAR_0->cred,
        FUNC_1(&VAR_0->cred->usage),
        FUNC_4(VAR_0->cred));

 VAR_1 = (struct cred *) VAR_0->real_cred;
 VAR_0->real_cred = ((void*)0);
 FUNC_5(VAR_1);
 FUNC_0(VAR_1, -1);
 FUNC_3(VAR_1);

 VAR_1 = (struct cred *) VAR_0->cred;
 VAR_0->cred = ((void*)0);
 FUNC_5(VAR_1);
 FUNC_0(VAR_1, -1);
 FUNC_3(VAR_1);

 VAR_1 = (struct cred *) VAR_0->replacement_session_keyring;
 if (VAR_1) {
  VAR_0->replacement_session_keyring = ((void*)0);
  FUNC_5(VAR_1);
  FUNC_3(VAR_1);
 }
}
