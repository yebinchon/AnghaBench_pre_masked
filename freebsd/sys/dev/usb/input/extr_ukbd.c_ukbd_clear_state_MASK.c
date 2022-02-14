
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ukbd_softc {int sc_flags; int sc_otime; int sc_ntime; int sc_odata; int sc_ndata; scalar_t__* sc_buffered_char; scalar_t__ sc_composed_char; scalar_t__ sc_accents; int sc_state; } ;
struct TYPE_3__ {struct ukbd_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(keyboard_t *VAR_3)
{
 struct ukbd_softc *VAR_4 = VAR_3->kb_data;

 FUNC_0();

 VAR_4->sc_flags &= ~(VAR_1 | VAR_2);
 VAR_4->sc_state &= VAR_0;
 VAR_4->sc_accents = 0;
 VAR_4->sc_composed_char = 0;




 FUNC_1(&VAR_4->sc_ndata, 0, sizeof(VAR_4->sc_ndata));
 FUNC_1(&VAR_4->sc_odata, 0, sizeof(VAR_4->sc_odata));
 FUNC_1(&VAR_4->sc_ntime, 0, sizeof(VAR_4->sc_ntime));
 FUNC_1(&VAR_4->sc_otime, 0, sizeof(VAR_4->sc_otime));
}
