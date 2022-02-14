
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_ospeed; } ;
typedef int speed_t ;



int
FUNC_0(struct termios *VAR_0, speed_t VAR_1)
{

 VAR_0->c_ospeed = VAR_1;
 return (0);
}
