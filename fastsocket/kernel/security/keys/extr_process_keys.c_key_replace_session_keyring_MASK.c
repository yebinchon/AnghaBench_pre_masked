
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cred {TYPE_1__* tgcred; void* thread_keyring; int jit_keyring; int cap_bset; int cap_effective; int cap_permitted; int cap_inheritable; int securebits; int group_info; int user; int fsgid; int sgid; int egid; int gid; int fsuid; int suid; int euid; int uid; } ;
struct TYPE_4__ {struct cred* replacement_session_keyring; } ;
struct TYPE_3__ {void* process_keyring; int tgid; } ;


 int FUNC_0 (struct cred*) ;
 TYPE_2__* VAR_0 ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (struct cred*,struct cred const*) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 const struct cred *VAR_2;
 struct cred *VAR_3;

 if (!VAR_0->replacement_session_keyring)
  return;

 FUNC_6(&VAR_1);
 VAR_3 = VAR_0->replacement_session_keyring;
 VAR_0->replacement_session_keyring = ((void*)0);
 FUNC_7(&VAR_1);

 if (!VAR_3)
  return;

 VAR_2 = FUNC_1();
 VAR_3-> uid = VAR_2-> uid;
 VAR_3-> euid = VAR_2-> euid;
 VAR_3-> suid = VAR_2-> suid;
 VAR_3->fsuid = VAR_2->fsuid;
 VAR_3-> gid = VAR_2-> gid;
 VAR_3-> egid = VAR_2-> egid;
 VAR_3-> sgid = VAR_2-> sgid;
 VAR_3->fsgid = VAR_2->fsgid;
 VAR_3->user = FUNC_3(VAR_2->user);
 VAR_3->group_info = FUNC_2(VAR_2->group_info);

 VAR_3->securebits = VAR_2->securebits;
 VAR_3->cap_inheritable = VAR_2->cap_inheritable;
 VAR_3->cap_permitted = VAR_2->cap_permitted;
 VAR_3->cap_effective = VAR_2->cap_effective;
 VAR_3->cap_bset = VAR_2->cap_bset;

 VAR_3->jit_keyring = VAR_2->jit_keyring;
 VAR_3->thread_keyring = FUNC_4(VAR_2->thread_keyring);
 VAR_3->tgcred->tgid = VAR_2->tgcred->tgid;
 VAR_3->tgcred->process_keyring = FUNC_4(VAR_2->tgcred->process_keyring);

 FUNC_5(VAR_3, VAR_2);

 FUNC_0(VAR_3);
}
