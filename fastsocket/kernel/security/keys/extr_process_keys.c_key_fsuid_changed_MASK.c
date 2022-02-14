
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_1__* cred; } ;
struct TYPE_4__ {int sem; int uid; } ;
struct TYPE_3__ {TYPE_2__* thread_keyring; int fsuid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct task_struct *VAR_0)
{

 FUNC_0(!VAR_0->cred);
 if (VAR_0->cred->thread_keyring) {
  FUNC_1(&VAR_0->cred->thread_keyring->sem);
  VAR_0->cred->thread_keyring->uid = VAR_0->cred->fsuid;
  FUNC_2(&VAR_0->cred->thread_keyring->sem);
 }
}
