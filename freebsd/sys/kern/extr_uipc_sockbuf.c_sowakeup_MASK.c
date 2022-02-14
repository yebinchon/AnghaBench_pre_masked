
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockbuf {int sb_flags; int (* sb_upcall ) (struct socket*,int ,int ) ;int sb_upcallarg; TYPE_1__* sb_sel; int sb_acc; } ;
struct socket {int so_state; int * so_sigio; struct sockbuf so_rcv; } ;
struct TYPE_3__ {int si_note; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_3 (struct sockbuf*) ;
 int FUNC_4 (struct sockbuf*) ;
 int FUNC_5 (struct sockbuf*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*,int ) ;
 int FUNC_11 (struct socket*,struct sockbuf*) ;
 int FUNC_12 (struct socket*,int ,int ) ;
 int FUNC_13 (int *) ;

void
FUNC_14(struct socket *VAR_11, struct sockbuf *VAR_12)
{
 int VAR_13;

 FUNC_3(VAR_12);

 FUNC_8(VAR_12->sb_sel, VAR_2);
 if (!FUNC_2(VAR_12->sb_sel))
  VAR_12->sb_flags &= ~VAR_4;
 if (VAR_12->sb_flags & VAR_5) {
  VAR_12->sb_flags &= ~VAR_5;
  FUNC_13(&VAR_12->sb_acc);
 }
 FUNC_1(&VAR_12->sb_sel->si_note, 0);
 if (VAR_12->sb_upcall != ((void*)0)) {
  VAR_13 = VAR_12->sb_upcall(VAR_11, VAR_12->sb_upcallarg, VAR_1);
  if (VAR_13 == VAR_9) {
   FUNC_0(VAR_12 == &VAR_11->so_rcv,
       ("SO_SND upcall returned SU_ISCONNECTED"));
   FUNC_10(VAR_11, VAR_7);
  }
 } else
  VAR_13 = VAR_10;
 if (VAR_12->sb_flags & VAR_3)
  FUNC_11(VAR_11, VAR_12);
 FUNC_5(VAR_12);
 if (VAR_13 == VAR_9)
  FUNC_9(VAR_11);
 if ((VAR_11->so_state & VAR_8) && VAR_11->so_sigio != ((void*)0))
  FUNC_7(&VAR_11->so_sigio, VAR_6, 0);
 FUNC_6(FUNC_4(VAR_12), VAR_0);
}
