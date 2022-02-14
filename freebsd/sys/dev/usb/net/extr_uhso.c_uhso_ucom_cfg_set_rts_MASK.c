
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct uhso_softc {int sc_line; int sc_type; } ;
struct ucom_softc {struct uhso_softc* sc_parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct uhso_softc*) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_2, uint8_t VAR_3)
{
 struct uhso_softc *VAR_4 = VAR_2->sc_parent;

 if (!(FUNC_0(VAR_4->sc_type) & VAR_1))
  return;

 if (VAR_3)
  VAR_4->sc_line |= VAR_0;
 else
  VAR_4->sc_line &= ~VAR_0;

 FUNC_1(VAR_4);
}
