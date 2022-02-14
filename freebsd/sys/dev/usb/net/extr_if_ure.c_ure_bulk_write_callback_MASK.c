
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int txpkt ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ure_txpkt {int ure_pktlen; } ;
struct ure_softc {int sc_flags; int sc_ue; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (int) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct ure_txpkt*,int ,int) ;
 struct ifnet* FUNC_8 (int *) ;
 int FUNC_9 (struct usb_page_cache*,int,struct ure_txpkt*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_12 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_13 (struct usb_xfer*,int ) ;
 int FUNC_14 (struct usb_xfer*,int ,int) ;
 int FUNC_15 (struct usb_xfer*) ;
 struct ure_softc* FUNC_16 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_17(struct usb_xfer *VAR_8, usb_error_t VAR_9)
{
 struct ure_softc *VAR_10 = FUNC_16(VAR_8);
 struct ifnet *VAR_11 = FUNC_8(&VAR_10->sc_ue);
 struct usb_page_cache *VAR_12;
 struct mbuf *VAR_13;
 struct ure_txpkt VAR_14;
 int VAR_15, VAR_16;

 switch (FUNC_3(VAR_8)) {
 case 128:
  FUNC_1(11, "transfer complete\n");
  VAR_11->if_drv_flags &= ~VAR_2;

 case 129:
tr_setup:
  if ((VAR_10->sc_flags & VAR_3) == 0 ||
      (VAR_11->if_drv_flags & VAR_2) != 0) {



   return;
  }
  FUNC_2(&VAR_11->if_snd, VAR_13);
  if (VAR_13 == ((void*)0))
   break;
  VAR_16 = 0;
  VAR_15 = VAR_13->m_pkthdr.len;
  VAR_12 = FUNC_13(VAR_8, 0);
  FUNC_7(&VAR_14, 0, sizeof(VAR_14));
  VAR_14.ure_pktlen = FUNC_4((VAR_15 & VAR_6) |
      VAR_4 | VAR_5);
  FUNC_9(VAR_12, VAR_16, &VAR_14, sizeof(VAR_14));
  VAR_16 += sizeof(VAR_14);
  FUNC_11(VAR_12, VAR_16, VAR_13, 0, VAR_13->m_pkthdr.len);
  VAR_16 += VAR_13->m_pkthdr.len;

  FUNC_5(VAR_11, VAR_1, 1);





  FUNC_0(VAR_11, VAR_13);

  FUNC_6(VAR_13);


  FUNC_14(VAR_8, 0, VAR_16);

  FUNC_12(VAR_8);
  VAR_11->if_drv_flags |= VAR_2;
  return;
 default:
  FUNC_1(11, "transfer error, %s\n",
      FUNC_10(VAR_9));

  FUNC_5(VAR_11, VAR_0, 1);
  VAR_11->if_drv_flags &= ~VAR_2;

  if (VAR_9 != VAR_7) {

   FUNC_15(VAR_8);
   goto tr_setup;
  }
  return;
 }
}
