
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct uvscom_softc {int sc_line; } ;
struct ucom_softc {struct uvscom_softc* sc_parent; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uvscom_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_2, uint8_t VAR_3)
{
 struct uvscom_softc *VAR_4 = VAR_2->sc_parent;

 FUNC_0("onoff = %d\n", VAR_3);

 if (VAR_3)
  VAR_4->sc_line |= VAR_1;
 else
  VAR_4->sc_line &= ~VAR_1;

 FUNC_1(VAR_4, VAR_0, VAR_4->sc_line);
}
