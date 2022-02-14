
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct cred {TYPE_1__* tgcred; int gid; int uid; } ;
struct TYPE_2__ {int lock; struct key* process_keyring; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 struct key* FUNC_3 (char*,int ,int ,struct cred*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct cred *VAR_2)
{
 struct key *VAR_3;
 int VAR_4;

 if (VAR_2->tgcred->process_keyring)
  return -VAR_0;

 VAR_3 = FUNC_3("_pid", VAR_2->uid, VAR_2->gid,
    VAR_2, VAR_1, ((void*)0));
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_4(&VAR_2->tgcred->lock);
 if (!VAR_2->tgcred->process_keyring) {
  VAR_2->tgcred->process_keyring = VAR_3;
  VAR_3 = ((void*)0);
  VAR_4 = 0;
 } else {
  VAR_4 = -VAR_0;
 }
 FUNC_5(&VAR_2->tgcred->lock);
 FUNC_2(VAR_3);
 return VAR_4;
}
