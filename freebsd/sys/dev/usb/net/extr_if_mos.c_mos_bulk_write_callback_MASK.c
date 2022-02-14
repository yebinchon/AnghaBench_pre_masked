
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct mos_softc {int sc_ue; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_snd; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct mbuf*) ;
 struct ifnet* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_page_cache*,int ,struct mbuf*,int ,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_10 (struct usb_xfer*,int ) ;
 int FUNC_11 (struct usb_xfer*,int ,int ) ;
 int FUNC_12 (struct usb_xfer*) ;
 struct mos_softc* FUNC_13 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_14(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct mos_softc *VAR_5 = FUNC_13(VAR_3);
 struct ifnet *VAR_6 = FUNC_6(&VAR_5->sc_ue);
 struct usb_page_cache *VAR_7;
 struct mbuf *VAR_8;



 switch (FUNC_3(VAR_3)) {
 case 128:
  FUNC_2("transfer of complete");
  FUNC_4(VAR_6, VAR_1, 1);

 case 129:
tr_setup:



  FUNC_1(&VAR_6->if_snd, VAR_8);
  if (VAR_8 == ((void*)0))
   return;

  VAR_7 = FUNC_10(VAR_3, 0);
  FUNC_8(VAR_7, 0, VAR_8, 0, VAR_8->m_pkthdr.len);

  FUNC_11(VAR_3, 0, VAR_8->m_pkthdr.len);






  FUNC_0(VAR_6, VAR_8);

  FUNC_5(VAR_8);

  FUNC_9(VAR_3);

  FUNC_4(VAR_6, VAR_1, 1);
  return;
 default:
  FUNC_2("usb error on tx: %s\n", FUNC_7(VAR_4));
  FUNC_4(VAR_6, VAR_0, 1);
  if (VAR_4 != VAR_2) {
   FUNC_12(VAR_3);
   goto tr_setup;
  }
  return;
 }
}
