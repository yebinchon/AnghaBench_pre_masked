
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_10__ {int sb_state; int sb_mbcnt; int sb_mbmax; int sb_hiwat; int sb_flags; } ;
struct socket {TYPE_2__* so_proto; int so_vnet; int so_fibnum; TYPE_3__ so_rcv; int so_sigio; TYPE_3__ so_snd; int sol_sbsnd_flags; int sol_sbrcv_flags; int so_state; } ;
struct file {struct socket* f_data; } ;
struct TYPE_9__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_8__ {int (* pru_control ) (struct socket*,int,void*,int ,struct thread*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;







 char FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (struct socket*,int,void*,struct thread*) ;
 int FUNC_11 (int,void*,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (struct socket*,int,void*,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_16(struct file *VAR_4, u_long VAR_5, void *VAR_6, struct ucred *VAR_7,
    struct thread *VAR_8)
{
 struct socket *VAR_9 = VAR_4->f_data;
 int VAR_10 = 0;

 switch (VAR_5) {
 case 135:
  FUNC_5(VAR_9);
  if (*(int *)VAR_6)
   VAR_9->so_state |= VAR_3;
  else
   VAR_9->so_state &= ~VAR_3;
  FUNC_6(VAR_9);
  break;

 case 137:
  if (*(int *)VAR_6) {
   FUNC_5(VAR_9);
   VAR_9->so_state |= VAR_2;
   if (FUNC_7(VAR_9)) {
    VAR_9->sol_sbrcv_flags |= VAR_1;
    VAR_9->sol_sbsnd_flags |= VAR_1;
   } else {
    FUNC_3(&VAR_9->so_rcv);
    VAR_9->so_rcv.sb_flags |= VAR_1;
    FUNC_4(&VAR_9->so_rcv);
    FUNC_3(&VAR_9->so_snd);
    VAR_9->so_snd.sb_flags |= VAR_1;
    FUNC_4(&VAR_9->so_snd);
   }
   FUNC_6(VAR_9);
  } else {
   FUNC_5(VAR_9);
   VAR_9->so_state &= ~VAR_2;
   if (FUNC_7(VAR_9)) {
    VAR_9->sol_sbrcv_flags &= ~VAR_1;
    VAR_9->sol_sbsnd_flags &= ~VAR_1;
   } else {
    FUNC_3(&VAR_9->so_rcv);
    VAR_9->so_rcv.sb_flags &= ~VAR_1;
    FUNC_4(&VAR_9->so_rcv);
    FUNC_3(&VAR_9->so_snd);
    VAR_9->so_snd.sb_flags &= ~VAR_1;
    FUNC_4(&VAR_9->so_snd);
   }
   FUNC_6(VAR_9);
  }
  break;

 case 134:

  *(int *)VAR_6 = FUNC_12(&VAR_9->so_rcv);
  break;

 case 132:

  *(int *)VAR_6 = FUNC_12(&VAR_9->so_snd);
  break;

 case 133:

  if ((VAR_9->so_snd.sb_hiwat < FUNC_14(&VAR_9->so_snd)) ||
      (VAR_9->so_snd.sb_mbmax < VAR_9->so_snd.sb_mbcnt))
   *(int *)VAR_6 = 0;
  else
   *(int *)VAR_6 = FUNC_13(&VAR_9->so_snd);
  break;

 case 131:
  VAR_10 = FUNC_9(*(int *)VAR_6, &VAR_9->so_sigio);
  break;

 case 136:
  *(int *)VAR_6 = FUNC_8(&VAR_9->so_sigio);
  break;

 case 128:
  VAR_10 = FUNC_9(-(*(int *)VAR_6), &VAR_9->so_sigio);
  break;

 case 129:
  *(int *)VAR_6 = -FUNC_8(&VAR_9->so_sigio);
  break;

 case 130:

  *(int *)VAR_6 = (VAR_9->so_rcv.sb_state & VAR_0) != 0;
  break;
 default:





  if (FUNC_2(VAR_5) == 'i')
   VAR_10 = FUNC_10(VAR_9, VAR_5, VAR_6, VAR_8);
  else if (FUNC_2(VAR_5) == 'r') {
   FUNC_1(VAR_9->so_vnet);
   VAR_10 = FUNC_11(VAR_5, VAR_6, VAR_9->so_fibnum);
   FUNC_0();
  } else {
   FUNC_1(VAR_9->so_vnet);
   VAR_10 = ((*VAR_9->so_proto->pr_usrreqs->pru_control)
       (VAR_9, VAR_5, VAR_6, 0, VAR_8));
   FUNC_0();
  }
  break;
 }
 return (VAR_10);
}
