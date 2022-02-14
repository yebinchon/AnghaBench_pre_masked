
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhso_softc {int * sc_xfer; int sc_type; TYPE_1__* sc_tty; } ;
struct ucom_softc {size_t sc_subunit; struct uhso_softc* sc_parent; } ;
struct TYPE_2__ {int * ht_xfer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_4)
{
 struct uhso_softc *VAR_5 = VAR_4->sc_parent;

 if (FUNC_0(VAR_5->sc_type) & VAR_3) {
  FUNC_1(
      VAR_5->sc_tty[VAR_4->sc_subunit].ht_xfer[VAR_1]);
 }
 else if (FUNC_0(VAR_5->sc_type) & VAR_2) {
  FUNC_1(VAR_5->sc_xfer[VAR_0]);
 }
}
