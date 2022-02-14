
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uplcom_softc {int sc_chiptype; } ;
struct ucom_softc {struct uplcom_softc* sc_parent; } ;
struct termios {int c_ospeed; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;


 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct ucom_softc *VAR_1, struct termios *VAR_2)
{
 struct uplcom_softc *VAR_3 = VAR_1->sc_parent;

 FUNC_0("\n");
 if (VAR_2->c_ospeed & 0x80000000)
  return 0;
 switch (VAR_3->sc_chiptype) {
  case 128:
   if (VAR_2->c_ospeed <= 12000000)
    return (0);
   break;
  case 129:
   if (VAR_2->c_ospeed <= 6000000)
    return (0);
   break;
  default:
   if (FUNC_1(VAR_2->c_ospeed))
    return (0);
   break;
 }

 FUNC_0("uplcom_param: bad baud rate (%d)\n", VAR_2->c_ospeed);
 return (VAR_0);
}
