
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {TYPE_3__* td_ucred; TYPE_1__* td_proc; } ;
struct ksem {int ks_flags; } ;
struct filedesc {int fd_cmask; } ;
struct file {int dummy; } ;
typedef int semid_t ;
typedef int mode_t ;
struct TYPE_8__ {TYPE_2__* cr_prison; } ;
struct TYPE_7__ {char* pr_path; } ;
struct TYPE_6__ {struct filedesc* p_fd; } ;
typedef int Fnv32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_5 (char const*,char*,scalar_t__,int *) ;
 int FUNC_6 (struct thread*,struct file**,int*,int ) ;
 int FUNC_7 (struct thread*,struct file*,int) ;
 int FUNC_8 (struct file*,struct thread*) ;
 int FUNC_9 (struct file*,int,int ,struct ksem*,int *) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (struct ksem*,TYPE_3__*) ;
 struct ksem* FUNC_13 (TYPE_3__*,int,unsigned int) ;
 int FUNC_14 (struct thread*,int *,int,int) ;
 int VAR_18 ;
 int FUNC_15 (struct ksem*) ;
 int FUNC_16 (char*,int ,struct ksem*) ;
 struct ksem* FUNC_17 (char*,int ) ;
 int VAR_19 ;
 int FUNC_18 (TYPE_3__*,struct ksem*) ;
 char* FUNC_19 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_20 (char const*,char*) ;
 size_t FUNC_21 (char*,char const*,scalar_t__) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int
FUNC_24(struct thread *VAR_20, const char *VAR_21, semid_t *VAR_22, mode_t VAR_23,
    unsigned int VAR_24, int VAR_25, int VAR_26)
{
 struct filedesc *VAR_27;
 struct ksem *VAR_28;
 struct file *VAR_29;
 char *VAR_30;
 const char *VAR_31;
 size_t VAR_32;
 Fnv32_t VAR_33;
 int VAR_34, VAR_35;

 FUNC_0(VAR_25);
 FUNC_1(VAR_23);
 FUNC_3(VAR_24);

 if (VAR_24 > VAR_17)
  return (VAR_3);

 VAR_27 = VAR_20->td_proc->p_fd;
 VAR_23 = (VAR_23 & ~VAR_27->fd_cmask) & VAR_0;
 VAR_34 = FUNC_6(VAR_20, &VAR_29, &VAR_35, VAR_14);
 if (VAR_34) {
  if (VAR_21 == ((void*)0))
   VAR_34 = VAR_6;
  return (VAR_34);
 }






 VAR_34 = FUNC_14(VAR_20, VAR_22, VAR_35, VAR_26);
 if (VAR_34) {
  FUNC_7(VAR_20, VAR_29, VAR_35);
  FUNC_8(VAR_29, VAR_20);
  return (VAR_34);
 }

 if (VAR_21 == ((void*)0)) {

  VAR_28 = FUNC_13(VAR_20->td_ucred, VAR_23, VAR_24);
  if (VAR_28 == ((void*)0))
   VAR_34 = VAR_6;
  else
   VAR_28->ks_flags |= VAR_10;
 } else {
  VAR_30 = FUNC_19(VAR_11, VAR_12, VAR_13);
  VAR_31 = VAR_20->td_ucred->cr_prison->pr_path;


  VAR_32 = FUNC_20(VAR_31, "/") == 0 ? 0
      : FUNC_21(VAR_30, VAR_31, VAR_11);
  VAR_34 = FUNC_5(VAR_21, VAR_30 + VAR_32,
      VAR_11 - VAR_32, ((void*)0));


  if (VAR_34 == 0 && VAR_30[VAR_32] != '/')
   VAR_34 = VAR_3;
  if (VAR_34) {
   FUNC_7(VAR_20, VAR_29, VAR_35);
   FUNC_8(VAR_29, VAR_20);
   FUNC_11(VAR_30, VAR_12);
   return (VAR_34);
  }

  FUNC_2(VAR_30);
  VAR_33 = FUNC_10(VAR_30, VAR_7);
  FUNC_22(&VAR_18);
  VAR_28 = FUNC_17(VAR_30, VAR_33);
  if (VAR_28 == ((void*)0)) {

   if (VAR_25 & VAR_15) {
    VAR_28 = FUNC_13(VAR_20->td_ucred, VAR_23, VAR_24);
    if (VAR_28 == ((void*)0))
     VAR_34 = VAR_4;
    else {
     FUNC_16(VAR_30, VAR_33, VAR_28);
     VAR_30 = ((void*)0);
    }
   } else
    VAR_34 = VAR_5;
  } else {




   if ((VAR_25 & (VAR_15 | VAR_16)) ==
       (VAR_15 | VAR_16))
    VAR_34 = VAR_2;
   else {





    VAR_34 = FUNC_12(VAR_28, VAR_20->td_ucred);
   }
   if (VAR_34 == 0)
    FUNC_15(VAR_28);




  }
  FUNC_23(&VAR_18);
  if (VAR_30)
   FUNC_11(VAR_30, VAR_12);
 }

 if (VAR_34) {
  FUNC_4(VAR_28 == ((void*)0), ("ksem_create error with a ksem"));
  FUNC_7(VAR_20, VAR_29, VAR_35);
  FUNC_8(VAR_29, VAR_20);
  return (VAR_34);
 }
 FUNC_4(VAR_28 != ((void*)0), ("ksem_create w/o a ksem"));

 FUNC_9(VAR_29, VAR_8 | VAR_9, VAR_1, VAR_28, &VAR_19);

 FUNC_8(VAR_29, VAR_20);

 return (0);
}
