
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; int c_ispeed; int c_ospeed; } ;
struct tty {struct termios t_termios; } ;
struct nmdmpart {int np_rate; int np_credits; struct nmdmpart* np_other; int np_callout; struct tty* np_tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct termios*) ;
 int FUNC_1 (int *,int,int ,struct nmdmpart*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 struct nmdmpart* FUNC_4 (struct tty*) ;

__attribute__((used)) static int
FUNC_5(struct tty *VAR_4, struct termios *VAR_5)
{
 struct nmdmpart *VAR_6 = FUNC_4(VAR_4);
 struct tty *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_7 = VAR_6->np_other->np_tty;

 if (!((VAR_5->c_cflag | VAR_7->t_termios.c_cflag) & VAR_0)) {
  VAR_6->np_rate = 0;
  VAR_6->np_other->np_rate = 0;
  return (0);
 }
 VAR_8 = FUNC_2(FUNC_0(VAR_5), FUNC_0(&VAR_7->t_termios));

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {

  VAR_10 = FUNC_3(VAR_7->t_termios.c_ospeed, VAR_5->c_ispeed);
  if (VAR_10 == 0) {
   VAR_6->np_rate = 0;
   VAR_6->np_other->np_rate = 0;
   return (0);
  }

  VAR_10 <<= VAR_1;
  VAR_10 /= VAR_8;
  VAR_9 = (VAR_2 << VAR_1) / VAR_10;
  if (VAR_9 == 0)
   VAR_9 = 1;

  VAR_10 *= VAR_9;
  VAR_10 /= VAR_2;

  VAR_6->np_credits = VAR_10;
  VAR_6->np_rate = VAR_9;
  FUNC_1(&VAR_6->np_callout, VAR_9, VAR_3, VAR_6);





  VAR_6 = VAR_6->np_other;
  VAR_5 = &VAR_7->t_termios;
  VAR_7 = VAR_4;
 }

 return (0);
}
