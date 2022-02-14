
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int dummy; } ;
struct TYPE_2__ {int c_lflag; } ;
struct tty {int t_flags; int t_outserwait; TYPE_1__ t_termios; } ;
struct cdev {struct tty* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*,int *) ;
 int FUNC_3 (struct tty*,int ,int ) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,struct uio*,int) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_5, struct uio *VAR_6, int VAR_7)
{
 struct tty *VAR_8 = VAR_5->si_drv1;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9)
  return (VAR_9);

 if (VAR_8->t_termios.c_lflag & VAR_3) {
  VAR_9 = FUNC_3(VAR_8, VAR_4, VAR_1);
  if (VAR_9)
   goto done;
 }

 if (VAR_7 & VAR_0 && VAR_8->t_flags & VAR_2) {

  VAR_9 = FUNC_5(VAR_8, VAR_6, VAR_7);
 } else {

  while (VAR_8->t_flags & VAR_2) {
   VAR_9 = FUNC_2(VAR_8, &VAR_8->t_outserwait);
   if (VAR_9)
    goto done;
  }

  VAR_8->t_flags |= VAR_2;
  VAR_9 = FUNC_5(VAR_8, VAR_6, VAR_7);
  VAR_8->t_flags &= ~VAR_2;
  FUNC_0(&VAR_8->t_outserwait);
 }

done: FUNC_1(VAR_8);
 return (VAR_9);
}
