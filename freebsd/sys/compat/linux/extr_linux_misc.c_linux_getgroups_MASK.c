
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_ngroups; int * cr_groups; } ;
struct thread {int* td_retval; struct ucred* td_ucred; } ;
struct linux_getgroups_args {int gidsetsize; int grouplist; } ;
typedef int l_gid_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int,int ,int ) ;

int
FUNC_3(struct thread *VAR_3, struct linux_getgroups_args *VAR_4)
{
 struct ucred *VAR_5;
 l_gid_t *VAR_6;
 gid_t *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_5 = VAR_3->td_ucred;
 VAR_7 = VAR_5->cr_groups;
 VAR_8 = VAR_5->cr_ngroups - 1;







 if ((VAR_9 = VAR_4->gidsetsize) == 0) {
  VAR_3->td_retval[0] = VAR_8;
  return (0);
 }

 if (VAR_9 < VAR_8)
  return (VAR_0);

 VAR_9 = 0;
 VAR_6 = FUNC_2(VAR_8 * sizeof(*VAR_6),
     VAR_1, VAR_2);
 while (VAR_9 < VAR_8) {
  VAR_6[VAR_9] = VAR_7[VAR_9 + 1];
  VAR_9++;
 }

 VAR_10 = FUNC_0(VAR_6, VAR_4->grouplist, VAR_9 * sizeof(l_gid_t));
 FUNC_1(VAR_6, VAR_1);
 if (VAR_10)
  return (VAR_10);

 VAR_3->td_retval[0] = VAR_9;
 return (0);
}
