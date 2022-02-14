
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vop_advlock_args {int a_flags; int a_op; struct flock* a_fl; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {TYPE_1__* td_proc; struct ucred* td_ucred; } ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ start; scalar_t__ end; int pid; } ;
struct fuse_lk_out {TYPE_3__ lk; } ;
struct TYPE_6__ {scalar_t__ start; scalar_t__ end; scalar_t__ type; int pid; } ;
struct fuse_lk_in {TYPE_2__ lk; int owner; int fh; } ;
struct fuse_filehandle {int fh_id; } ;
struct fuse_dispatcher {struct fuse_lk_out* answ; struct fuse_lk_in* indata; } ;
struct flock {scalar_t__ l_start; scalar_t__ l_len; scalar_t__ l_type; int l_pid; } ;
typedef int pid_t ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;
struct TYPE_8__ {int dataflags; } ;
struct TYPE_5__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct thread* VAR_9 ;
 int FUNC_0 (struct fuse_dispatcher*) ;
 int FUNC_1 (struct fuse_dispatcher*,int) ;
 int FUNC_2 (struct fuse_dispatcher*,int,struct vnode*,struct thread*,struct ucred*) ;
 int FUNC_3 (struct fuse_dispatcher*) ;
 int FUNC_4 (struct vnode*,struct fuse_filehandle**,struct ucred*,int ) ;
 TYPE_4__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vop_advlock_args*) ;

__attribute__((used)) static int
FUNC_9(struct vop_advlock_args *VAR_10)
{
 struct vnode *VAR_11 = VAR_10->a_vp;
 struct flock *VAR_12 = VAR_10->a_fl;
 struct thread *VAR_13 = VAR_9;
 struct ucred *VAR_14 = VAR_13->td_ucred;
 pid_t VAR_15 = VAR_13->td_proc->p_pid;
 struct fuse_filehandle *VAR_16;
 struct fuse_dispatcher VAR_17;
 struct fuse_lk_in *VAR_18;
 struct fuse_lk_out *VAR_19;
 enum fuse_opcode VAR_20;
 int VAR_21, VAR_22;
 int VAR_23 = VAR_10->a_flags;

 VAR_21 = FUNC_5(FUNC_7(VAR_11))->dataflags;

 if (FUNC_6(VAR_11)) {
  return VAR_1;
 }

 if (!(VAR_21 & VAR_2))
  return FUNC_8(VAR_10);

 if (VAR_23 & VAR_6)
  return FUNC_8(VAR_10);

 VAR_22 = FUNC_4(VAR_11, &VAR_16, VAR_14, VAR_15);
 if (VAR_22)
  return VAR_22;

 FUNC_1(&VAR_17, sizeof(*VAR_18));

 switch(VAR_10->a_op) {
 case 130:
  VAR_20 = VAR_3;
  break;
 case 129:
  VAR_20 = VAR_4;
  break;
 case 128:
  VAR_20 = VAR_5;
  break;
 default:
  return VAR_0;
 }

 FUNC_2(&VAR_17, VAR_20, VAR_11, VAR_13, VAR_14);
 VAR_18 = VAR_17.indata;
 VAR_18->fh = VAR_16->fh_id;
 VAR_18->owner = VAR_12->l_pid;
 VAR_18->lk.start = VAR_12->l_start;
 if (VAR_12->l_len != 0)
  VAR_18->lk.end = VAR_12->l_start + VAR_12->l_len - 1;
 else
  VAR_18->lk.end = VAR_8;
 VAR_18->lk.type = VAR_12->l_type;
 VAR_18->lk.pid = VAR_12->l_pid;

 VAR_22 = FUNC_3(&VAR_17);
 FUNC_0(&VAR_17);

 if (VAR_22 == 0 && VAR_20 == VAR_3) {
  VAR_19 = VAR_17.answ;
  VAR_12->l_type = VAR_19->lk.type;
  VAR_12->l_pid = VAR_19->lk.pid;
  if (VAR_19->lk.type != VAR_7) {
   VAR_12->l_start = VAR_19->lk.start;
   if (VAR_19->lk.end == VAR_8)
    VAR_12->l_len = 0;
   else
    VAR_12->l_len = VAR_19->lk.end - VAR_19->lk.start + 1;
   VAR_12->l_start = VAR_19->lk.start;
  }
 }

 return VAR_22;
}
