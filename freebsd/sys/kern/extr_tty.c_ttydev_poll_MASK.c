
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_flags; int t_outpoll; int t_inpoll; } ;
struct thread {int dummy; } ;
struct cdev {struct tty* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct thread*,int *) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;
 scalar_t__ FUNC_3 (struct tty*) ;
 scalar_t__ FUNC_4 (struct tty*) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct tty *VAR_9 = VAR_6->si_drv1;
 int VAR_10, VAR_11 = 0;

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10)
  return ((VAR_7 & (VAR_1|VAR_3)) | VAR_0);

 if (VAR_7 & (VAR_1|VAR_3)) {

  if (FUNC_3(VAR_9) > 0)
   VAR_11 |= VAR_7 & (VAR_1|VAR_3);
 }

 if (VAR_9->t_flags & VAR_5) {

  VAR_11 |= VAR_0;
 } else if (VAR_7 & (VAR_2|VAR_4)) {

  if (FUNC_4(VAR_9) > 0)
   VAR_11 |= VAR_7 & (VAR_2|VAR_4);
 }

 if (VAR_11 == 0) {
  if (VAR_7 & (VAR_1|VAR_3))
   FUNC_0(VAR_8, &VAR_9->t_inpoll);
  if (VAR_7 & (VAR_2|VAR_4))
   FUNC_0(VAR_8, &VAR_9->t_outpoll);
 }

 FUNC_1(VAR_9);

 return (VAR_11);
}
