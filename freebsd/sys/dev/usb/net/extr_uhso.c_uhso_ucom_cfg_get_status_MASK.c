
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uhso_softc {int sc_msr; int sc_lsr; } ;
struct ucom_softc {struct uhso_softc* sc_parent; } ;



__attribute__((used)) static void
FUNC_0(struct ucom_softc *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 struct uhso_softc *VAR_3 = VAR_0->sc_parent;

 *VAR_1 = VAR_3->sc_lsr;
 *VAR_2 = VAR_3->sc_msr;
}
