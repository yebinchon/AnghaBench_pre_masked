
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cflag; int c_ispeed; int c_ospeed; } ;
struct tty {int t_inlow; int t_outlow; int t_outq; TYPE_1__ t_termios; int t_inq; } ;


 int VAR_0 ;
 size_t FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct tty*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct tty*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct tty *VAR_2)
{
 size_t VAR_3 = 0;
 int VAR_4;


 if (VAR_2->t_termios.c_cflag & VAR_0)
  VAR_3 = FUNC_0(VAR_2->t_termios.c_ispeed / 5, VAR_1);
 VAR_4 = FUNC_2(&VAR_2->t_inq, VAR_2, VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);


 VAR_2->t_inlow = (FUNC_1(&VAR_2->t_inq) * 9) / 10;


 VAR_3 = FUNC_0(VAR_2->t_termios.c_ospeed / 5, VAR_1);
 VAR_4 = FUNC_4(&VAR_2->t_outq, VAR_2, VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);


 VAR_2->t_outlow = (FUNC_3(&VAR_2->t_outq) * 9) / 10;

 return (0);
}
