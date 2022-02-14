
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {TYPE_1__* sc_hwmap; scalar_t__ sc_blinking; int sc_ledevent; } ;
struct TYPE_2__ {int ledoff; int ledon; } ;


 int FUNC_0 (struct ath_softc*,int ,int ) ;
 int VAR_0 ;

void
FUNC_1(struct ath_softc *VAR_1, int VAR_2)
{
 VAR_1->sc_ledevent = VAR_0;
 if (VAR_1->sc_blinking)
  return;
 FUNC_0(VAR_1, VAR_1->sc_hwmap[VAR_2].ledon, VAR_1->sc_hwmap[VAR_2].ledoff);
}
