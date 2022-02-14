
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ucom_softc {struct ubsa_softc* sc_parent; } ;
struct ubsa_softc {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct ubsa_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_1, uint8_t VAR_2)
{
 struct ubsa_softc *VAR_3 = VAR_1->sc_parent;

 FUNC_0("onoff = %d\n", VAR_2);

 FUNC_1(VAR_3, VAR_0, VAR_2 ? 1 : 0);
}
