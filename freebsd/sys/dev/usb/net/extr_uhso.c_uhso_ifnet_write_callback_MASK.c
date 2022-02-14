
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct uhso_softc {struct ifnet* sc_ifp; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int VAR_2 ;
 int FUNC_2 (int,char*,int,...) ;
 int VAR_3 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_page_cache*,int ,struct mbuf*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_9 (struct usb_xfer*,int ) ;
 int FUNC_10 (struct usb_xfer*,int ,int ) ;
 int FUNC_11 (struct usb_xfer*) ;
 struct uhso_softc* FUNC_12 (struct usb_xfer*) ;
 int FUNC_13 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_14(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct uhso_softc *VAR_6 = FUNC_12(VAR_4);
 struct ifnet *VAR_7 = VAR_6->sc_ifp;
 struct usb_page_cache *VAR_8;
 struct mbuf *VAR_9;
 int VAR_10;

 FUNC_13(VAR_4, &VAR_10, ((void*)0), ((void*)0), ((void*)0));

 FUNC_2(3, "status %d, actlen=%d\n", FUNC_3(VAR_4), VAR_10);

 switch (FUNC_3(VAR_4)) {
 case 128:
  FUNC_4(VAR_7, VAR_0, 1);
  VAR_7->if_drv_flags &= ~VAR_1;
 case 129:
tr_setup:
  FUNC_1(&VAR_7->if_snd, VAR_9);
  if (VAR_9 == ((void*)0))
   break;

  VAR_7->if_drv_flags |= VAR_1;

  if (VAR_9->m_pkthdr.len > VAR_2)
   VAR_9->m_pkthdr.len = VAR_2;

  FUNC_10(VAR_4, 0, VAR_9->m_pkthdr.len);
  VAR_8 = FUNC_9(VAR_4, 0);
  FUNC_7(VAR_8, 0, VAR_9, 0, VAR_9->m_pkthdr.len);
  FUNC_8(VAR_4);

  FUNC_0(VAR_7, VAR_9);
  FUNC_5(VAR_9);
  break;
 default:
  FUNC_2(0, "error: %s\n", FUNC_6(VAR_5));
  if (VAR_5 == VAR_3)
   break;
  FUNC_11(VAR_4);
  goto tr_setup;
 }
}
