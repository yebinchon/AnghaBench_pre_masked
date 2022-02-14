
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union semun {int val; int array; struct semid_ds* buf; } ;
typedef int u_short ;
struct ucred {int cr_prison; } ;
struct thread {struct ucred* td_ucred; } ;
struct TYPE_11__ {int mode; int gid; int uid; } ;
struct TYPE_12__ {int sem_nsems; TYPE_2__* __sem_base; TYPE_4__ sem_perm; int sem_ctime; } ;
struct semid_kernel {TYPE_5__ u; TYPE_1__* cred; } ;
struct TYPE_13__ {int mode; void* key; int gid; int uid; } ;
struct semid_ds {TYPE_7__ sem_perm; } ;
struct prison {int dummy; } ;
struct mtx {int dummy; } ;
typedef int register_t ;
struct TYPE_10__ {int semmni; int semvmx; } ;
struct TYPE_9__ {int semncnt; int sempid; int semval; int semzcnt; } ;
struct TYPE_8__ {int cr_prison; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_4 (int) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_5 (int,TYPE_4__) ;
 int FUNC_6 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_9 ;



 int FUNC_9 (TYPE_5__*,struct semid_ds*,int) ;
 int FUNC_10 (int ,int*,int) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (int*,int ) ;
 int FUNC_13 (struct thread*,TYPE_4__*,int ) ;
 int FUNC_14 (struct ucred*,struct semid_kernel*,int) ;
 int* FUNC_15 (int,int ,int ) ;
 int FUNC_16 (struct mtx*) ;
 int FUNC_17 (struct mtx*) ;
 int * VAR_10 ;
 struct prison* FUNC_18 (struct ucred*) ;
 struct mtx VAR_11 ;
 int FUNC_19 (struct prison*,struct semid_kernel*) ;
 int FUNC_20 (int,struct ucred*) ;
 struct semid_kernel* VAR_12 ;
 struct mtx* VAR_13 ;
 TYPE_3__ VAR_14 ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int,struct prison*,struct semid_kernel*) ;
 int VAR_15 ;
 int FUNC_23 (struct semid_kernel*) ;

int
FUNC_24(struct thread *VAR_16, int VAR_17, int VAR_18, int VAR_19,
    union semun *VAR_20, register_t *VAR_21)
{
 u_short *VAR_22;
 struct ucred *VAR_23 = VAR_16->td_ucred;
 int VAR_24, VAR_25;
 struct prison *VAR_26;
 struct semid_ds *VAR_27;
 struct semid_kernel *VAR_28;
 struct mtx *VAR_29;
 u_short VAR_30, VAR_31;
 int VAR_32;

 FUNC_3(("call to semctl(%d, %d, %d, 0x%p)\n",
     VAR_17, VAR_18, VAR_19, VAR_20));

 FUNC_0(VAR_19);
 FUNC_1(VAR_17);

 VAR_26 = FUNC_18(VAR_16->td_ucred);
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 VAR_22 = ((void*)0);

 switch(VAR_19) {
 case 130:




  if (VAR_17 < 0 || VAR_17 >= VAR_14.semmni)
   return (VAR_0);
  VAR_28 = &VAR_12[VAR_17];
  VAR_29 = &VAR_13[VAR_17];
  FUNC_16(VAR_29);
  if ((VAR_28->u.sem_perm.mode & VAR_9) == 0) {
   VAR_25 = VAR_0;
   goto done2;
  }
  if ((VAR_25 = FUNC_19(VAR_26, VAR_28)))
   goto done2;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_5)))
   goto done2;





  FUNC_9(&VAR_28->u, VAR_20->buf, sizeof(struct semid_ds));
  if (VAR_23->cr_prison != VAR_28->cred->cr_prison)
   VAR_20->buf->sem_perm.key = VAR_4;
  *VAR_21 = FUNC_5(VAR_17, VAR_28->u.sem_perm);
  FUNC_17(VAR_29);
  return (0);
 }

 VAR_32 = FUNC_4(VAR_17);
 if (VAR_32 < 0 || VAR_32 >= VAR_14.semmni)
  return (VAR_0);

 VAR_28 = &VAR_12[VAR_32];
 VAR_29 = &VAR_13[VAR_32];
 if (VAR_19 == 133)
  FUNC_16(&VAR_11);
 FUNC_16(VAR_29);







 VAR_25 = 0;
 *VAR_21 = 0;

 switch (VAR_19) {
 case 133:
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_3)))
   goto done2;
  FUNC_20(VAR_32, VAR_23);
  break;

 case 132:
  FUNC_2(&VAR_20->buf->sem_perm);
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_3)))
   goto done2;
  VAR_27 = VAR_20->buf;
  VAR_28->u.sem_perm.uid = VAR_27->sem_perm.uid;
  VAR_28->u.sem_perm.gid = VAR_27->sem_perm.gid;
  VAR_28->u.sem_perm.mode = (VAR_28->u.sem_perm.mode &
      ~0777) | (VAR_27->sem_perm.mode & 0777);
  VAR_28->u.sem_ctime = VAR_15;
  break;

 case 131:
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_5)))
   goto done2;
  FUNC_9(&VAR_28->u, VAR_20->buf, sizeof(struct semid_ds));
  if (VAR_23->cr_prison != VAR_28->cred->cr_prison)
   VAR_20->buf->sem_perm.key = VAR_4;
  break;

 case 137:
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_5)))
   goto done2;
  if (VAR_18 < 0 || VAR_18 >= VAR_28->u.sem_nsems) {
   VAR_25 = VAR_0;
   goto done2;
  }
  *VAR_21 = VAR_28->u.__sem_base[VAR_18].semncnt;
  break;

 case 136:
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_5)))
   goto done2;
  if (VAR_18 < 0 || VAR_18 >= VAR_28->u.sem_nsems) {
   VAR_25 = VAR_0;
   goto done2;
  }
  *VAR_21 = VAR_28->u.__sem_base[VAR_18].sempid;
  break;

 case 135:
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_5)))
   goto done2;
  if (VAR_18 < 0 || VAR_18 >= VAR_28->u.sem_nsems) {
   VAR_25 = VAR_0;
   goto done2;
  }
  *VAR_21 = VAR_28->u.__sem_base[VAR_18].semval;
  break;

 case 138:
  VAR_31 = VAR_28->u.sem_nsems;
  FUNC_17(VAR_29);
  VAR_22 = FUNC_15(sizeof(*VAR_22) * VAR_31, VAR_7, VAR_8);
  FUNC_16(VAR_29);
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  FUNC_6(VAR_31 == VAR_28->u.sem_nsems, ("nsems changed"));
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_5)))
   goto done2;
  for (VAR_24 = 0; VAR_24 < VAR_28->u.sem_nsems; VAR_24++)
   VAR_22[VAR_24] = VAR_28->u.__sem_base[VAR_24].semval;
  FUNC_17(VAR_29);
  VAR_25 = FUNC_11(VAR_22, VAR_20->array, VAR_31 * sizeof(*VAR_22));
  FUNC_16(VAR_29);
  break;

 case 134:
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_5)))
   goto done2;
  if (VAR_18 < 0 || VAR_18 >= VAR_28->u.sem_nsems) {
   VAR_25 = VAR_0;
   goto done2;
  }
  *VAR_21 = VAR_28->u.__sem_base[VAR_18].semzcnt;
  break;

 case 128:
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_6)))
   goto done2;
  if (VAR_18 < 0 || VAR_18 >= VAR_28->u.sem_nsems) {
   VAR_25 = VAR_0;
   goto done2;
  }
  if (VAR_20->val < 0 || VAR_20->val > VAR_14.semvmx) {
   VAR_25 = VAR_2;
   goto done2;
  }
  VAR_28->u.__sem_base[VAR_18].semval = VAR_20->val;
  FUNC_7();
  FUNC_21(VAR_32, VAR_18);
  FUNC_8();
  FUNC_23(VAR_28);
  break;

 case 129:




  VAR_31 = VAR_28->u.sem_nsems;
  FUNC_17(VAR_29);
  VAR_22 = FUNC_15(sizeof(*VAR_22) * VAR_31, VAR_7, VAR_8);
  VAR_25 = FUNC_10(VAR_20->array, VAR_22, VAR_31 * sizeof(*VAR_22));
  FUNC_16(VAR_29);
  if (VAR_25)
   break;
  if ((VAR_25 = FUNC_22(VAR_17, VAR_26, VAR_28)) != 0)
   goto done2;
  FUNC_6(VAR_31 == VAR_28->u.sem_nsems, ("nsems changed"));
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_28->u.sem_perm, VAR_6)))
   goto done2;
  for (VAR_24 = 0; VAR_24 < VAR_28->u.sem_nsems; VAR_24++) {
   VAR_30 = VAR_22[VAR_24];
   if (VAR_30 > VAR_14.semvmx) {
    VAR_25 = VAR_2;
    break;
   }
   VAR_28->u.__sem_base[VAR_24].semval = VAR_30;
  }
  FUNC_7();
  FUNC_21(VAR_32, -1);
  FUNC_8();
  FUNC_23(VAR_28);
  break;

 default:
  VAR_25 = VAR_0;
  break;
 }

done2:
 FUNC_17(VAR_29);
 if (VAR_19 == 133)
  FUNC_17(&VAR_11);
 if (VAR_22 != ((void*)0))
  FUNC_12(VAR_22, VAR_7);
 return(VAR_25);
}
