
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_rgid; scalar_t__ cr_svgid; scalar_t__* cr_groups; } ;
struct thread {struct proc* td_proc; } ;
struct setegid_args {scalar_t__ egid; } ;
struct proc {int dummy; } ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct ucred*,scalar_t__) ;
 struct ucred* FUNC_4 (struct proc*,struct ucred*) ;
 int FUNC_5 (struct ucred*) ;
 struct ucred* FUNC_6 () ;
 int FUNC_7 (struct ucred*,scalar_t__) ;
 int FUNC_8 (struct ucred*,int ) ;
 int FUNC_9 (struct proc*,struct ucred*) ;
 int FUNC_10 (struct proc*) ;

int
FUNC_11(struct thread *VAR_1, struct setegid_args *VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;
 struct ucred *VAR_4, *VAR_5;
 gid_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->egid;
 FUNC_0(VAR_6);
 VAR_4 = FUNC_6();
 FUNC_1(VAR_3);
 VAR_5 = FUNC_4(VAR_3, VAR_4);







 if (VAR_6 != VAR_5->cr_rgid &&
     VAR_6 != VAR_5->cr_svgid &&
     (VAR_7 = FUNC_8(VAR_5, VAR_0)) != 0)
  goto fail;

 if (VAR_5->cr_groups[0] != VAR_6) {
  FUNC_3(VAR_4, VAR_6);
  FUNC_10(VAR_3);
 }
 FUNC_9(VAR_3, VAR_4);
 FUNC_2(VAR_3);
 FUNC_5(VAR_5);
 return (0);

fail:
 FUNC_2(VAR_3);
 FUNC_5(VAR_4);
 return (VAR_7);
}
