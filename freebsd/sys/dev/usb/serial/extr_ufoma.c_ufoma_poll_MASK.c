
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufoma_softc {int sc_bulk_xfer; int sc_ctrl_xfer; } ;
struct ucom_softc {struct ufoma_softc* sc_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_2)
{
 struct ufoma_softc *VAR_3 = VAR_2->sc_parent;
 FUNC_0(VAR_3->sc_ctrl_xfer, VAR_1);
 FUNC_0(VAR_3->sc_bulk_xfer, VAR_0);
}
