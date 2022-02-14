
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufoma_softc {int * sc_bulk_xfer; int * sc_ctrl_xfer; scalar_t__ sc_nobulk; } ;
struct ucom_softc {struct ufoma_softc* sc_parent; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_2)
{
 struct ufoma_softc *VAR_3 = VAR_2->sc_parent;

 if (VAR_3->sc_nobulk) {
  FUNC_0(VAR_3->sc_ctrl_xfer[VAR_1]);
 } else {
  FUNC_0(VAR_3->sc_bulk_xfer[VAR_0]);
 }
}
