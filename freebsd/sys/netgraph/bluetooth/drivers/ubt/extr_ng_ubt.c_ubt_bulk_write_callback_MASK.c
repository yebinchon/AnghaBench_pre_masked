
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ubt_softc {int sc_aclq; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct ubt_softc*,char*,...) ;
 int FUNC_3 (struct ubt_softc*) ;
 int FUNC_4 (struct ubt_softc*) ;
 int FUNC_5 (struct ubt_softc*,int) ;
 int FUNC_6 (struct ubt_softc*) ;
 int FUNC_7 (struct ubt_softc*) ;
 int FUNC_8 (struct ubt_softc*,char*,int ) ;
 int VAR_0 ;
 int FUNC_9 (struct usb_xfer*) ;


 int FUNC_10 (int ) ;
 int FUNC_11 (struct usb_page_cache*,int ,struct mbuf*,int ,int) ;
 int FUNC_12 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_13 (struct usb_xfer*,int ) ;
 int FUNC_14 (struct usb_xfer*,int ,int) ;
 int FUNC_15 (struct usb_xfer*) ;
 struct ubt_softc* FUNC_16 (struct usb_xfer*) ;
 int FUNC_17 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_18(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct ubt_softc *VAR_3 = FUNC_16(VAR_1);
 struct mbuf *VAR_4;
 struct usb_page_cache *VAR_5;
 int VAR_6;

 FUNC_17(VAR_1, &VAR_6, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_9(VAR_1)) {
 case 128:
  FUNC_2(VAR_3, "sent %d bytes to bulk-out pipe\n", VAR_6);
  FUNC_5(VAR_3, VAR_6);
  FUNC_7(VAR_3);


 case 129:
send_next:

  FUNC_3(VAR_3);
  FUNC_0(&VAR_3->sc_aclq, VAR_4);
  FUNC_4(VAR_3);

  if (VAR_4 == ((void*)0)) {
   FUNC_2(VAR_3, "ACL data queue is empty\n");
   break;
  }






  VAR_5 = FUNC_13(VAR_1, 0);
  FUNC_11(VAR_5, 0, VAR_4, 0, VAR_4->m_pkthdr.len);
  FUNC_14(VAR_1, 0, VAR_4->m_pkthdr.len);

  FUNC_2(VAR_3, "bulk-out transfer has been started, len=%d\n",
   VAR_4->m_pkthdr.len);

  FUNC_1(VAR_4);

  FUNC_12(VAR_1);
  break;

 default:
  if (VAR_2 != VAR_0) {
   FUNC_8(VAR_3, "bulk-out transfer failed: %s\n",
    FUNC_10(VAR_2));

   FUNC_6(VAR_3);


   FUNC_15(VAR_1);
   goto send_next;
  }

  break;
 }
}
