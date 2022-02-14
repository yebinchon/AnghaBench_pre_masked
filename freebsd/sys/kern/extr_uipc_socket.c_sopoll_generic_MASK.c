
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {int sb_state; int sb_flags; } ;
struct socket {TYPE_1__ so_snd; TYPE_1__ so_rcv; int so_wrsel; int so_rdsel; scalar_t__ so_oobmark; scalar_t__ so_error; int sol_comp; } ;


 int VAR_0 ;
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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 scalar_t__ FUNC_4 (struct socket*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct thread*,int *) ;
 scalar_t__ FUNC_7 (struct socket*) ;
 scalar_t__ FUNC_8 (struct socket*) ;

int
FUNC_9(struct socket *VAR_12, int VAR_13, struct ucred *VAR_14,
    struct thread *VAR_15)
{
 int VAR_16;

 FUNC_2(VAR_12);
 if (FUNC_4(VAR_12)) {
  if (!(VAR_13 & (VAR_1 | VAR_6)))
   VAR_16 = 0;
  else if (!FUNC_5(&VAR_12->sol_comp))
   VAR_16 = VAR_13 & (VAR_1 | VAR_6);
  else if ((VAR_13 & VAR_2) == 0 && VAR_12->so_error)
   VAR_16 = (VAR_13 & (VAR_1 | VAR_6)) | VAR_0;
  else {
   FUNC_6(VAR_15, &VAR_12->so_rdsel);
   VAR_16 = 0;
  }
 } else {
  VAR_16 = 0;
  FUNC_0(&VAR_12->so_snd);
  FUNC_0(&VAR_12->so_rcv);
  if (VAR_13 & (VAR_1 | VAR_6))
   if (FUNC_7(VAR_12))
    VAR_16 |= VAR_13 & (VAR_1 | VAR_6);
  if (VAR_13 & (VAR_3 | VAR_7))
   if (FUNC_8(VAR_12))
    VAR_16 |= VAR_13 & (VAR_3 | VAR_7);
  if (VAR_13 & (VAR_4 | VAR_5))
   if (VAR_12->so_oobmark ||
       (VAR_12->so_rcv.sb_state & VAR_10))
    VAR_16 |= VAR_13 & (VAR_4 | VAR_5);
  if ((VAR_13 & VAR_2) == 0) {
   if (VAR_12->so_rcv.sb_state & VAR_8) {
    VAR_16 |= VAR_13 & (VAR_1 | VAR_6);
    if (VAR_12->so_snd.sb_state & VAR_9)
     VAR_16 |= VAR_0;
   }
  }
  if (VAR_16 == 0) {
   if (VAR_13 &
       (VAR_1 | VAR_4 | VAR_6 | VAR_5)) {
    FUNC_6(VAR_15, &VAR_12->so_rdsel);
    VAR_12->so_rcv.sb_flags |= VAR_11;
   }
   if (VAR_13 & (VAR_3 | VAR_7)) {
    FUNC_6(VAR_15, &VAR_12->so_wrsel);
    VAR_12->so_snd.sb_flags |= VAR_11;
   }
  }
  FUNC_1(&VAR_12->so_rcv);
  FUNC_1(&VAR_12->so_snd);
 }
 FUNC_3(VAR_12);
 return (VAR_16);
}
