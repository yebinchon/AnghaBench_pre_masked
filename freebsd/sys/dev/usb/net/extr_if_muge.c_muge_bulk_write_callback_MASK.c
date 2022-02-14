
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
typedef int tx_cmd_b ;
typedef int tx_cmd_a ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct muge_softc {int sc_flags; int sc_ue; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (int) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct muge_softc*,char*,...) ;
 int FUNC_8 (struct muge_softc*,char*,int ) ;
 struct ifnet* FUNC_9 (int *) ;
 int FUNC_10 (struct usb_page_cache*,int,int*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_14 (struct usb_xfer*,int) ;
 int FUNC_15 (struct usb_xfer*,int,int) ;
 int FUNC_16 (struct usb_xfer*,int,int) ;
 int FUNC_17 (struct usb_xfer*,int) ;
 int FUNC_18 (struct usb_xfer*) ;
 struct muge_softc* FUNC_19 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_20(struct usb_xfer *VAR_8, usb_error_t VAR_9)
{
 struct muge_softc *VAR_10 = FUNC_19(VAR_8);
 struct ifnet *VAR_11 = FUNC_9(&VAR_10->sc_ue);
 struct usb_page_cache *VAR_12;
 struct mbuf *VAR_13;
 int VAR_14;
 uint32_t VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;

 switch (FUNC_3(VAR_8)) {
 case 128:
  FUNC_7(VAR_10,
      "USB TRANSFER status: USB_ST_TRANSFERRED\n");
  VAR_11->if_drv_flags &= ~VAR_2;

 case 129:
  FUNC_7(VAR_10, "USB TRANSFER status: USB_ST_SETUP\n");
tr_setup:
  if ((VAR_10->sc_flags & VAR_4) == 0 ||
   (VAR_11->if_drv_flags & VAR_2) != 0) {
   FUNC_7(VAR_10,
       "sc->sc_flags & MUGE_FLAG_LINK: %d\n",
       (VAR_10->sc_flags & VAR_4));
   FUNC_7(VAR_10,
       "ifp->if_drv_flags & IFF_DRV_OACTIVE: %d\n",
       (VAR_11->if_drv_flags & VAR_2));
   FUNC_7(VAR_10,
       "USB TRANSFER not sending: no link or controller is busy \n");




   return;
  }
  for (VAR_14 = 0; VAR_14 < 16 &&
      !FUNC_2(&VAR_11->if_snd); VAR_14++) {
   FUNC_1(&VAR_11->if_snd, VAR_13);
   if (VAR_13 == ((void*)0))
    break;
   FUNC_16(VAR_8, VAR_14 * VAR_3,
    VAR_14);
   VAR_15 = 0;
   VAR_12 = FUNC_14(VAR_8, VAR_14);





   VAR_16 = (VAR_13->m_pkthdr.len & VAR_6) |
        VAR_5;
   VAR_16 = FUNC_4(VAR_16);
   FUNC_10(VAR_12, 0, &VAR_16, sizeof(VAR_16));

   VAR_17 = 0;


   VAR_17 = FUNC_4(VAR_17);
   FUNC_10(VAR_12, 4, &VAR_17, sizeof(VAR_17));

   VAR_15 += 8;


   FUNC_12(VAR_12, VAR_15, VAR_13, 0, VAR_13->m_pkthdr.len);
   VAR_15 += VAR_13->m_pkthdr.len;

   FUNC_5(VAR_11, VAR_1, 1);





   FUNC_0(VAR_11, VAR_13);
   FUNC_6(VAR_13);


   FUNC_15(VAR_8, VAR_14, VAR_15);
  }

  FUNC_7(VAR_10, "USB TRANSFER nframes: %d\n", VAR_14);
  if (VAR_14 != 0) {
   FUNC_7(VAR_10, "USB TRANSFER submit attempt\n");
   FUNC_17(VAR_8, VAR_14);
   FUNC_13(VAR_8);
   VAR_11->if_drv_flags |= VAR_2;
  }
  return;

 default:
  FUNC_5(VAR_11, VAR_0, 1);
  VAR_11->if_drv_flags &= ~VAR_2;

  if (VAR_9 != VAR_7) {
   FUNC_8(VAR_10,
       "usb error on tx: %s\n", FUNC_11(VAR_9));
   FUNC_18(VAR_8);
   goto tr_setup;
  }
  return;
 }
}
