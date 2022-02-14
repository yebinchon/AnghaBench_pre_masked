
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_softc {int dummy; } ;
struct uchcom_divider {int dummy; } ;
struct termios {int c_cflag; int c_ospeed; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct uchcom_divider*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ucom_softc *VAR_4, struct termios *VAR_5)
{
 struct uchcom_divider VAR_6;

 switch (VAR_5->c_cflag & VAR_0) {
 case 128:
  break;
 default:
  return (VAR_2);
 }
 if ((VAR_5->c_cflag & VAR_1) != 0)
  return (VAR_2);
 if ((VAR_5->c_cflag & VAR_3) != 0)
  return (VAR_2);

 if (FUNC_0(&VAR_6, VAR_5->c_ospeed)) {
  return (VAR_2);
 }
 return (0);
}
