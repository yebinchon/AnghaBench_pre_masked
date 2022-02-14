
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,struct termios const*) ;
 int VAR_6 ;

int
FUNC_1(int VAR_7, int VAR_8, const struct termios *VAR_9)
{
 struct termios VAR_10;

 if (VAR_8 & VAR_2) {
  VAR_10 = *VAR_9;
  VAR_10.c_cflag |= VAR_0;
  VAR_9 = &VAR_10;
 }
 switch (VAR_8 & ~VAR_2) {
 case 128:
  return (FUNC_0(VAR_7, VAR_3, VAR_9));
 case 130:
  return (FUNC_0(VAR_7, VAR_5, VAR_9));
 case 129:
  return (FUNC_0(VAR_7, VAR_4, VAR_9));
 default:
  VAR_6 = VAR_1;
  return (-1);
 }
}
