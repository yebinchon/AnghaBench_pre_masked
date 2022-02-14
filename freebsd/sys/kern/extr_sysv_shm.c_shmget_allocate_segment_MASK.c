
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef TYPE_2__* vm_object_t ;
struct ucred {int cr_gid; int cr_uid; } ;
struct thread {int * td_retval; TYPE_7__* td_proc; struct ucred* td_ucred; } ;
struct TYPE_14__ {int mode; int seq; int key; int gid; int cgid; int uid; int cuid; } ;
struct TYPE_15__ {TYPE_13__ shm_perm; int shm_ctime; scalar_t__ shm_dtime; scalar_t__ shm_atime; scalar_t__ shm_nattch; scalar_t__ shm_lpid; int shm_cpid; int shm_segsz; } ;
struct shmid_kernel {TYPE_1__ u; int cred; TYPE_2__* object; } ;
struct shmget_args {int size; int key; } ;
struct TYPE_18__ {int p_pid; } ;
struct TYPE_17__ {scalar_t__ shmmni; scalar_t__ shmall; int shmmax; int shmmin; } ;
struct TYPE_16__ {scalar_t__ pg_color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,TYPE_13__) ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (struct ucred*) ;
 int FUNC_9 (struct ucred*,struct shmid_kernel*) ;
 scalar_t__ FUNC_10 (TYPE_7__*,int ,size_t) ;
 scalar_t__ VAR_14 ;
 int FUNC_11 (TYPE_7__*,int ,size_t) ;
 size_t FUNC_12 (int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 TYPE_6__ VAR_20 ;
 int FUNC_13 () ;
 struct shmid_kernel* VAR_21 ;
 int VAR_22 ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_16 (int ,int ,size_t,int ,int ,struct ucred*) ;

__attribute__((used)) static int
FUNC_17(struct thread *VAR_23, struct shmget_args *VAR_24, int VAR_25)
{
 struct ucred *VAR_26 = VAR_23->td_ucred;
 struct shmid_kernel *VAR_27;
 vm_object_t VAR_28;
 int VAR_29, VAR_30;
 size_t VAR_31;

 FUNC_4();

 if (VAR_24->size < VAR_20.shmmin || VAR_24->size > VAR_20.shmmax)
  return (VAR_1);
 if (VAR_17 >= VAR_20.shmmni)
  return (VAR_3);
 VAR_31 = FUNC_12(VAR_24->size);
 if (VAR_15 + FUNC_7(VAR_31) > VAR_20.shmall)
  return (VAR_2);
 if (VAR_16 < 0) {
  FUNC_13();
  for (VAR_29 = 0; VAR_29 < VAR_19; VAR_29++)
   if (VAR_21[VAR_29].u.shm_perm.mode & VAR_12)
    break;
  if (VAR_29 == VAR_19)
   return (VAR_3);
  VAR_30 = VAR_29;
 } else {
  VAR_30 = VAR_16;
  VAR_16 = -1;
 }
 FUNC_1(VAR_30 >= 0 && VAR_30 < VAR_19,
     ("segnum %d shmalloced %d", VAR_30, VAR_19));
 VAR_27 = &VAR_21[VAR_30];
 VAR_28 = FUNC_16(VAR_18 ? VAR_4 : VAR_5,
     0, VAR_31, VAR_13, 0, VAR_26);
 if (VAR_28 == ((void*)0)) {
  return (VAR_2);
 }
 VAR_28->pg_color = 0;
 FUNC_5(VAR_28);
 FUNC_14(VAR_28, VAR_8);
 FUNC_15(VAR_28, VAR_6 | VAR_7);
 FUNC_6(VAR_28);

 VAR_27->object = VAR_28;
 VAR_27->u.shm_perm.cuid = VAR_27->u.shm_perm.uid = VAR_26->cr_uid;
 VAR_27->u.shm_perm.cgid = VAR_27->u.shm_perm.gid = VAR_26->cr_gid;
 VAR_27->u.shm_perm.mode = (VAR_25 & VAR_0) | VAR_11;
 VAR_27->u.shm_perm.key = VAR_24->key;
 VAR_27->u.shm_perm.seq = (VAR_27->u.shm_perm.seq + 1) & 0x7fff;
 VAR_27->cred = FUNC_8(VAR_26);
 VAR_27->u.shm_segsz = VAR_24->size;
 VAR_27->u.shm_cpid = VAR_23->td_proc->p_pid;
 VAR_27->u.shm_lpid = VAR_27->u.shm_nattch = 0;
 VAR_27->u.shm_atime = VAR_27->u.shm_dtime = 0;



 VAR_27->u.shm_ctime = VAR_22;
 VAR_15 += FUNC_7(VAR_31);
 VAR_17++;
 VAR_23->td_retval[0] = FUNC_0(VAR_30, VAR_27->u.shm_perm);

 return (0);
}
