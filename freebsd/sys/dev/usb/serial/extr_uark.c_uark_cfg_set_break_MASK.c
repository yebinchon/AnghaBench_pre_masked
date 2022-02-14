
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ucom_softc {struct uark_softc* sc_parent; } ;
struct uark_softc {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct uark_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_0, uint8_t VAR_1)
{
 struct uark_softc *VAR_2 = VAR_0->sc_parent;

 FUNC_0("onoff=%d\n", VAR_1);

 FUNC_1(VAR_2, 4, VAR_1 ? 0x01 : 0x00);
}
