
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ucred {int cr_ngroups; int cr_groups; } ;
struct thread {int* td_retval; struct ucred* td_ucred; } ;
struct getgroups_args {scalar_t__ gidsetsize; int gidset; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(struct thread *VAR_1, struct getgroups_args *VAR_2)
{
 struct ucred *VAR_3;
 u_int VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->td_ucred;
 VAR_4 = VAR_3->cr_ngroups;

 if (VAR_2->gidsetsize == 0) {
  VAR_5 = 0;
  goto out;
 }
 if (VAR_2->gidsetsize < VAR_4)
  return (VAR_0);

 VAR_5 = FUNC_0(VAR_3->cr_groups, VAR_2->gidset, VAR_4 * sizeof(gid_t));
out:
 VAR_1->td_retval[0] = VAR_4;
 return (VAR_5);
}
