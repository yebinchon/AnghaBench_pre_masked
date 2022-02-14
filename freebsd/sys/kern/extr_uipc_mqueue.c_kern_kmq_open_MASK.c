
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int* td_retval; int td_ucred; TYPE_1__* td_proc; } ;
struct mqueue {int dummy; } ;
struct mqfs_node {int mn_gid; int mn_uid; int mn_mode; struct mqueue* mn_data; } ;
struct mq_attr {scalar_t__ mq_maxmsg; scalar_t__ mq_msgsize; } ;
struct filedesc {int fd_cmask; } ;
struct file {int dummy; } ;
typedef int mode_t ;
typedef int accmode_t ;
struct TYPE_4__ {int mi_lock; int mi_root; } ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (char const*,char*,int,int *) ;
 int FUNC_4 (struct thread*,struct file**,int*,int ) ;
 int FUNC_5 (struct thread*,struct file*,int) ;
 int FUNC_6 (struct file*,struct thread*) ;
 int FUNC_7 (struct file*,int,int ,struct mqfs_node*,int *) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 struct mqfs_node* FUNC_8 (int ,char*,int,int ,int) ;
 TYPE_2__ VAR_20 ;
 struct mqfs_node* FUNC_9 (int ,char*,int,int ) ;
 int FUNC_10 (struct mqfs_node*) ;
 struct mqueue* FUNC_11 (struct mq_attr const*) ;
 int FUNC_12 (struct mqueue*) ;
 int VAR_21 ;
 int * FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_19(struct thread *VAR_22, const char *VAR_23, int VAR_24, mode_t VAR_25,
    const struct mq_attr *VAR_26)
{
 char VAR_27[VAR_9 + 1];
 struct mqfs_node *VAR_28;
 struct filedesc *VAR_29;
 struct file *VAR_30;
 struct mqueue *VAR_31;
 int VAR_32, VAR_33, VAR_34, VAR_35;

 FUNC_0(VAR_24);
 FUNC_1(VAR_25);

 VAR_29 = VAR_22->td_proc->p_fd;
 VAR_35 = (((VAR_25 & ~VAR_29->fd_cmask) & VAR_0) & ~VAR_14);
 VAR_31 = ((void*)0);
 if ((VAR_24 & VAR_11) != 0 && VAR_26 != ((void*)0)) {
  if (VAR_26->mq_maxmsg <= 0 || VAR_26->mq_maxmsg > VAR_18)
   return (VAR_3);
  if (VAR_26->mq_msgsize <= 0 || VAR_26->mq_msgsize > VAR_19)
   return (VAR_3);
 }

 VAR_33 = FUNC_3(VAR_23, VAR_27, VAR_9 + 1, ((void*)0));
        if (VAR_33)
  return (VAR_33);






 VAR_34 = FUNC_15(VAR_27);
 if (VAR_34 < 2 || VAR_27[0] != '/' || FUNC_13(VAR_27 + 1, '/') != ((void*)0))
  return (VAR_3);




 if (FUNC_14(VAR_27, "/.") == 0 || FUNC_14(VAR_27, "/..") == 0)
  return (VAR_3);
 FUNC_2(VAR_27);

 VAR_33 = FUNC_4(VAR_22, &VAR_30, &VAR_32, VAR_10);
 if (VAR_33)
  return (VAR_33);

 FUNC_16(&VAR_20.mi_lock);
 VAR_28 = FUNC_9(VAR_20.mi_root, VAR_27 + 1, VAR_34 - 1, VAR_22->td_ucred);
 if (VAR_28 == ((void*)0)) {
  if (!(VAR_24 & VAR_11)) {
   VAR_33 = VAR_5;
  } else {
   VAR_31 = FUNC_11(VAR_26);
   if (VAR_31 == ((void*)0)) {
    VAR_33 = VAR_4;
   } else {
    VAR_28 = FUNC_8(VAR_20.mi_root,
             VAR_27 + 1, VAR_34 - 1, VAR_22->td_ucred,
      VAR_35);
    if (VAR_28 == ((void*)0)) {
     VAR_33 = VAR_6;
     FUNC_12(VAR_31);
    }
   }
  }

  if (VAR_33 == 0) {
   VAR_28->mn_data = VAR_31;
  }
 } else {
  if ((VAR_24 & (VAR_11 | VAR_12)) == (VAR_11 | VAR_12)) {
   VAR_33 = VAR_2;
  } else {
   accmode_t VAR_36 = 0;

   if (VAR_24 & VAR_7)
    VAR_36 |= VAR_15;
   if (VAR_24 & VAR_8)
    VAR_36 |= VAR_17;
   VAR_33 = FUNC_18(VAR_16, VAR_28->mn_mode, VAR_28->mn_uid,
        VAR_28->mn_gid, VAR_36, VAR_22->td_ucred, ((void*)0));
  }
 }

 if (VAR_33) {
  FUNC_17(&VAR_20.mi_lock);
  FUNC_5(VAR_22, VAR_30, VAR_32);
  FUNC_6(VAR_30, VAR_22);
  return (VAR_33);
 }

 FUNC_10(VAR_28);
 FUNC_17(&VAR_20.mi_lock);

 FUNC_7(VAR_30, VAR_24 & (VAR_7 | VAR_8 | VAR_13), VAR_1, VAR_28,
     &VAR_21);

 VAR_22->td_retval[0] = VAR_32;
 FUNC_6(VAR_30, VAR_22);
 return (0);
}
