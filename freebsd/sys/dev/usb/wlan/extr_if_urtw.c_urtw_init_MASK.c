
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct urtw_softc {int sc_flags; int sc_watchdog_ch; int * sc_xfer; scalar_t__ sc_txtimer; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct urtw_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,struct urtw_softc*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct urtw_softc*) ;
 scalar_t__ FUNC_3 (struct urtw_softc*) ;
 int FUNC_4 (struct urtw_softc*) ;
 int FUNC_5 (struct urtw_softc*) ;
 scalar_t__ FUNC_6 (struct urtw_softc*) ;
 int FUNC_7 (struct urtw_softc*) ;
 scalar_t__ FUNC_8 (struct urtw_softc*) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct urtw_softc *VAR_6)
{
 usb_error_t VAR_7;
 int VAR_8;

 FUNC_0(VAR_6);

 if (VAR_6->sc_flags & VAR_3)
  FUNC_7(VAR_6);

 VAR_7 = (VAR_6->sc_flags & VAR_2) ? FUNC_3(VAR_6) :
     FUNC_2(VAR_6);
 if (VAR_7 != 0)
  goto fail;


 VAR_6->sc_txtimer = 0;

 if (!(VAR_6->sc_flags & VAR_1)) {
  VAR_8 = FUNC_4(VAR_6);
  if (VAR_8 != 0)
   goto fail;
  VAR_8 = FUNC_5(VAR_6);
  if (VAR_8 != 0)
   goto fail;
  VAR_6->sc_flags |= VAR_1;
 }

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7 != 0)
  goto fail;
 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7 != 0)
  goto fail;

 if (VAR_6->sc_flags & VAR_2)
  FUNC_9(VAR_6->sc_xfer[VAR_0]);

 VAR_6->sc_flags |= VAR_3;

 FUNC_1(&VAR_6->sc_watchdog_ch, VAR_4, VAR_5, VAR_6);
fail:
 return;
}
