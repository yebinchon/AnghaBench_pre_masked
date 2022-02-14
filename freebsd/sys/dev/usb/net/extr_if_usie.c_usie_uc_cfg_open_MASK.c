
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usie_softc {int ** sc_uc_xfer; } ;
struct ucom_softc {size_t sc_subunit; struct usie_softc* sc_parent; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_1)
{
 struct usie_softc *VAR_2 = VAR_1->sc_parent;



 FUNC_0(VAR_2->sc_uc_xfer[VAR_1->sc_subunit][VAR_0]);
}
