
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct termios {int c_ospeed; int c_ispeed; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct tty *VAR_2, struct termios *VAR_3)
{





 VAR_3->c_ispeed = VAR_1;
 VAR_3->c_ospeed = VAR_0;

 return (0);
}
