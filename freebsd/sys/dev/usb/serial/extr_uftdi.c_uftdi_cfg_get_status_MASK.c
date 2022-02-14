
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uftdi_softc {int sc_lsr; int sc_msr; } ;
struct ucom_softc {struct uftdi_softc* sc_parent; } ;


 int FUNC_0 (int,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 struct uftdi_softc *VAR_3 = VAR_0->sc_parent;

 FUNC_0(3, "msr=0x%02x lsr=0x%02x\n", VAR_3->sc_msr, VAR_3->sc_lsr);

 *VAR_2 = VAR_3->sc_msr;
 *VAR_1 = VAR_3->sc_lsr;
}
