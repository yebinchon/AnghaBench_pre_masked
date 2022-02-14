
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ucom_softc {struct uchcom_softc* sc_parent; } ;
struct uchcom_softc {int sc_rts; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct uchcom_softc*) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_0, uint8_t VAR_1)
{
 struct uchcom_softc *VAR_2 = VAR_0->sc_parent;

 FUNC_0("onoff = %d\n", VAR_1);

 VAR_2->sc_rts = VAR_1;
 FUNC_1(VAR_2);
}
