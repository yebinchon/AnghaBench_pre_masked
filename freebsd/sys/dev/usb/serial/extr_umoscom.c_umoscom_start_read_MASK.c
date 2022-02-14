
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umoscom_softc {int * sc_xfer; } ;
struct ucom_softc {struct umoscom_softc* sc_parent; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_2)
{
 struct umoscom_softc *VAR_3 = VAR_2->sc_parent;






 FUNC_0(VAR_3->sc_xfer[VAR_0]);
}
