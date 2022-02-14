
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ucom_softc {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int VAR_1 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct ucom_softc*,struct usb_page_cache*,int ,int ,int *) ;
 int FUNC_3 (struct usb_page_cache*,int ,struct mbuf*,int ,int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 struct mbuf* FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*,int *) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct ucom_softc* FUNC_10 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct ucom_softc *VAR_4 = FUNC_10(VAR_2);
 struct usb_page_cache *VAR_5;
 uint32_t VAR_6;

 switch (FUNC_0(VAR_2)) {
 case 128:
 case 129:
tr_setup:
  VAR_5 = FUNC_5(VAR_2, 0);


  struct mbuf *VAR_7 = FUNC_6(VAR_2);

  if (VAR_7 != ((void*)0)) {
   FUNC_3(VAR_5, 0, VAR_7, 0, VAR_7->m_pkthdr.len);
   FUNC_7(VAR_2, 0, VAR_7->m_pkthdr.len);
   FUNC_8(VAR_2, ((void*)0));
   FUNC_4(VAR_2);
   FUNC_1(VAR_7);
   break;
  }

  if (FUNC_2(VAR_4, VAR_5, 0, VAR_1, &VAR_6)) {
   FUNC_7(VAR_2, 0, VAR_6);
   FUNC_4(VAR_2);
  }
  break;

 default:
  if (VAR_3 != VAR_0) {
   FUNC_9(VAR_2);
   goto tr_setup;
  }
  break;
 }
}
