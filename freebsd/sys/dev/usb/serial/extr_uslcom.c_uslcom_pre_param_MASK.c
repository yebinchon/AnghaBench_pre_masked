
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct uslcom_softc {int sc_partnum; } ;
struct ucom_softc {struct uslcom_softc* sc_parent; } ;
struct termios {scalar_t__ c_ospeed; } ;


 int VAR_0 ;






__attribute__((used)) static int
FUNC_0(struct ucom_softc *VAR_1, struct termios *VAR_2)
{
 struct uslcom_softc *VAR_3 = VAR_1->sc_parent;
 uint32_t VAR_4;

 switch (VAR_3->sc_partnum) {
 case 129:
 case 128:
  VAR_4 = 2000000;
  break;
 case 132:
 case 131:
 case 130:
 default:
  VAR_4 = 921600;
  break;
 }
 if (VAR_2->c_ospeed <= 0 || VAR_2->c_ospeed > VAR_4)
  return (VAR_0);
 return (0);
}
