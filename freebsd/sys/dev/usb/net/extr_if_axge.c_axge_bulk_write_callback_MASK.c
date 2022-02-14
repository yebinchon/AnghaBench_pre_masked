
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int txhdr ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_2__ {int len; int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_capenable; int if_snd; } ;
struct axge_softc {int sc_flags; int sc_ue; } ;
struct axge_frame_txhdr {int len; int mss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct usb_xfer*) ;


 int FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct mbuf*) ;
 struct ifnet* FUNC_8 (int *) ;
 int FUNC_9 (struct usb_page_cache*,int,struct axge_frame_txhdr*,int) ;
 int FUNC_10 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_11 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_12 (struct usb_xfer*,int) ;
 int FUNC_13 (struct usb_xfer*,int,int) ;
 int FUNC_14 (struct usb_xfer*,int,int) ;
 int FUNC_15 (struct usb_xfer*,int) ;
 int FUNC_16 (struct usb_xfer*) ;
 struct axge_softc* FUNC_17 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_18(struct usb_xfer *VAR_10, usb_error_t VAR_11)
{
 struct axge_softc *VAR_12;
 struct ifnet *VAR_13;
 struct usb_page_cache *VAR_14;
 struct mbuf *VAR_15;
 struct axge_frame_txhdr VAR_16;
 int VAR_17, VAR_18;

 VAR_12 = FUNC_17(VAR_10);
 VAR_13 = FUNC_8(&VAR_12->sc_ue);

 switch (FUNC_4(VAR_10)) {
 case 128:
  VAR_13->if_drv_flags &= ~VAR_7;

 case 129:
tr_setup:
  if ((VAR_12->sc_flags & VAR_2) == 0 ||
      (VAR_13->if_drv_flags & VAR_7) != 0) {




   return;
  }

  for (VAR_17 = 0; VAR_17 < VAR_3 &&
      !FUNC_3(&VAR_13->if_snd); VAR_17++) {
   FUNC_2(&VAR_13->if_snd, VAR_15);
   if (VAR_15 == ((void*)0))
    break;
   FUNC_14(VAR_10, VAR_17 * VAR_8,
       VAR_17);
   VAR_14 = FUNC_12(VAR_10, VAR_17);
   VAR_16.mss = 0;
   VAR_16.len = FUNC_5(FUNC_0(VAR_15->m_pkthdr.len));
   if ((VAR_13->if_capenable & VAR_4) != 0 &&
       (VAR_15->m_pkthdr.csum_flags & VAR_1) == 0)
    VAR_16.len |= FUNC_5(VAR_0);

   VAR_18 = 0;
   FUNC_9(VAR_14, VAR_18, &VAR_16, sizeof(VAR_16));
   VAR_18 += sizeof(VAR_16);
   FUNC_10(VAR_14, VAR_18, VAR_15, 0, VAR_15->m_pkthdr.len);
   VAR_18 += VAR_15->m_pkthdr.len;





   FUNC_1(VAR_13, VAR_15);

   FUNC_7(VAR_15);


   FUNC_13(VAR_10, VAR_17, VAR_18);
  }
  if (VAR_17 != 0) {
   FUNC_6(VAR_13, VAR_6, VAR_17);
   FUNC_15(VAR_10, VAR_17);
   FUNC_11(VAR_10);
   VAR_13->if_drv_flags |= VAR_7;
  }
  return;

 default:
  FUNC_6(VAR_13, VAR_5, 1);
  VAR_13->if_drv_flags &= ~VAR_7;

  if (VAR_11 != VAR_9) {
   FUNC_16(VAR_10);
   goto tr_setup;
  }
  return;

 }
}
