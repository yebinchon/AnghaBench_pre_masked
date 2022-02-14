
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_rgid; scalar_t__ cr_svgid; scalar_t__* cr_groups; } ;
struct thread {struct proc* td_proc; } ;
struct setregid_args {scalar_t__ egid; scalar_t__ rgid; } ;
struct proc {int dummy; } ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct ucred*,scalar_t__) ;
 int FUNC_5 (struct ucred*,scalar_t__) ;
 int FUNC_6 (struct ucred*,scalar_t__) ;
 struct ucred* FUNC_7 (struct proc*,struct ucred*) ;
 int FUNC_8 (struct ucred*) ;
 struct ucred* FUNC_9 () ;
 int FUNC_10 (struct ucred*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct ucred*,int ) ;
 int FUNC_12 (struct proc*,struct ucred*) ;
 int FUNC_13 (struct proc*) ;

int
FUNC_14(struct thread *VAR_1, struct setregid_args *VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;
 struct ucred *VAR_4, *VAR_5;
 gid_t VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_2->egid;
 VAR_7 = VAR_2->rgid;
 FUNC_0(VAR_6);
 FUNC_1(VAR_7);
 VAR_4 = FUNC_9();
 FUNC_2(VAR_3);
 VAR_5 = FUNC_7(VAR_3, VAR_4);







 if (((VAR_7 != (gid_t)-1 && VAR_7 != VAR_5->cr_rgid &&
     VAR_7 != VAR_5->cr_svgid) ||
      (VAR_6 != (gid_t)-1 && VAR_6 != VAR_5->cr_groups[0] &&
      VAR_6 != VAR_5->cr_rgid && VAR_6 != VAR_5->cr_svgid)) &&
     (VAR_8 = FUNC_11(VAR_5, VAR_0)) != 0)
  goto fail;

 if (VAR_6 != (gid_t)-1 && VAR_5->cr_groups[0] != VAR_6) {
  FUNC_4(VAR_4, VAR_6);
  FUNC_13(VAR_3);
 }
 if (VAR_7 != (gid_t)-1 && VAR_5->cr_rgid != VAR_7) {
  FUNC_5(VAR_4, VAR_7);
  FUNC_13(VAR_3);
 }
 if ((VAR_7 != (gid_t)-1 || VAR_4->cr_groups[0] != VAR_4->cr_rgid) &&
     VAR_4->cr_svgid != VAR_4->cr_groups[0]) {
  FUNC_6(VAR_4, VAR_4->cr_groups[0]);
  FUNC_13(VAR_3);
 }
 FUNC_12(VAR_3, VAR_4);
 FUNC_3(VAR_3);
 FUNC_8(VAR_5);
 return (0);

fail:
 FUNC_3(VAR_3);
 FUNC_8(VAR_4);
 return (VAR_8);
}
