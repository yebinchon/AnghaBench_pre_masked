
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u_long ;
struct termios {int c_iflag; int c_oflag; int c_cflag; int c_lflag; scalar_t__ c_ospeed; scalar_t__ c_ispeed; scalar_t__* c_cc; } ;
struct tty {struct termios t_termios_lock_in; struct termios t_termios_lock_out; struct termios t_termios; } ;
struct thread {int dummy; } ;
struct cdev {struct tty* si_drv1; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tty*,struct cdev*) ;
 int VAR_2 ;
 int FUNC_1 (struct tty*,int const,scalar_t__,int,struct thread*) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,int ,int ) ;
 int FUNC_4 (struct tty*) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_3, u_long VAR_4, caddr_t VAR_5, int VAR_6,
    struct thread *VAR_7)
{
 struct tty *VAR_8 = VAR_3->si_drv1;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9)
  return (VAR_9);

 switch (VAR_4) {
 case 153:
 case 152:
 case 151:
 case 150:
 case 149:
 case 145:
 case 144:
 case 143:
 case 141:
 case 140:
 case 139:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_9 = FUNC_3(VAR_8, VAR_2, VAR_1);
  if (VAR_9)
   goto done;
 }

 if (VAR_4 == 141 || VAR_4 == 139 || VAR_4 == 140) {
  struct termios *VAR_10 = &VAR_8->t_termios;
  struct termios *VAR_11 = (struct termios *)VAR_5;
  struct termios *VAR_12 = FUNC_0(VAR_8, VAR_3) ?
      &VAR_8->t_termios_lock_out : &VAR_8->t_termios_lock_in;
  int VAR_13;





  VAR_11->c_iflag = (VAR_10->c_iflag & VAR_12->c_iflag) |
      (VAR_11->c_iflag & ~VAR_12->c_iflag);
  VAR_11->c_oflag = (VAR_10->c_oflag & VAR_12->c_oflag) |
      (VAR_11->c_oflag & ~VAR_12->c_oflag);
  VAR_11->c_cflag = (VAR_10->c_cflag & VAR_12->c_cflag) |
      (VAR_11->c_cflag & ~VAR_12->c_cflag);
  VAR_11->c_lflag = (VAR_10->c_lflag & VAR_12->c_lflag) |
      (VAR_11->c_lflag & ~VAR_12->c_lflag);
  for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13)
   if (VAR_12->c_cc[VAR_13])
    VAR_11->c_cc[VAR_13] = VAR_10->c_cc[VAR_13];
  if (VAR_12->c_ispeed)
   VAR_11->c_ispeed = VAR_10->c_ispeed;
  if (VAR_12->c_ospeed)
   VAR_11->c_ospeed = VAR_10->c_ospeed;
 }

 VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_5, VAR_6, VAR_7);
done: FUNC_2(VAR_8);

 return (VAR_9);
}
