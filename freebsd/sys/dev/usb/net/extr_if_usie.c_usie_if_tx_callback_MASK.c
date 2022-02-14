
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint16_t ;
struct TYPE_4__ {int len; } ;
struct TYPE_6__ {TYPE_1__ hip; } ;
struct usie_softc {TYPE_3__ sc_txd; struct ifnet* sc_ifp; } ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct usb_xfer*) ;


 int FUNC_5 (int) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct usb_page_cache*,int ,TYPE_3__*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_11 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_12 (struct usb_xfer*,int ) ;
 int FUNC_13 (struct usb_xfer*,int ,int) ;
 int FUNC_14 (struct usb_xfer*) ;
 struct usie_softc* FUNC_15 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_16(struct usb_xfer *VAR_9, usb_error_t VAR_10)
{
 struct usie_softc *VAR_11 = FUNC_15(VAR_9);
 struct usb_page_cache *VAR_12;
 struct ifnet *VAR_13 = VAR_11->sc_ifp;
 struct mbuf *VAR_14;
 uint16_t VAR_15;

 switch (FUNC_4(VAR_9)) {
 case 128:
  FUNC_2(11, "transfer complete\n");
  VAR_13->if_drv_flags &= ~VAR_5;
  FUNC_6(VAR_13, VAR_4, 1);


 case 129:
tr_setup:

  if ((VAR_13->if_drv_flags & VAR_6) == 0)
   break;

  FUNC_3(&VAR_13->if_snd, VAR_14);
  if (VAR_14 == ((void*)0))
   break;

  if (VAR_14->m_pkthdr.len > (int)(VAR_7 - VAR_1 +
      VAR_0 - sizeof(VAR_11->sc_txd))) {
   FUNC_1("packet len is too big: %d\n",
       VAR_14->m_pkthdr.len);
   break;
  }
  VAR_12 = FUNC_12(VAR_9, 0);

  VAR_11->sc_txd.hip.len = FUNC_5(VAR_14->m_pkthdr.len +
      VAR_1 + VAR_0);
  VAR_15 = sizeof(VAR_11->sc_txd);

  FUNC_8(VAR_12, 0, &VAR_11->sc_txd, VAR_15);
  FUNC_10(VAR_12, VAR_15, VAR_14, 0, VAR_14->m_pkthdr.len);
  FUNC_13(VAR_9, 0, VAR_14->m_pkthdr.len +
      VAR_15 + VAR_0);

  FUNC_0(VAR_13, VAR_14);

  FUNC_7(VAR_14);

  FUNC_11(VAR_9);
  break;

 default:
  FUNC_1("USB transfer error, %s\n",
      FUNC_9(VAR_10));
  FUNC_6(VAR_13, VAR_3, 1);

  if (VAR_10 != VAR_8) {
   FUNC_14(VAR_9);
   FUNC_6(VAR_13, VAR_2, 1);
   goto tr_setup;
  }
  break;
 }
}
