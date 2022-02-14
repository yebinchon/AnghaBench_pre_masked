
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_softc {size_t sc_subunit; struct u3g_softc* sc_parent; } ;
struct u3g_softc {int * sc_xfer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_1)
{
 struct u3g_softc *VAR_2 = VAR_1->sc_parent;
 FUNC_0(VAR_2->sc_xfer[VAR_1->sc_subunit], VAR_0);
}
