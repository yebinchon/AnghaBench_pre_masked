
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upgt_softc {int sc_flags; int sc_watchdog_ch; int * sc_xfer; } ;


 int VAR_0 ;
 int FUNC_0 (struct upgt_softc*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,struct upgt_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct upgt_softc*,int ) ;
 int FUNC_3 (struct upgt_softc*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct upgt_softc *VAR_5)
{

 FUNC_0(VAR_5);

 if (VAR_5->sc_flags & VAR_2)
  FUNC_3(VAR_5);

 FUNC_4(VAR_5->sc_xfer[VAR_1]);

 (void)FUNC_2(VAR_5, VAR_0);

 VAR_5->sc_flags |= VAR_2;

 FUNC_1(&VAR_5->sc_watchdog_ch, VAR_3, VAR_4, VAR_5);
}
