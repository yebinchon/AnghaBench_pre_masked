
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint32_t ;
struct urtw_softc {int sc_flags; scalar_t__ (* sc_rf_set_chan ) (struct urtw_softc*,int ) ;int sc_dev; int * sc_curchan; int sc_mtx; } ;
struct ieee80211com {int * ic_curchan; struct urtw_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct urtw_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct urtw_softc*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ieee80211com*,int *) ;
 scalar_t__ FUNC_4 (struct urtw_softc*,int ) ;
 int FUNC_5 (struct urtw_softc*,int ,int*) ;
 int FUNC_6 (struct urtw_softc*,int ,int) ;
 int FUNC_7 (struct urtw_softc*,int ,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void
FUNC_9(struct ieee80211com *VAR_8)
{
 struct urtw_softc *VAR_9 = VAR_8->ic_softc;
 uint32_t VAR_10, VAR_11;
 usb_error_t VAR_12;







 if (!(VAR_9->sc_flags & VAR_4))
  return;

 if (VAR_9->sc_curchan != ((void*)0) && VAR_9->sc_curchan == VAR_8->ic_curchan)
  return;

 FUNC_0(VAR_9);





 FUNC_5(VAR_9, VAR_5, &VAR_11);
 VAR_10 = VAR_11 & ~VAR_7;
 FUNC_7(VAR_9, VAR_5, VAR_10 | VAR_6);

 VAR_12 = VAR_9->sc_rf_set_chan(VAR_9, FUNC_3(VAR_8, VAR_8->ic_curchan));
 if (VAR_12 != 0)
  goto fail;
 FUNC_8(&VAR_9->sc_mtx, 10);
 FUNC_7(VAR_9, VAR_5, VAR_11);

 FUNC_6(VAR_9, VAR_1, 2);
 FUNC_6(VAR_9, VAR_0, 100);
 FUNC_6(VAR_9, VAR_2, 100);
 FUNC_6(VAR_9, VAR_3, 100);

fail:
 FUNC_1(VAR_9);

 VAR_9->sc_curchan = VAR_8->ic_curchan;

 if (VAR_12 != 0)
  FUNC_2(VAR_9->sc_dev, "could not change the channel\n");
}
