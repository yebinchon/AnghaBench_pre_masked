
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_snd; } ;
struct cue_softc {int sc_ue; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct mbuf*) ;
 struct ifnet* FUNC_6 (int *) ;
 int FUNC_7 (struct usb_page_cache*,int ,int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_11 (struct usb_xfer*,int ) ;
 int FUNC_12 (struct usb_xfer*,int ,int ) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct cue_softc* FUNC_14 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_15(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct cue_softc *VAR_6 = FUNC_14(VAR_4);
 struct ifnet *VAR_7 = FUNC_6(&VAR_6->sc_ue);
 struct usb_page_cache *VAR_8;
 struct mbuf *VAR_9;
 uint8_t VAR_10[2];

 switch (FUNC_3(VAR_4)) {
 case 128:
  FUNC_1(11, "transfer complete\n");
  FUNC_4(VAR_7, VAR_1, 1);


 case 129:
tr_setup:
  FUNC_2(&VAR_7->if_snd, VAR_9);

  if (VAR_9 == ((void*)0))
   return;
  if (VAR_9->m_pkthdr.len > VAR_2)
   VAR_9->m_pkthdr.len = VAR_2;
  FUNC_12(VAR_4, 0, (VAR_9->m_pkthdr.len + 2));



  VAR_10[0] = (uint8_t)(VAR_9->m_pkthdr.len);
  VAR_10[1] = (uint8_t)(VAR_9->m_pkthdr.len >> 8);

  VAR_8 = FUNC_11(VAR_4, 0);
  FUNC_7(VAR_8, 0, VAR_10, 2);
  FUNC_9(VAR_8, 2, VAR_9, 0, VAR_9->m_pkthdr.len);





  FUNC_0(VAR_7, VAR_9);

  FUNC_5(VAR_9);

  FUNC_10(VAR_4);

  return;

 default:
  FUNC_1(11, "transfer error, %s\n",
      FUNC_8(VAR_5));

  FUNC_4(VAR_7, VAR_0, 1);

  if (VAR_5 != VAR_3) {

   FUNC_13(VAR_4);
   goto tr_setup;
  }
  return;
 }
}
