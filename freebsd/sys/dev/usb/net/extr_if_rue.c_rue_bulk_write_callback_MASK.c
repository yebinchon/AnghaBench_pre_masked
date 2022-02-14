
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct rue_softc {int sc_flags; int sc_ue; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_snd; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct mbuf*) ;
 struct ifnet* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_page_cache*,int,int ) ;
 int FUNC_9 (struct usb_page_cache*,int ,struct mbuf*,int ,int) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_11 (struct usb_xfer*,int ) ;
 int FUNC_12 (struct usb_xfer*,int ,int) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct rue_softc* FUNC_14 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_15(struct usb_xfer *VAR_6, usb_error_t VAR_7)
{
 struct rue_softc *VAR_8 = FUNC_14(VAR_6);
 struct ifnet *VAR_9 = FUNC_6(&VAR_8->sc_ue);
 struct usb_page_cache *VAR_10;
 struct mbuf *VAR_11;
 int VAR_12;

 switch (FUNC_3(VAR_6)) {
 case 128:
  FUNC_1(11, "transfer complete\n");
  FUNC_4(VAR_9, VAR_1, 1);


 case 129:
tr_setup:
  if ((VAR_8->sc_flags & VAR_3) == 0) {



   return;
  }
  FUNC_2(&VAR_9->if_snd, VAR_11);

  if (VAR_11 == ((void*)0))
   return;
  if (VAR_11->m_pkthdr.len > VAR_2)
   VAR_11->m_pkthdr.len = VAR_2;
  VAR_12 = VAR_11->m_pkthdr.len;

  VAR_10 = FUNC_11(VAR_6, 0);
  FUNC_9(VAR_10, 0, VAR_11, 0, VAR_11->m_pkthdr.len);






  if (VAR_12 < VAR_4) {
   FUNC_8(VAR_10, VAR_12,
       VAR_4 - VAR_12);
   VAR_12 = VAR_4;
  }
  FUNC_12(VAR_6, 0, VAR_12);





  FUNC_0(VAR_9, VAR_11);

  FUNC_5(VAR_11);

  FUNC_10(VAR_6);

  return;

 default:
  FUNC_1(11, "transfer error, %s\n",
      FUNC_7(VAR_7));

  FUNC_4(VAR_9, VAR_0, 1);

  if (VAR_7 != VAR_5) {

   FUNC_13(VAR_6);
   goto tr_setup;
  }
  return;
 }
}
