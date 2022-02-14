
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_2__ {int len; int csum_flags; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_capabilities; int if_snd; } ;
struct axe_softc {int sc_flags; int sc_ue; } ;
struct axe_sframe_hdr {int len; int ilen; } ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct axe_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct usb_xfer*) ;


 int FUNC_6 (int) ;
 int FUNC_7 (struct ifnet*,int ,int) ;
 int FUNC_8 (struct mbuf*) ;
 struct ifnet* FUNC_9 (int *) ;
 int FUNC_10 (struct usb_page_cache*,int,struct axe_sframe_hdr*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_14 (struct usb_xfer*,int) ;
 int FUNC_15 (struct usb_xfer*,int,int) ;
 int FUNC_16 (struct usb_xfer*,int,int) ;
 int FUNC_17 (struct usb_xfer*,int) ;
 int FUNC_18 (struct usb_xfer*) ;
 struct axe_softc* FUNC_19 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_20(struct usb_xfer *VAR_10, usb_error_t VAR_11)
{
 struct axe_softc *VAR_12 = FUNC_19(VAR_10);
 struct axe_sframe_hdr VAR_13;
 struct ifnet *VAR_14 = FUNC_9(&VAR_12->sc_ue);
 struct usb_page_cache *VAR_15;
 struct mbuf *VAR_16;
 int VAR_17, VAR_18;

 switch (FUNC_5(VAR_10)) {
 case 128:
  FUNC_2(11, "transfer complete\n");
  VAR_14->if_drv_flags &= ~VAR_7;

 case 129:
tr_setup:
  if ((VAR_12->sc_flags & VAR_1) == 0 ||
      (VAR_14->if_drv_flags & VAR_7) != 0) {




   return;
  }

  for (VAR_17 = 0; VAR_17 < 16 &&
      !FUNC_4(&VAR_14->if_snd); VAR_17++) {
   FUNC_3(&VAR_14->if_snd, VAR_16);
   if (VAR_16 == ((void*)0))
    break;
   FUNC_16(VAR_10, VAR_17 * VAR_8,
       VAR_17);
   VAR_18 = 0;
   VAR_15 = FUNC_14(VAR_10, VAR_17);
   if (FUNC_0(VAR_12)) {
    VAR_13.len = FUNC_6(VAR_16->m_pkthdr.len);
    VAR_13.ilen = ~VAR_13.len;






    if (VAR_14->if_capabilities & VAR_4) {
     if ((VAR_16->m_pkthdr.csum_flags &
         VAR_0) != 0)
      VAR_13.len |= FUNC_6(
          VAR_3);
     else
      VAR_13.len |= FUNC_6(
          VAR_2);
    }
    FUNC_10(VAR_15, VAR_18, &VAR_13, sizeof(VAR_13));
    VAR_18 += sizeof(VAR_13);
    FUNC_12(VAR_15, VAR_18, VAR_16, 0, VAR_16->m_pkthdr.len);
    VAR_18 += VAR_16->m_pkthdr.len;
    if ((VAR_18 % 512) == 0) {
     VAR_13.len = 0;
     VAR_13.ilen = 0xffff;
     FUNC_10(VAR_15, VAR_18, &VAR_13,
         sizeof(VAR_13));
     VAR_18 += sizeof(VAR_13);
    }
   } else {
    FUNC_12(VAR_15, VAR_18, VAR_16, 0, VAR_16->m_pkthdr.len);
    VAR_18 += VAR_16->m_pkthdr.len;
   }
   FUNC_7(VAR_14, VAR_6, 1);





   FUNC_1(VAR_14, VAR_16);

   FUNC_8(VAR_16);


   FUNC_15(VAR_10, VAR_17, VAR_18);
  }
  if (VAR_17 != 0) {
   FUNC_17(VAR_10, VAR_17);
   FUNC_13(VAR_10);
   VAR_14->if_drv_flags |= VAR_7;
  }
  return;

 default:
  FUNC_2(11, "transfer error, %s\n",
      FUNC_11(VAR_11));

  FUNC_7(VAR_14, VAR_5, 1);
  VAR_14->if_drv_flags &= ~VAR_7;

  if (VAR_11 != VAR_9) {

   FUNC_18(VAR_10);
   goto tr_setup;
  }
  return;

 }
}
