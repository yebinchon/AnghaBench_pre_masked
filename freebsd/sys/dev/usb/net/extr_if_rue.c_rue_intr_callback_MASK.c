
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct rue_softc {int sc_ue; } ;
struct rue_intrpkt {int rue_col_cnt; int rue_crcerr_cnt; int rue_rxlost_cnt; } ;
struct ifnet {int if_drv_flags; } ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct ifnet*,int ,int ) ;
 struct ifnet* FUNC_2 (int *) ;
 int FUNC_3 (struct usb_page_cache*,int ,struct rue_intrpkt*,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct rue_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct rue_softc *VAR_6 = FUNC_9(VAR_4);
 struct ifnet *VAR_7 = FUNC_2(&VAR_6->sc_ue);
 struct rue_intrpkt VAR_8;
 struct usb_page_cache *VAR_9;
 int VAR_10;

 FUNC_10(VAR_4, &VAR_10, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_0(VAR_4)) {
 case 128:

  if (VAR_7 && (VAR_7->if_drv_flags & VAR_2) &&
      VAR_10 >= (int)sizeof(VAR_8)) {

   VAR_9 = FUNC_5(VAR_4, 0);
   FUNC_3(VAR_9, 0, &VAR_8, sizeof(VAR_8));

   FUNC_1(VAR_7, VAR_1, VAR_8.rue_rxlost_cnt);
   FUNC_1(VAR_7, VAR_1, VAR_8.rue_crcerr_cnt);
   FUNC_1(VAR_7, VAR_0, VAR_8.rue_col_cnt);
  }

 case 129:
tr_setup:
  FUNC_7(VAR_4, 0, FUNC_6(VAR_4));
  FUNC_4(VAR_4);
  return;

 default:
  if (VAR_5 != VAR_3) {

   FUNC_8(VAR_4);
   goto tr_setup;
  }
  return;
 }
}
