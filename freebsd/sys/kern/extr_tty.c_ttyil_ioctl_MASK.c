
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct winsize {int dummy; } ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct termios {int dummy; } ;
struct cdev {scalar_t__ si_drv2; struct tty* si_drv1; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct cdev*) ;
 int FUNC_2 (struct thread*,int ) ;
 scalar_t__ FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,int ,int,scalar_t__,struct thread*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_5, u_long VAR_6, caddr_t VAR_7, int VAR_8,
    struct thread *VAR_9)
{
 struct tty *VAR_10 = VAR_5->si_drv1;
 int VAR_11;

 FUNC_4(VAR_10);
 if (FUNC_3(VAR_10)) {
  VAR_11 = VAR_0;
  goto done;
 }

 VAR_11 = FUNC_6(VAR_10, FUNC_1(VAR_5), VAR_6, VAR_7, VAR_9);
 if (VAR_11 != VAR_1)
  goto done;
 VAR_11 = 0;

 switch (VAR_6) {
 case 131:

  *(struct termios*)VAR_7 = *(struct termios*)VAR_5->si_drv2;
  break;
 case 128:

  VAR_11 = FUNC_2(VAR_9, VAR_3);
  if (VAR_11)
   break;
  *(struct termios*)VAR_5->si_drv2 = *(struct termios*)VAR_7;
  break;
 case 130:
  *(int *)VAR_7 = VAR_4;
  break;
 case 129:
  FUNC_0(VAR_7, sizeof(struct winsize));
  break;
 default:
  VAR_11 = VAR_2;
 }

done: FUNC_5(VAR_10);
 return (VAR_11);
}
