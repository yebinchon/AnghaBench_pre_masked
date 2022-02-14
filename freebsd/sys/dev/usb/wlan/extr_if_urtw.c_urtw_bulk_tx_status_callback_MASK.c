
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint64_t ;
struct usb_xfer {int dummy; } ;
struct ieee80211com {int ic_ierrors; } ;
struct urtw_softc {int sc_txstatus; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct urtw_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int) ;
 int FUNC_3 (void*,int *,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*) ;
 void* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*,int ,int) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct urtw_softc* FUNC_9 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct urtw_softc *VAR_3 = FUNC_9(VAR_1);
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 void *VAR_5 = FUNC_6(VAR_1, 0);

 FUNC_0(VAR_3);

 switch (FUNC_1(VAR_1)) {
 case 128:
  FUNC_4(VAR_1);

 case 129:
setup:
  FUNC_3(VAR_5, &VAR_3->sc_txstatus, sizeof(uint64_t));
  FUNC_7(VAR_1, 0, sizeof(uint64_t));
  FUNC_5(VAR_1);
  break;
 default:
  if (VAR_2 != VAR_0) {
   FUNC_8(VAR_1);
   FUNC_2(VAR_4->ic_ierrors, 1);
   goto setup;
  }
  break;
 }
}
