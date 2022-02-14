
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
typedef int speed_t ;


 int FUNC_0 (struct termios*) ;
 int FUNC_1 (struct termios*) ;

__attribute__((used)) static speed_t
FUNC_2(struct termios *VAR_0)
{
 speed_t VAR_1;

 if ((VAR_1 = FUNC_0(VAR_0)) == 0)
  VAR_1 = FUNC_1(VAR_0);
 return VAR_1;
}
