
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uipaq_softc {int * sc_xfer; } ;
struct ucom_softc {struct uipaq_softc* sc_parent; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_1)
{
 struct uipaq_softc *VAR_2 = VAR_1->sc_parent;


 FUNC_0(VAR_2->sc_xfer[VAR_0]);
}
