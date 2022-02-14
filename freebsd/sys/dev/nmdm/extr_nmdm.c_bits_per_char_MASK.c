
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct termios *VAR_3)
{
 int VAR_4;

 VAR_4 = 1;
 switch (VAR_3->c_cflag & VAR_0) {
 case 131: VAR_4 += 5; break;
 case 130: VAR_4 += 6; break;
 case 129: VAR_4 += 7; break;
 case 128: VAR_4 += 8; break;
 }
 VAR_4++;
 if (VAR_3->c_cflag & VAR_2)
  VAR_4++;
 if (VAR_3->c_cflag & VAR_1)
  VAR_4++;
 return (VAR_4);
}
