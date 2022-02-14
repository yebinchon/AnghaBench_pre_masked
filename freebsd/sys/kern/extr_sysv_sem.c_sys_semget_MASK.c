
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ucred {scalar_t__ cr_prison; int cr_gid; int cr_uid; } ;
struct thread {int * td_retval; int td_proc; struct ucred* td_ucred; } ;
struct semget_args {int key; int nsems; int semflg; } ;
struct TYPE_13__ {scalar_t__ cr_prison; } ;
struct TYPE_12__ {int mode; int key; int seq; int gid; int cgid; int uid; int cuid; } ;
struct TYPE_9__ {int sem_nsems; TYPE_6__ sem_perm; int * __sem_base; int sem_ctime; scalar_t__ sem_otime; } ;
struct TYPE_11__ {TYPE_1__ u; TYPE_7__* cred; } ;
struct TYPE_10__ {int semmni; int semmsl; int semmns; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,TYPE_6__) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *,int) ;
 TYPE_7__* FUNC_8 (struct ucred*) ;
 int FUNC_9 (struct thread*,TYPE_6__*,int) ;
 int FUNC_10 (struct ucred*,TYPE_3__*) ;
 int FUNC_11 (struct ucred*,TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int) ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int * FUNC_15 (struct ucred*) ;
 int VAR_12 ;
 TYPE_3__* VAR_13 ;
 int * VAR_14 ;
 TYPE_2__ VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;

int
FUNC_16(struct thread *VAR_18, struct semget_args *VAR_19)
{
 int VAR_20, VAR_21 = 0;
 int VAR_22 = VAR_19->key;
 int VAR_23 = VAR_19->nsems;
 int VAR_24 = VAR_19->semflg;
 struct ucred *VAR_25 = VAR_18->td_ucred;

 FUNC_2(("semget(0x%x, %d, 0%o)\n", VAR_22, VAR_23, VAR_24));

 FUNC_1(VAR_24);

 if (FUNC_15(VAR_25) == ((void*)0))
  return (VAR_4);

 FUNC_12(&VAR_12);
 if (VAR_22 != VAR_7) {
  for (VAR_20 = 0; VAR_20 < VAR_15.semmni; VAR_20++) {
   if ((VAR_13[VAR_20].u.sem_perm.mode & VAR_9) &&
       VAR_13[VAR_20].cred != ((void*)0) &&
       VAR_13[VAR_20].cred->cr_prison == VAR_25->cr_prison &&
       VAR_13[VAR_20].u.sem_perm.key == VAR_22)
    break;
  }
  if (VAR_20 < VAR_15.semmni) {
   FUNC_0(VAR_20);
   FUNC_2(("found public key\n"));
   if ((VAR_24 & VAR_5) && (VAR_24 & VAR_6)) {
    FUNC_2(("not exclusive\n"));
    VAR_21 = VAR_0;
    goto done2;
   }
   if ((VAR_21 = FUNC_9(VAR_18, &VAR_13[VAR_20].u.sem_perm,
       VAR_24 & 0700))) {
    goto done2;
   }
   if (VAR_23 > 0 && VAR_13[VAR_20].u.sem_nsems < VAR_23) {
    FUNC_2(("too small\n"));
    VAR_21 = VAR_1;
    goto done2;
   }





   goto found;
  }
 }

 FUNC_2(("need to allocate the semid_kernel\n"));
 if (VAR_22 == VAR_7 || (VAR_24 & VAR_5)) {
  if (VAR_23 <= 0 || VAR_23 > VAR_15.semmsl) {
   FUNC_2(("nsems out of range (0<%d<=%d)\n", VAR_23,
       VAR_15.semmsl));
   VAR_21 = VAR_1;
   goto done2;
  }
  if (VAR_23 > VAR_15.semmns - VAR_16) {
   FUNC_2((
       "not enough semaphores left (need %d, got %d)\n",
       VAR_23, VAR_15.semmns - VAR_16));
   VAR_21 = VAR_3;
   goto done2;
  }
  for (VAR_20 = 0; VAR_20 < VAR_15.semmni; VAR_20++) {
   if ((VAR_13[VAR_20].u.sem_perm.mode & VAR_9) == 0)
    break;
  }
  if (VAR_20 == VAR_15.semmni) {
   FUNC_2(("no more semid_kernel's available\n"));
   VAR_21 = VAR_3;
   goto done2;
  }
  FUNC_2(("semid %d is available\n", VAR_20));
  FUNC_12(&VAR_14[VAR_20]);
  FUNC_4((VAR_13[VAR_20].u.sem_perm.mode & VAR_9) == 0,
      ("Lost semaphore %d", VAR_20));
  VAR_13[VAR_20].u.sem_perm.key = VAR_22;
  VAR_13[VAR_20].u.sem_perm.cuid = VAR_25->cr_uid;
  VAR_13[VAR_20].u.sem_perm.uid = VAR_25->cr_uid;
  VAR_13[VAR_20].u.sem_perm.cgid = VAR_25->cr_gid;
  VAR_13[VAR_20].u.sem_perm.gid = VAR_25->cr_gid;
  VAR_13[VAR_20].u.sem_perm.mode = (VAR_24 & 0777) | VAR_9;
  VAR_13[VAR_20].cred = FUNC_8(VAR_25);
  VAR_13[VAR_20].u.sem_perm.seq =
      (VAR_13[VAR_20].u.sem_perm.seq + 1) & 0x7fff;
  VAR_13[VAR_20].u.sem_nsems = VAR_23;
  VAR_13[VAR_20].u.sem_otime = 0;
  VAR_13[VAR_20].u.sem_ctime = VAR_17;
  VAR_13[VAR_20].u.__sem_base = &VAR_11[VAR_16];
  VAR_16 += VAR_23;
  FUNC_7(VAR_13[VAR_20].u.__sem_base,
      sizeof(VAR_13[VAR_20].u.__sem_base[0])*VAR_23);



  FUNC_13(&VAR_14[VAR_20]);
  FUNC_2(("sembase = %p, next = %p\n",
      VAR_13[VAR_20].u.__sem_base, &VAR_11[VAR_16]));
 } else {
  FUNC_2(("didn't find it and wasn't asked to create it\n"));
  VAR_21 = VAR_2;
  goto done2;
 }

found:
 VAR_18->td_retval[0] = FUNC_3(VAR_20, VAR_13[VAR_20].u.sem_perm);
done2:
 FUNC_13(&VAR_12);
 return (VAR_21);
}
