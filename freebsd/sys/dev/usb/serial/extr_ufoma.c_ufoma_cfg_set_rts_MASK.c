
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ufoma_softc {int sc_line; scalar_t__ sc_nobulk; } ;
struct ucom_softc {struct ufoma_softc* sc_parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufoma_softc*) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_1, uint8_t VAR_2)
{
 struct ufoma_softc *VAR_3 = VAR_1->sc_parent;

 if (VAR_3->sc_nobulk) {
  return;
 }
 if (VAR_2)
  VAR_3->sc_line |= VAR_0;
 else
  VAR_3->sc_line &= ~VAR_0;

 FUNC_0(VAR_3);
}
