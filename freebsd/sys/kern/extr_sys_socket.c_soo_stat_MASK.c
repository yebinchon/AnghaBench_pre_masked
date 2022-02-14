
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct stat {int st_mode; int st_gid; int st_uid; scalar_t__ st_size; } ;
struct sockbuf {int sb_state; scalar_t__ sb_ctl; } ;
struct socket {TYPE_3__* so_proto; TYPE_1__* so_cred; struct sockbuf so_snd; struct sockbuf so_rcv; } ;
struct file {struct socket* f_data; } ;
typedef int caddr_t ;
struct TYPE_6__ {TYPE_2__* pr_usrreqs; } ;
struct TYPE_5__ {int (* pru_sense ) (struct socket*,struct stat*) ;} ;
struct TYPE_4__ {int cr_gid; int cr_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct socket*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ucred*,struct socket*) ;
 scalar_t__ FUNC_5 (struct sockbuf*) ;
 int FUNC_6 (struct socket*,struct stat*) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_9, struct stat *VAR_10, struct ucred *VAR_11,
    struct thread *VAR_12)
{
 struct socket *VAR_13 = VAR_9->f_data;




 FUNC_3((caddr_t)VAR_10, sizeof (*VAR_10));
 VAR_10->st_mode = VAR_2;





 if (!FUNC_2(VAR_13)) {
  struct sockbuf *VAR_14;





  VAR_14 = &VAR_13->so_rcv;
  FUNC_0(VAR_14);
  if ((VAR_14->sb_state & VAR_0) == 0 || FUNC_5(VAR_14))
   VAR_10->st_mode |= VAR_5 | VAR_3 | VAR_4;
  VAR_10->st_size = FUNC_5(VAR_14) - VAR_14->sb_ctl;
  FUNC_1(VAR_14);

  VAR_14 = &VAR_13->so_snd;
  FUNC_0(VAR_14);
  if ((VAR_14->sb_state & VAR_1) == 0)
   VAR_10->st_mode |= VAR_8 | VAR_6 | VAR_7;
  FUNC_1(VAR_14);
 }
 VAR_10->st_uid = VAR_13->so_cred->cr_uid;
 VAR_10->st_gid = VAR_13->so_cred->cr_gid;
 return (*VAR_13->so_proto->pr_usrreqs->pru_sense)(VAR_13, VAR_10);
}
