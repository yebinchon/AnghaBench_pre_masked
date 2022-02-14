
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_softc {int sc_parent; } ;
struct termios {int c_ospeed; } ;
 int FUNC_0 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct ucom_softc *VAR_1, struct termios *VAR_2)
{

 FUNC_0("sc = %p\n", VAR_1->sc_parent);

 switch (VAR_2->c_ospeed) {
 case 139:
 case 133:
 case 129:
 case 137:
 case 134:
 case 131:
 case 128:
 case 136:
 case 132:
 case 130:
 case 138:
 case 135:
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
