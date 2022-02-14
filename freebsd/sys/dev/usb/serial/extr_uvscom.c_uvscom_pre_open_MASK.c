
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvscom_softc {int sc_unit_status; } ;
struct ucom_softc {struct uvscom_softc* sc_parent; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct ucom_softc *VAR_2)
{
 struct uvscom_softc *VAR_3 = VAR_2->sc_parent;

 FUNC_0("sc = %p\n", VAR_3);



 if (VAR_3->sc_unit_status & VAR_1) {
  FUNC_0("no PC card!\n");
  return (VAR_0);
 }
 return (0);
}
