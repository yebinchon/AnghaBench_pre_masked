
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_softc {int dummy; } ;
struct termios {int c_ospeed; int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_1(struct ucom_softc *VAR_8, struct termios *VAR_9)
{
 FUNC_0("\n");
 switch (VAR_9->c_ospeed) {
 case 9600:
  break;
 default:
  return (VAR_6);
 }


 if (VAR_9->c_cflag & VAR_5)
  return (VAR_6);


 if (VAR_9->c_cflag & VAR_7)
  return (VAR_6);


 switch (VAR_9->c_cflag & VAR_4) {
 case 128:
  break;
 default:
  return (VAR_6);
 }


 if ((VAR_9->c_cflag &
     (VAR_3 | VAR_2 | VAR_1 | VAR_0)) != 0)
  return (VAR_6);







 return (0);
}
