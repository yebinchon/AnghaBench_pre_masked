
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct cred const* cred; struct cred const* real_cred; scalar_t__ pdeath_signal; scalar_t__ mm; } ;
typedef struct cred {scalar_t__ euid; scalar_t__ egid; scalar_t__ fsuid; scalar_t__ fsgid; scalar_t__ uid; scalar_t__ suid; scalar_t__ gid; scalar_t__ sgid; TYPE_1__* user; int cap_permitted; int usage; } const cred ;
struct TYPE_2__ {int processes; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cred const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 struct task_struct* VAR_2 ;
 int FUNC_6 (struct cred const*) ;
 int FUNC_7 (char*,struct cred const*,int,int) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*,int ) ;
 int FUNC_11 (struct cred const*) ;
 int FUNC_12 (struct cred const*,struct cred const*) ;
 int FUNC_13 (struct cred const*) ;
 int FUNC_14 (struct task_struct*) ;
 int FUNC_15 (struct cred const*,struct cred const*) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 () ;
 int VAR_3 ;
 int FUNC_18 (struct cred const*) ;

int FUNC_19(struct cred *VAR_4)
{
 struct task_struct *VAR_5 = VAR_2;
 const struct cred *VAR_6 = VAR_5->real_cred;

 FUNC_7("commit_creds(%p{%d,%d})", VAR_4,
        FUNC_4(&VAR_4->usage),
        FUNC_13(VAR_4));

 FUNC_0(VAR_5->cred != VAR_6);





 FUNC_0(FUNC_4(&VAR_4->usage) < 1);

 FUNC_15(VAR_4, VAR_6);

 FUNC_6(VAR_4);


 if (VAR_6->euid != VAR_4->euid ||
     VAR_6->egid != VAR_4->egid ||
     VAR_6->fsuid != VAR_4->fsuid ||
     VAR_6->fsgid != VAR_4->fsgid ||
     !FUNC_5(VAR_4->cap_permitted, VAR_6->cap_permitted)) {
  if (VAR_5->mm)
   FUNC_16(VAR_5->mm, VAR_3);
  VAR_5->pdeath_signal = 0;
  FUNC_17();
 }


 if (VAR_4->fsuid != VAR_6->fsuid)
  FUNC_9(VAR_5);
 if (VAR_4->fsgid != VAR_6->fsgid)
  FUNC_8(VAR_5);







 FUNC_1(VAR_4, 2);
 if (VAR_4->user != VAR_6->user)
  FUNC_3(&VAR_4->user->processes);
 FUNC_12(VAR_5->real_cred, VAR_4);
 FUNC_12(VAR_5->cred, VAR_4);
 if (VAR_4->user != VAR_6->user)
  FUNC_2(&VAR_6->user->processes);
 FUNC_1(VAR_6, -2);

 FUNC_14(VAR_5);


 if (VAR_4->uid != VAR_6->uid ||
     VAR_4->euid != VAR_6->euid ||
     VAR_4->suid != VAR_6->suid ||
     VAR_4->fsuid != VAR_6->fsuid)
  FUNC_10(VAR_5, VAR_1);

 if (VAR_4->gid != VAR_6->gid ||
     VAR_4->egid != VAR_6->egid ||
     VAR_4->sgid != VAR_6->sgid ||
     VAR_4->fsgid != VAR_6->fsgid)
  FUNC_10(VAR_5, VAR_0);


 FUNC_11(VAR_6);
 FUNC_11(VAR_6);
 return 0;
}
