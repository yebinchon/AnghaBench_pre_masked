
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_attach_arg {int device; } ;
struct ieee80211com {int ic_name; } ;
struct rtwn_softc {int sc_mtx; int sc_dev; struct ieee80211com sc_ic; } ;
struct rtwn_usb_softc {int uc_udev; struct rtwn_softc uc_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_attach_arg*) ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rtwn_usb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (struct rtwn_softc*) ;
 int FUNC_7 (struct rtwn_softc*) ;
 int FUNC_8 (struct rtwn_softc*) ;
 int FUNC_9 (struct rtwn_softc*) ;
 int FUNC_10 (struct rtwn_softc*) ;
 int FUNC_11 (struct rtwn_usb_softc*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct rtwn_usb_softc*) ;
 int FUNC_14 (struct rtwn_softc*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_3)
{
 struct usb_attach_arg *VAR_4 = FUNC_1(VAR_3);
 struct rtwn_usb_softc *VAR_5 = FUNC_3(VAR_3);
 struct rtwn_softc *VAR_6 = &VAR_5->uc_sc;
 struct ieee80211com *VAR_7 = &VAR_6->sc_ic;
 int VAR_8;

 FUNC_4(VAR_3);
 VAR_5->uc_udev = VAR_4->device;
 VAR_6->sc_dev = VAR_3;
 VAR_7->ic_name = FUNC_2(VAR_3);


 FUNC_7(VAR_6);
 FUNC_14(VAR_6);
 FUNC_5(&VAR_6->sc_mtx, VAR_7->ic_name, VAR_2, VAR_1);

 FUNC_10(VAR_6);
 FUNC_11(VAR_5, FUNC_0(VAR_4));

 VAR_8 = FUNC_13(VAR_5);
 if (VAR_8 != 0)
  goto detach;


 VAR_8 = FUNC_8(VAR_6);
 if (VAR_8 != 0)
  goto detach;

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8 != 0)
  goto detach;


 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8 != 0)
  goto detach;

 return (0);

detach:
 FUNC_12(VAR_3);
 return (VAR_0);
}
