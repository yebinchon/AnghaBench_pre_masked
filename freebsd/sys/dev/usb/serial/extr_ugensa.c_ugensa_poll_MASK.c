
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ugensa_sub_softc {int sc_xfer; } ;
struct ugensa_softc {struct ugensa_sub_softc* sc_sub; } ;
struct ucom_softc {int sc_portno; struct ugensa_softc* sc_parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_1)
{
 struct ugensa_softc *VAR_2 = VAR_1->sc_parent;
 struct ugensa_sub_softc *VAR_3 = VAR_2->sc_sub + VAR_1->sc_portno;

 FUNC_0(VAR_3->sc_xfer, VAR_0);
}
