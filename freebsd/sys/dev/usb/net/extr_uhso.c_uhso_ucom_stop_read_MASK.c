
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhso_softc {int ** sc_xfer; TYPE_1__* sc_tty; int sc_type; } ;
struct ucom_softc {size_t sc_subunit; struct uhso_softc* sc_parent; } ;
struct TYPE_2__ {scalar_t__ ht_open; int ** ht_xfer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_5)
{

 struct uhso_softc *VAR_6 = VAR_5->sc_parent;

 if (FUNC_0(VAR_6->sc_type) & VAR_4) {
  VAR_6->sc_tty[VAR_5->sc_subunit].ht_open = 0;
  FUNC_2(
      VAR_6->sc_tty[VAR_5->sc_subunit].ht_xfer[VAR_2]);
 }
 else if (FUNC_0(VAR_6->sc_type) & VAR_3) {
  VAR_6->sc_tty[0].ht_open = 0;
  FUNC_1(VAR_6->sc_xfer[VAR_1]);
  if (VAR_6->sc_xfer[VAR_0] != ((void*)0))
   FUNC_2(VAR_6->sc_xfer[VAR_0]);
 }
}
