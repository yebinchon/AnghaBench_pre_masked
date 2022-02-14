
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_iflag; scalar_t__* c_cc; } ;
struct tty {int t_flags; TYPE_1__ t_termios; int t_outq; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,int) ;

void
FUNC_3(struct tty *VAR_4)
{

 if (VAR_4->t_flags & VAR_1 &&
     VAR_4->t_termios.c_iflag & VAR_0 &&
     VAR_4->t_termios.c_cc[VAR_2] != VAR_3) {




  if (FUNC_2(&VAR_4->t_outq,
      &VAR_4->t_termios.c_cc[VAR_2], 1) == 0)
   VAR_4->t_flags &= ~VAR_1;
 } else {

  VAR_4->t_flags &= ~VAR_1;
 }

 if (!FUNC_0(VAR_4))
  FUNC_1(VAR_4);
}
