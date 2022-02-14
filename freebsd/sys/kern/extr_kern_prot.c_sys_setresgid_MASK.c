
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_rgid; scalar_t__ cr_svgid; scalar_t__* cr_groups; } ;
struct thread {struct proc* td_proc; } ;
struct setresgid_args {scalar_t__ egid; scalar_t__ rgid; scalar_t__ sgid; } ;
struct proc {int dummy; } ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct ucred*,scalar_t__) ;
 int FUNC_6 (struct ucred*,scalar_t__) ;
 int FUNC_7 (struct ucred*,scalar_t__) ;
 struct ucred* FUNC_8 (struct proc*,struct ucred*) ;
 int FUNC_9 (struct ucred*) ;
 struct ucred* FUNC_10 () ;
 int FUNC_11 (struct ucred*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct ucred*,int ) ;
 int FUNC_13 (struct proc*,struct ucred*) ;
 int FUNC_14 (struct proc*) ;

int
FUNC_15(struct thread *VAR_1, struct setresgid_args *VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;
 struct ucred *VAR_4, *VAR_5;
 gid_t VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = VAR_2->egid;
 VAR_7 = VAR_2->rgid;
 VAR_8 = VAR_2->sgid;
 FUNC_0(VAR_6);
 FUNC_1(VAR_7);
 FUNC_2(VAR_8);
 VAR_4 = FUNC_10();
 FUNC_3(VAR_3);
 VAR_5 = FUNC_8(VAR_3, VAR_4);







 if (((VAR_7 != (gid_t)-1 && VAR_7 != VAR_5->cr_rgid &&
       VAR_7 != VAR_5->cr_svgid &&
       VAR_7 != VAR_5->cr_groups[0]) ||
      (VAR_6 != (gid_t)-1 && VAR_6 != VAR_5->cr_rgid &&
       VAR_6 != VAR_5->cr_svgid &&
       VAR_6 != VAR_5->cr_groups[0]) ||
      (VAR_8 != (gid_t)-1 && VAR_8 != VAR_5->cr_rgid &&
       VAR_8 != VAR_5->cr_svgid &&
       VAR_8 != VAR_5->cr_groups[0])) &&
     (VAR_9 = FUNC_12(VAR_5, VAR_0)) != 0)
  goto fail;

 if (VAR_6 != (gid_t)-1 && VAR_5->cr_groups[0] != VAR_6) {
  FUNC_5(VAR_4, VAR_6);
  FUNC_14(VAR_3);
 }
 if (VAR_7 != (gid_t)-1 && VAR_5->cr_rgid != VAR_7) {
  FUNC_6(VAR_4, VAR_7);
  FUNC_14(VAR_3);
 }
 if (VAR_8 != (gid_t)-1 && VAR_5->cr_svgid != VAR_8) {
  FUNC_7(VAR_4, VAR_8);
  FUNC_14(VAR_3);
 }
 FUNC_13(VAR_3, VAR_4);
 FUNC_4(VAR_3);
 FUNC_9(VAR_5);
 return (0);

fail:
 FUNC_4(VAR_3);
 FUNC_9(VAR_4);
 return (VAR_9);
}
