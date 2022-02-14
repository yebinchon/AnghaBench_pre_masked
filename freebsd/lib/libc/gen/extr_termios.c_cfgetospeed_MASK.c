
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_ospeed; } ;
typedef int speed_t ;



speed_t
FUNC_0(const struct termios *VAR_0)
{

 return (VAR_0->c_ospeed);
}
