
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uhso_softc {int ** sc_xfer; TYPE_2__* sc_tty; int sc_type; } ;
struct ucom_softc {size_t sc_subunit; TYPE_1__* sc_super; struct uhso_softc* sc_parent; } ;
struct TYPE_4__ {int ht_open; } ;
struct TYPE_3__ {int sc_unit; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*,int ,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_5)
{
 struct uhso_softc *VAR_6 = VAR_5->sc_parent;

 FUNC_0(3, "unit=%d, subunit=%d\n",
     VAR_5->sc_super->sc_unit, VAR_5->sc_subunit);

 if (FUNC_1(VAR_6->sc_type) & VAR_3) {
  VAR_6->sc_tty[VAR_5->sc_subunit].ht_open = 1;
  FUNC_2(VAR_6->sc_xfer[VAR_4]);
 }
 else if (FUNC_1(VAR_6->sc_type) & VAR_2) {
  VAR_6->sc_tty[0].ht_open = 1;
  FUNC_2(VAR_6->sc_xfer[VAR_1]);
  if (VAR_6->sc_xfer[VAR_0] != ((void*)0))
   FUNC_2(VAR_6->sc_xfer[VAR_0]);
 }
}
