
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_svuid; int cr_uid; int cr_ruid; } ;
struct thread {struct ucred* td_ucred; } ;
struct getresuid_args {int suid; int euid; int ruid; } ;


 int FUNC_0 (int *,int ,int) ;

int
FUNC_1(struct thread *VAR_0, struct getresuid_args *VAR_1)
{
 struct ucred *VAR_2;
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;

 VAR_2 = VAR_0->td_ucred;
 if (VAR_1->ruid)
  VAR_3 = FUNC_0(&VAR_2->cr_ruid,
      VAR_1->ruid, sizeof(VAR_2->cr_ruid));
 if (VAR_1->euid)
  VAR_4 = FUNC_0(&VAR_2->cr_uid,
      VAR_1->euid, sizeof(VAR_2->cr_uid));
 if (VAR_1->suid)
  VAR_5 = FUNC_0(&VAR_2->cr_svuid,
      VAR_1->suid, sizeof(VAR_2->cr_svuid));
 return (VAR_3 ? VAR_3 : VAR_4 ? VAR_4 : VAR_5);
}
