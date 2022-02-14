
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct TYPE_5__ {int sb_lowat; scalar_t__ sb_hiwat; } ;
struct socket {TYPE_1__ so_snd; TYPE_1__ so_rcv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct thread* VAR_2 ;
 int FUNC_2 (TYPE_1__*,struct socket*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,struct socket*,struct thread*) ;

int
FUNC_4(struct socket *VAR_3, u_long VAR_4, u_long VAR_5)
{
 struct thread *VAR_6 = VAR_2;

 FUNC_0(&VAR_3->so_snd);
 FUNC_0(&VAR_3->so_rcv);
 if (FUNC_3(&VAR_3->so_snd, VAR_4, VAR_3, VAR_6) == 0)
  goto bad;
 if (FUNC_3(&VAR_3->so_rcv, VAR_5, VAR_3, VAR_6) == 0)
  goto bad2;
 if (VAR_3->so_rcv.sb_lowat == 0)
  VAR_3->so_rcv.sb_lowat = 1;
 if (VAR_3->so_snd.sb_lowat == 0)
  VAR_3->so_snd.sb_lowat = VAR_1;
 if (VAR_3->so_snd.sb_lowat > VAR_3->so_snd.sb_hiwat)
  VAR_3->so_snd.sb_lowat = VAR_3->so_snd.sb_hiwat;
 FUNC_1(&VAR_3->so_rcv);
 FUNC_1(&VAR_3->so_snd);
 return (0);
bad2:
 FUNC_2(&VAR_3->so_snd, VAR_3);
bad:
 FUNC_1(&VAR_3->so_rcv);
 FUNC_1(&VAR_3->so_snd);
 return (VAR_0);
}
