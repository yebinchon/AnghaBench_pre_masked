
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
typedef int txhdr ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct smsc_softc {int sc_flags; int sc_ue; } ;
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
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 (struct usb_xfer*) ;


 int FUNC_6 (int) ;
 int FUNC_7 (struct ifnet*,int ,int) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct smsc_softc*,char*,int ) ;
 struct ifnet* FUNC_10 (int *) ;
 int FUNC_11 (struct usb_page_cache*,int,int*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_14 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_15 (struct usb_xfer*,int) ;
 int FUNC_16 (struct usb_xfer*,int,int) ;
 int FUNC_17 (struct usb_xfer*,int,int) ;
 int FUNC_18 (struct usb_xfer*,int) ;
 int FUNC_19 (struct usb_xfer*) ;
 struct smsc_softc* FUNC_20 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_21(struct usb_xfer *VAR_8, usb_error_t VAR_9)
{
 struct smsc_softc *VAR_10 = FUNC_20(VAR_8);
 struct ifnet *VAR_11 = FUNC_10(&VAR_10->sc_ue);
 struct usb_page_cache *VAR_12;
 struct mbuf *VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15 = 0;
 int VAR_16;

 switch (FUNC_5(VAR_8)) {
 case 128:
  VAR_11->if_drv_flags &= ~VAR_2;


 case 129:
tr_setup:
  if ((VAR_10->sc_flags & VAR_4) == 0 ||
   (VAR_11->if_drv_flags & VAR_2) != 0) {

   return;
  }

  for (VAR_16 = 0; VAR_16 < 16 &&
      !FUNC_2(&VAR_11->if_snd); VAR_16++) {
   FUNC_1(&VAR_11->if_snd, VAR_13);
   if (VAR_13 == ((void*)0))
    break;
   FUNC_17(VAR_8, VAR_16 * VAR_3,
       VAR_16);
   VAR_15 = 0;
   VAR_12 = FUNC_15(VAR_8, VAR_16);




   VAR_14 = FUNC_3(VAR_13->m_pkthdr.len) |
     VAR_5 | VAR_6;
   VAR_14 = FUNC_6(VAR_14);
   FUNC_11(VAR_12, 0, &VAR_14, sizeof(VAR_14));

   VAR_14 = FUNC_4(VAR_13->m_pkthdr.len);
   VAR_14 = FUNC_6(VAR_14);
   FUNC_11(VAR_12, 4, &VAR_14, sizeof(VAR_14));

   VAR_15 += 8;


   FUNC_13(VAR_12, VAR_15, VAR_13, 0, VAR_13->m_pkthdr.len);
   VAR_15 += VAR_13->m_pkthdr.len;

   FUNC_7(VAR_11, VAR_1, 1);


   FUNC_0(VAR_11, VAR_13);

   FUNC_8(VAR_13);


   FUNC_16(VAR_8, VAR_16, VAR_15);
  }
  if (VAR_16 != 0) {
   FUNC_18(VAR_8, VAR_16);
   FUNC_14(VAR_8);
   VAR_11->if_drv_flags |= VAR_2;
  }
  return;

 default:
  FUNC_7(VAR_11, VAR_0, 1);
  VAR_11->if_drv_flags &= ~VAR_2;

  if (VAR_9 != VAR_7) {
   FUNC_9(VAR_10, "usb error on tx: %s\n", FUNC_12(VAR_9));
   FUNC_19(VAR_8);
   goto tr_setup;
  }
  return;
 }
}
