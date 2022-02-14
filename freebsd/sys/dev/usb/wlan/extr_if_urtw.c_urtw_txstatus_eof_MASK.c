
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct usb_xfer {int dummy; } ;
struct ieee80211com {int ic_oerrors; } ;
struct urtw_softc {int sc_txstatus; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct urtw_softc*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 struct urtw_softc* FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_3)
{
 struct urtw_softc *VAR_4 = FUNC_3(VAR_3);
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 uint64_t VAR_10;

 FUNC_4(VAR_3, &VAR_6, ((void*)0), ((void*)0), ((void*)0));

 if (VAR_6 != sizeof(uint64_t))
  return;

 VAR_10 = FUNC_2(VAR_4->sc_txstatus);
 VAR_7 = (VAR_10 >> 30) & 0x3;
 if (VAR_7 == VAR_1) {
  VAR_8 = VAR_10 & 0xff;
  VAR_9 = (VAR_10 >> 16) & 0xff;
  if (VAR_8 == VAR_2)
   FUNC_1(VAR_5->ic_oerrors, 1);
  FUNC_0(VAR_4, VAR_0, "pktretry %d seq %#x\n",
      VAR_8, VAR_9);
 }
}
