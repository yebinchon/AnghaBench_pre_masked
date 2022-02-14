
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {scalar_t__* td_retval; TYPE_3__* td_proc; int td_ucred; } ;
struct semop_args {int semid; size_t nsops; int sops; } ;
struct TYPE_10__ {int mode; unsigned short seq; } ;
struct TYPE_7__ {size_t sem_nsems; int sem_otime; struct sem* __sem_base; TYPE_4__ sem_perm; } ;
struct semid_kernel {TYPE_1__ u; } ;
struct sembuf {size_t sem_num; int sem_flg; scalar_t__ sem_op; } ;
struct sem_undo {int dummy; } ;
struct sem {scalar_t__ semval; scalar_t__ semzcnt; scalar_t__ semncnt; int sempid; } ;
struct prison {int dummy; } ;
struct mtx {int dummy; } ;
typedef int sops ;
struct TYPE_9__ {int p_pid; } ;
struct TYPE_8__ {int semmni; size_t semopm; scalar_t__ semvmx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 unsigned short FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 size_t VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (int ,struct sembuf*,size_t) ;
 int FUNC_9 (struct sembuf*,int ) ;
 int FUNC_10 (struct thread*,TYPE_4__*,size_t) ;
 int FUNC_11 (int ,struct semid_kernel*,size_t) ;
 struct sembuf* FUNC_12 (size_t,int ,int ) ;
 int FUNC_13 (struct semid_kernel*,struct mtx*,int,char*,int ) ;
 int FUNC_14 (struct mtx*) ;
 int FUNC_15 (struct mtx*) ;
 int FUNC_16 (char*) ;
 scalar_t__ VAR_20 ;
 size_t FUNC_17 (TYPE_3__*,int ) ;
 int * VAR_21 ;
 struct prison* FUNC_18 (int ) ;
 int FUNC_19 (struct prison*,struct semid_kernel*) ;
 struct semid_kernel* VAR_22 ;
 struct mtx* VAR_23 ;
 TYPE_2__ VAR_24 ;
 int FUNC_20 (struct thread*,struct sem_undo**,int,unsigned short,size_t,int) ;
 int VAR_25 ;
 int FUNC_21 (struct semid_kernel*) ;

int
FUNC_22(struct thread *VAR_26, struct semop_args *VAR_27)
{

 struct sembuf VAR_28[8];
 int VAR_29 = VAR_27->semid;
 size_t VAR_30 = VAR_27->nsops;
 struct prison *VAR_31;
 struct sembuf *VAR_32;
 struct semid_kernel *VAR_33;
 struct sembuf *VAR_34 = ((void*)0);
 struct sem *VAR_35 = ((void*)0);
 struct sem_undo *VAR_36;
 struct mtx *VAR_37;
 size_t VAR_38, VAR_39, VAR_40;
 int VAR_41;
 int VAR_42, VAR_43;
 unsigned short VAR_44;




 FUNC_1(("call to semop(%d, %p, %u)\n", VAR_29, VAR_32, VAR_30));

 FUNC_0(VAR_29);

 VAR_31 = FUNC_18(VAR_26->td_ucred);
 if (VAR_21 == ((void*)0))
  return (VAR_6);

 VAR_29 = FUNC_2(VAR_29);

 if (VAR_29 < 0 || VAR_29 >= VAR_24.semmni)
  return (VAR_5);


 if (VAR_30 <= 8)
  VAR_32 = VAR_28;
 else if (VAR_30 > VAR_24.semopm) {
  FUNC_1(("too many sops (max=%d, nsops=%d)\n", VAR_24.semopm,
      VAR_30));
  return (VAR_0);
 } else {
  VAR_32 = FUNC_12(VAR_30 * sizeof(*VAR_32), VAR_10, VAR_11);
 }
 if ((VAR_41 = FUNC_8(VAR_27->sops, VAR_32, VAR_30 * sizeof(VAR_32[0]))) != 0) {
  FUNC_1(("error = %d from copyin(%p, %p, %d)\n", VAR_41,
      VAR_27->sops, VAR_32, VAR_30 * sizeof(VAR_32[0])));
  if (VAR_32 != VAR_28)
   FUNC_9(VAR_32, VAR_9);
  return (VAR_41);
 }

 VAR_33 = &VAR_22[VAR_29];
 VAR_37 = &VAR_23[VAR_29];
 FUNC_14(VAR_37);
 if ((VAR_33->u.sem_perm.mode & VAR_16) == 0) {
  VAR_41 = VAR_5;
  goto done2;
 }
 VAR_44 = VAR_33->u.sem_perm.seq;
 if (VAR_44 != FUNC_3(VAR_27->semid)) {
  VAR_41 = VAR_5;
  goto done2;
 }
 if ((VAR_41 = FUNC_19(VAR_31, VAR_33)) != 0)
  goto done2;





 VAR_39 = 0;
 VAR_43 = 0;
 for (VAR_38 = 0; VAR_38 < VAR_30; VAR_38++) {
  VAR_34 = &VAR_32[VAR_38];
  if (VAR_34->sem_num >= VAR_33->u.sem_nsems) {
   VAR_41 = VAR_2;
   goto done2;
  }
  if (VAR_34->sem_flg & VAR_18 && VAR_34->sem_op != 0)
   VAR_43 = 1;
  VAR_39 |= (VAR_34->sem_op == 0) ? VAR_17 : VAR_15;
 }

 if ((VAR_41 = FUNC_10(VAR_26, &VAR_33->u.sem_perm, VAR_39))) {
  FUNC_1(("error = %d from ipaccess\n", VAR_41));
  goto done2;
 }
 for (;;) {
  VAR_42 = 0;
  VAR_41 = 0;

  for (VAR_38 = 0; VAR_38 < VAR_30; VAR_38++) {
   VAR_34 = &VAR_32[VAR_38];
   VAR_35 = &VAR_33->u.__sem_base[VAR_34->sem_num];

   FUNC_1((
       "semop:  semakptr=%p, __sem_base=%p, "
       "semptr=%p, sem[%d]=%d : op=%d, flag=%s\n",
       VAR_33, VAR_33->u.__sem_base, VAR_35,
       VAR_34->sem_num, VAR_35->semval, VAR_34->sem_op,
       (VAR_34->sem_flg & VAR_8) ?
       "nowait" : "wait"));

   if (VAR_34->sem_op < 0) {
    if (VAR_35->semval + VAR_34->sem_op < 0) {
     FUNC_1(("semop:  can't do it now\n"));
     break;
    } else {
     VAR_35->semval += VAR_34->sem_op;
     if (VAR_35->semval == 0 &&
         VAR_35->semzcnt > 0)
      VAR_42 = 1;
    }
   } else if (VAR_34->sem_op == 0) {
    if (VAR_35->semval != 0) {
     FUNC_1(("semop:  not zero now\n"));
     break;
    }
   } else if (VAR_35->semval + VAR_34->sem_op >
       VAR_24.semvmx) {
    VAR_41 = VAR_7;
    break;
   } else {
    if (VAR_35->semncnt > 0)
     VAR_42 = 1;
    VAR_35->semval += VAR_34->sem_op;
   }
  }




  if (VAR_38 >= VAR_30)
   goto done;




  FUNC_1(("semop:  rollback 0 through %d\n", VAR_38-1));
  for (VAR_39 = 0; VAR_39 < VAR_38; VAR_39++)
   VAR_33->u.__sem_base[VAR_32[VAR_39].sem_num].semval -=
       VAR_32[VAR_39].sem_op;


  if (VAR_41 != 0)
   goto done2;





  if (VAR_34->sem_flg & VAR_8) {
   VAR_41 = VAR_1;
   goto done2;
  }

  if (VAR_34->sem_op == 0)
   VAR_35->semzcnt++;
  else
   VAR_35->semncnt++;

  FUNC_1(("semop:  good night!\n"));
  VAR_41 = FUNC_13(VAR_33, VAR_37, (VAR_13 - 4) | VAR_12,
      "semwait", 0);
  FUNC_1(("semop:  good morning (error=%d)!\n", VAR_41));





  VAR_44 = VAR_33->u.sem_perm.seq;
  if ((VAR_33->u.sem_perm.mode & VAR_16) == 0 ||
      VAR_44 != FUNC_3(VAR_27->semid)) {
   VAR_41 = VAR_3;
   goto done2;
  }






  VAR_35 = &VAR_33->u.__sem_base[VAR_34->sem_num];





  if (VAR_34->sem_op == 0)
   VAR_35->semzcnt--;
  else
   VAR_35->semncnt--;






  if (VAR_41 != 0) {
   VAR_41 = VAR_4;
   goto done2;
  }
  FUNC_1(("semop:  good morning!\n"));
 }

done:



 if (VAR_43) {
  FUNC_6();
  VAR_36 = ((void*)0);
  for (VAR_38 = 0; VAR_38 < VAR_30; VAR_38++) {




   int VAR_45;

   if ((VAR_32[VAR_38].sem_flg & VAR_18) == 0)
    continue;
   VAR_45 = VAR_32[VAR_38].sem_op;
   if (VAR_45 == 0)
    continue;
   VAR_41 = FUNC_20(VAR_26, &VAR_36, VAR_29, VAR_44,
       VAR_32[VAR_38].sem_num, -VAR_45);
   if (VAR_41 == 0)
    continue;
   for (VAR_39 = 0; VAR_39 < VAR_38; VAR_39++) {
    VAR_40 = VAR_38 - VAR_39 - 1;
    if ((VAR_32[VAR_40].sem_flg & VAR_18) == 0)
     continue;
    VAR_45 = VAR_32[VAR_40].sem_op;
    if (VAR_45 == 0)
     continue;
    if (FUNC_20(VAR_26, &VAR_36, VAR_29, VAR_44,
        VAR_32[VAR_40].sem_num, VAR_45) != 0)
     FUNC_16("semop - can't undo undos");
   }

   for (VAR_39 = 0; VAR_39 < VAR_30; VAR_39++)
    VAR_33->u.__sem_base[VAR_32[VAR_39].sem_num].semval -=
        VAR_32[VAR_39].sem_op;

   FUNC_1(("error = %d from semundo_adjust\n", VAR_41));
   FUNC_7();
   goto done2;
  }
  FUNC_7();
 }


 for (VAR_38 = 0; VAR_38 < VAR_30; VAR_38++) {
  VAR_34 = &VAR_32[VAR_38];
  VAR_35 = &VAR_33->u.__sem_base[VAR_34->sem_num];
  VAR_35->sempid = VAR_26->td_proc->p_pid;
 }
 VAR_33->u.sem_otime = VAR_25;





 if (VAR_42) {
  FUNC_1(("semop:  doing wakeup\n"));
  FUNC_21(VAR_33);
  FUNC_1(("semop:  back from wakeup\n"));
 }
 FUNC_1(("semop:  done\n"));
 VAR_26->td_retval[0] = 0;
done2:
 FUNC_15(VAR_37);
 if (VAR_32 != VAR_28)
  FUNC_9(VAR_32, VAR_9);
 return (VAR_41);
}
