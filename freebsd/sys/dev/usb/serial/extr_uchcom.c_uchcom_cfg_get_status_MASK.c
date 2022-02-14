
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ucom_softc {struct uchcom_softc* sc_parent; } ;
struct uchcom_softc {int sc_msr; int sc_lsr; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 struct uchcom_softc *VAR_3 = VAR_0->sc_parent;

 FUNC_0("\n");


 *VAR_1 = VAR_3->sc_lsr;
 *VAR_2 = VAR_3->sc_msr;
}
