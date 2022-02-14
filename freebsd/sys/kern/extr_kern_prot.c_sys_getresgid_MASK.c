
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_svgid; int * cr_groups; int cr_rgid; } ;
struct thread {struct ucred* td_ucred; } ;
struct getresgid_args {int sgid; int egid; int rgid; } ;


 int FUNC_0 (int *,int ,int) ;

int
FUNC_1(struct thread *VAR_0, struct getresgid_args *VAR_1)
{
 struct ucred *VAR_2;
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;

 VAR_2 = VAR_0->td_ucred;
 if (VAR_1->rgid)
  VAR_3 = FUNC_0(&VAR_2->cr_rgid,
      VAR_1->rgid, sizeof(VAR_2->cr_rgid));
 if (VAR_1->egid)
  VAR_4 = FUNC_0(&VAR_2->cr_groups[0],
      VAR_1->egid, sizeof(VAR_2->cr_groups[0]));
 if (VAR_1->sgid)
  VAR_5 = FUNC_0(&VAR_2->cr_svgid,
      VAR_1->sgid, sizeof(VAR_2->cr_svgid));
 return (VAR_3 ? VAR_3 : VAR_4 ? VAR_4 : VAR_5);
}
