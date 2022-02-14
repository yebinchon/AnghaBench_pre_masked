
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufoma_softc {int sc_num_msg; scalar_t__ sc_currentmode; int sc_modetoactivate; } ;
struct ucom_softc {struct ufoma_softc* sc_parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ufoma_softc*,int ) ;
 int FUNC_1 (struct ufoma_softc*) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_2)
{
 struct ufoma_softc *VAR_3 = VAR_2->sc_parent;



 if (VAR_3->sc_num_msg != 0xFF) {
  VAR_3->sc_num_msg++;
 }
 if (VAR_3->sc_currentmode == VAR_1) {
  FUNC_1(VAR_3);
 }
 if (VAR_3->sc_currentmode == VAR_0) {
  FUNC_0(VAR_3, VAR_3->sc_modetoactivate);
 }
}
