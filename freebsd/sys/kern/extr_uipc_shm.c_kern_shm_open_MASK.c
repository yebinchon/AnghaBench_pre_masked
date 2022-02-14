
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct thread {int* td_retval; TYPE_3__* td_ucred; TYPE_1__* td_proc; } ;
struct shmfd {int shm_seals; int shm_mtx; int shm_rl; int shm_object; } ;
struct filedesc {int fd_cmask; } ;
struct filecaps {int dummy; } ;
struct file {int f_cred; } ;
typedef int mode_t ;
struct TYPE_10__ {TYPE_2__* cr_prison; } ;
struct TYPE_9__ {char* pr_path; } ;
struct TYPE_8__ {struct filedesc* p_fd; } ;
typedef int Fnv32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct thread*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char const* VAR_21 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*,char*,scalar_t__,int *) ;
 int VAR_22 ;
 int FUNC_9 (struct thread*,struct file**,int*,int,struct filecaps*) ;
 int FUNC_10 (struct thread*,struct file*,int) ;
 int FUNC_11 (struct file*,struct thread*) ;
 int FUNC_12 (struct file*,int ,int ,struct shmfd*,int *) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_3__*,char*) ;
 int FUNC_17 (TYPE_3__*,struct shmfd*,int ) ;
 int FUNC_18 (TYPE_3__*,int ,struct shmfd*) ;
 char* FUNC_19 (scalar_t__,int ,int ) ;
 int FUNC_20 (int *,void*,int *) ;
 void* FUNC_21 (int *,int ,int ,int *) ;
 int FUNC_22 (struct shmfd*,TYPE_3__*,int ) ;
 struct shmfd* FUNC_23 (TYPE_3__*,int) ;
 int VAR_23 ;
 int FUNC_24 (struct shmfd*,int ,void*) ;
 int FUNC_25 (struct shmfd*) ;
 int FUNC_26 (char*,int ,struct shmfd*) ;
 struct shmfd* FUNC_27 (char*,int ) ;
 int VAR_24 ;
 scalar_t__ FUNC_28 (char const*,char*) ;
 size_t FUNC_29 (char*,char const*,scalar_t__) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;

int
FUNC_32(struct thread *VAR_25, const char *VAR_26, int VAR_27, mode_t VAR_28,
    struct filecaps *VAR_29, int VAR_30)
{
 struct filedesc *VAR_31;
 struct shmfd *VAR_32;
 struct file *VAR_33;
 char *VAR_34;
 const char *VAR_35;
 void *VAR_36;
 size_t VAR_37;
 Fnv32_t VAR_38;
 mode_t VAR_39;
 int VAR_40, VAR_41;
 FUNC_0(VAR_27);
 FUNC_1(VAR_28);

 if ((VAR_27 & VAR_14) != VAR_18 && (VAR_27 & VAR_14) != VAR_19)
  return (VAR_4);

 if ((VAR_27 & ~(VAR_14 | VAR_16 | VAR_17 | VAR_20 | VAR_15)) != 0)
  return (VAR_4);
 if ((VAR_30 & ~VAR_8) != 0)
  return (VAR_4);

 VAR_31 = VAR_25->td_proc->p_fd;
 VAR_39 = (VAR_28 & ~VAR_31->fd_cmask) & VAR_0;
 VAR_41 = FUNC_9(VAR_25, &VAR_33, &VAR_40, VAR_27 & VAR_15, VAR_29);
 if (VAR_41)
  return (VAR_41);


 if (VAR_26 == VAR_21) {

  if ((VAR_27 & VAR_14) == VAR_18) {
   FUNC_10(VAR_25, VAR_33, VAR_40);
   FUNC_11(VAR_33, VAR_25);
   return (VAR_4);
  }
  VAR_32 = FUNC_23(VAR_25->td_ucred, VAR_39);
  VAR_32->shm_seals = VAR_30;
 } else {
  VAR_34 = FUNC_19(VAR_10, VAR_11, VAR_12);
  VAR_35 = VAR_25->td_ucred->cr_prison->pr_path;


  VAR_37 = FUNC_28(VAR_35, "/") == 0 ? 0
      : FUNC_29(VAR_34, VAR_35, VAR_10);
  VAR_41 = FUNC_8(VAR_26, VAR_34 + VAR_37,
      VAR_10 - VAR_37, ((void*)0));





  if (VAR_41 == 0 && VAR_34[VAR_37] != '/')
   VAR_41 = VAR_4;
  if (VAR_41) {
   FUNC_10(VAR_25, VAR_33, VAR_40);
   FUNC_11(VAR_33, VAR_25);
   FUNC_14(VAR_34, VAR_11);
   return (VAR_41);
  }

  FUNC_2(VAR_34);
  VAR_38 = FUNC_13(VAR_34, VAR_7);
  FUNC_30(&VAR_23);
  VAR_32 = FUNC_27(VAR_34, VAR_38);
  if (VAR_32 == ((void*)0)) {

   if (VAR_27 & VAR_16) {





     VAR_32 = FUNC_23(VAR_25->td_ucred, VAR_39);
     VAR_32->shm_seals = VAR_30;
     FUNC_26(VAR_34, VAR_38, VAR_32);



   } else {
    FUNC_14(VAR_34, VAR_11);
    VAR_41 = VAR_5;
   }
  } else {
   VAR_36 = FUNC_21(&VAR_32->shm_rl, 0, VAR_13,
       &VAR_32->shm_mtx);
   VAR_30 &= ~VAR_32->shm_seals;





   FUNC_14(VAR_34, VAR_11);
   if ((VAR_32->shm_seals & VAR_8) != 0 &&
       VAR_30 != 0)
    VAR_41 = VAR_6;
   else if ((VAR_27 & (VAR_16 | VAR_17)) ==
       (VAR_16 | VAR_17))
    VAR_41 = VAR_3;
   else {





    VAR_41 = FUNC_22(VAR_32, VAR_25->td_ucred,
        FUNC_3(VAR_27 & VAR_14));
   }






   if (VAR_41 == 0 &&
       (VAR_27 & (VAR_14 | VAR_20)) ==
       (VAR_19 | VAR_20)) {
    FUNC_6(VAR_32->shm_object);





     VAR_41 = FUNC_24(VAR_32, 0,
         VAR_36);
    FUNC_7(VAR_32->shm_object);
   }
   if (VAR_41 == 0) {





    VAR_32->shm_seals |= VAR_30;
    FUNC_25(VAR_32);
   }
   FUNC_20(&VAR_32->shm_rl, VAR_36,
       &VAR_32->shm_mtx);
  }
  FUNC_31(&VAR_23);

  if (VAR_41) {
   FUNC_10(VAR_25, VAR_33, VAR_40);
   FUNC_11(VAR_33, VAR_25);
   return (VAR_41);
  }
 }

 FUNC_12(VAR_33, FUNC_3(VAR_27 & VAR_14), VAR_1, VAR_32, &VAR_24);

 VAR_25->td_retval[0] = VAR_40;
 FUNC_11(VAR_33, VAR_25);

 return (0);
}
