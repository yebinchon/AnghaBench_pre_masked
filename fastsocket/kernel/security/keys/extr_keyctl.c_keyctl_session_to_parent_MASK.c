
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int pid; struct cred* replacement_session_keyring; int mm; struct task_struct* real_parent; } ;
struct cred {scalar_t__ uid; scalar_t__ euid; scalar_t__ suid; scalar_t__ gid; scalar_t__ egid; scalar_t__ sgid; TYPE_1__* tgcred; } ;
typedef int * key_ref_t ;
struct TYPE_5__ {scalar_t__ uid; } ;
struct TYPE_4__ {TYPE_2__* session_keyring; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_1 (int *) ;
 int VAR_5 ;
 struct cred* FUNC_2 (struct task_struct*) ;
 struct cred* FUNC_3 () ;
 struct task_struct* VAR_6 ;
 struct cred* FUNC_4 () ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct cred*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct cred const*,struct cred const*,TYPE_2__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct task_struct*) ;
 int VAR_7 ;
 int FUNC_14 (struct task_struct*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

long FUNC_17(void)
{
 return -VAR_1;

}
