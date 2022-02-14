
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ucom_softc {size_t sc_subunit; struct u3g_softc* sc_parent; } ;
struct u3g_softc {int * sc_msr; int * sc_lsr; } ;



__attribute__((used)) static void
FUNC_0(struct ucom_softc *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 struct u3g_softc *VAR_3 = VAR_0->sc_parent;


 *VAR_1 = VAR_3->sc_lsr[VAR_0->sc_subunit];
 *VAR_2 = VAR_3->sc_msr[VAR_0->sc_subunit];
}
