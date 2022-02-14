
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_softc {int dummy; } ;
struct termios {int c_ospeed; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct ucom_softc *VAR_1, struct termios *VAR_2)
{
 if ((VAR_2->c_ospeed <= 1) || (VAR_2->c_ospeed > 115200))
  return (VAR_0);

 return (0);
}
