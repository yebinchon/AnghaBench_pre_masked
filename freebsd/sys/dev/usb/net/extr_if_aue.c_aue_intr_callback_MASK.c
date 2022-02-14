
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct aue_softc {int sc_ue; } ;
struct aue_intrpkt {int aue_txstat0; } ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct ifnet*,int ,int) ;
 struct ifnet* FUNC_2 (int *) ;
 int FUNC_3 (struct usb_page_cache*,int ,struct aue_intrpkt*,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct aue_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_6, usb_error_t VAR_7)
{
 struct aue_softc *VAR_8 = FUNC_9(VAR_6);
 struct ifnet *VAR_9 = FUNC_2(&VAR_8->sc_ue);
 struct aue_intrpkt VAR_10;
 struct usb_page_cache *VAR_11;
 int VAR_12;

 FUNC_10(VAR_6, &VAR_12, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_0(VAR_6)) {
 case 128:

  if ((VAR_9->if_drv_flags & VAR_4) &&
      VAR_12 >= (int)sizeof(VAR_10)) {

   VAR_11 = FUNC_5(VAR_6, 0);
   FUNC_3(VAR_11, 0, &VAR_10, sizeof(VAR_10));

   if (VAR_10.aue_txstat0)
    FUNC_1(VAR_9, VAR_3, 1);
   if (VAR_10.aue_txstat0 & (VAR_1 |
       VAR_0))
    FUNC_1(VAR_9, VAR_2, 1);
  }

 case 129:
tr_setup:
  FUNC_7(VAR_6, 0, FUNC_6(VAR_6));
  FUNC_4(VAR_6);
  return;

 default:
  if (VAR_7 != VAR_5) {

   FUNC_8(VAR_6);
   goto tr_setup;
  }
  return;
 }
}
