
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
struct sysctl_req {int dummy; } ;
struct proc {int p_flag; TYPE_2__* p_ucred; TYPE_3__* p_session; TYPE_1__* p_pgrp; } ;
struct kern_proc_out_args {int* name; int oid_number; int flags; struct sysctl_req* req; } ;
typedef int pid_t ;
typedef int gid_t ;
typedef int dev_t ;
struct TYPE_7__ {int * s_ttyp; int s_sid; } ;
struct TYPE_6__ {int cr_ruid; int cr_uid; int cr_rgid; int cr_gid; } ;
struct TYPE_5__ {int pg_id; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,struct proc*) ;
 int FUNC_7 (struct proc*,struct sysctl_req*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct proc *VAR_3, void *VAR_4)
{
 struct kern_proc_out_args *VAR_5 = VAR_4;
 int *VAR_6 = VAR_5->name;
 int VAR_7 = VAR_5->oid_number;
 int VAR_8 = VAR_5->flags;
 struct sysctl_req *VAR_9 = VAR_5->req;
 int VAR_10 = 0;

 FUNC_1(VAR_3);

 FUNC_0(VAR_3->p_ucred != ((void*)0),
     ("process credential is NULL for non-NEW proc"));



 if (FUNC_6(VAR_2, VAR_3))
  goto skip;




 switch (VAR_7) {

 case 135:
  if (VAR_3->p_ucred->cr_gid != (gid_t)VAR_6[0])
   goto skip;
  break;

 case 134:

  if (VAR_3->p_pgrp == ((void*)0) ||
      VAR_3->p_pgrp->pg_id != (pid_t)VAR_6[0])
   goto skip;
  break;

 case 132:
  if (VAR_3->p_ucred->cr_rgid != (gid_t)VAR_6[0])
   goto skip;
  break;

 case 130:
  if (VAR_3->p_session == ((void*)0) ||
      VAR_3->p_session->s_sid != (pid_t)VAR_6[0])
   goto skip;
  break;

 case 129:
  if ((VAR_3->p_flag & VAR_1) == 0 ||
      VAR_3->p_session == ((void*)0))
   goto skip;

  FUNC_4(VAR_3->p_session);
  if (VAR_3->p_session->s_ttyp == ((void*)0) ||
      FUNC_8(VAR_3->p_session->s_ttyp) !=
      (dev_t)VAR_6[0]) {
   FUNC_5(VAR_3->p_session);
   goto skip;
  }
  FUNC_5(VAR_3->p_session);
  break;

 case 128:
  if (VAR_3->p_ucred->cr_uid != (uid_t)VAR_6[0])
   goto skip;
  break;

 case 131:
  if (VAR_3->p_ucred->cr_ruid != (uid_t)VAR_6[0])
   goto skip;
  break;

 case 133:
  break;

 default:
  break;

 }
 VAR_10 = FUNC_7(VAR_3, VAR_9, VAR_8);
 FUNC_2(VAR_3, VAR_0);
 return (VAR_10);
skip:
 FUNC_3(VAR_3);
 return (0);
}
