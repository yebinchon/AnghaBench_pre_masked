
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; scalar_t__ c_ospeed; scalar_t__ c_ispeed; } ;
struct tty {struct termios t_termios_init_out; struct termios t_termios_init_in; } ;
typedef scalar_t__ speed_t ;


 int VAR_0 ;

void
FUNC_0(struct tty *VAR_1, speed_t VAR_2)
{
 struct termios *VAR_3 = &VAR_1->t_termios_init_in;
 struct termios *VAR_4 = &VAR_1->t_termios_init_out;

 if (VAR_2 != 0) {
  VAR_3->c_ispeed = VAR_3->c_ospeed = VAR_2;
  VAR_4->c_ispeed = VAR_4->c_ospeed = VAR_2;
 }

 VAR_3->c_cflag |= VAR_0;
 VAR_4->c_cflag |= VAR_0;
}
