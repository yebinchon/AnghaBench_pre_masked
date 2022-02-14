
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kb_delay2; } ;
struct ukbd_softc {int sc_delay; scalar_t__ sc_co_basetime; int sc_callout; TYPE_1__ sc_kbd; } ;
typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ,struct ukbd_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ukbd_softc *VAR_3)
{
 sbintime_t VAR_4, VAR_5, VAR_6;

 VAR_5 = FUNC_1();


 if (VAR_3->sc_delay == 0)
  VAR_3->sc_delay = VAR_3->sc_kbd.kb_delay2;


 VAR_4 = VAR_1 * VAR_3->sc_delay;
 VAR_3->sc_co_basetime += VAR_4;


 if (VAR_3->sc_co_basetime < VAR_5)
  VAR_3->sc_co_basetime = VAR_5;


 VAR_6 = FUNC_0(VAR_4 >> 7, VAR_1 * 10);
 FUNC_2(&VAR_3->sc_callout, VAR_3->sc_co_basetime, VAR_6,
     VAR_2, VAR_3, VAR_0);
}
