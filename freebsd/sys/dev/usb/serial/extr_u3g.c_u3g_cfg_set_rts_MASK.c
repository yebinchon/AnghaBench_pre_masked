
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ucom_softc {size_t sc_subunit; struct u3g_softc* sc_parent; } ;
struct u3g_softc {int * sc_line; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct ucom_softc*) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_1, uint8_t VAR_2)
{
 struct u3g_softc *VAR_3 = VAR_1->sc_parent;

 FUNC_0("onoff = %d\n", VAR_2);

 if (VAR_2)
  VAR_3->sc_line[VAR_1->sc_subunit] |= VAR_0;
 else
  VAR_3->sc_line[VAR_1->sc_subunit] &= ~VAR_0;

 FUNC_1(VAR_1);
}
