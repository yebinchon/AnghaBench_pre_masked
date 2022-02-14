
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ubt_softc {int sc_scoq; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct ubt_softc*,char*,int) ;
 int FUNC_4 (struct ubt_softc*) ;
 int FUNC_5 (struct ubt_softc*) ;
 int FUNC_6 (struct ubt_softc*,int) ;
 int FUNC_7 (struct ubt_softc*) ;
 int FUNC_8 (struct ubt_softc*) ;
 int VAR_0 ;
 int FUNC_9 (struct usb_xfer*) ;


 int FUNC_10 (struct mbuf*,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_13 (struct usb_xfer*) ;
 int FUNC_14 (struct usb_xfer*,int) ;
 struct usb_page_cache* FUNC_15 (struct usb_xfer*,int ) ;
 int FUNC_16 (struct usb_xfer*) ;
 int FUNC_17 (struct usb_xfer*,int,int) ;
 struct ubt_softc* FUNC_18 (struct usb_xfer*) ;
 int FUNC_19 (struct usb_xfer*,int*,int *,int *,int*) ;

__attribute__((used)) static void
FUNC_20(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct ubt_softc *VAR_3 = FUNC_18(VAR_1);
 struct usb_page_cache *VAR_4;
 struct mbuf *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 FUNC_19(VAR_1, &VAR_9, ((void*)0), ((void*)0), &VAR_10);
 VAR_4 = FUNC_15(VAR_1, 0);

 switch (FUNC_9(VAR_1)) {
 case 128:
  FUNC_3(VAR_3, "sent %d bytes to isoc-out pipe\n", VAR_9);
  FUNC_6(VAR_3, VAR_9);
  FUNC_8(VAR_3);


 case 129:
send_next:
  VAR_8 = 0;
  VAR_7 = FUNC_16(VAR_1) * VAR_10;
  VAR_5 = ((void*)0);

  while (VAR_7 > 0) {
   if (VAR_5 == ((void*)0)) {
    FUNC_4(VAR_3);
    FUNC_0(&VAR_3->sc_scoq, VAR_5);
    FUNC_5(VAR_3);

    if (VAR_5 == ((void*)0))
     break;
   }

   VAR_6 = FUNC_11(VAR_7, VAR_5->m_pkthdr.len);
   if (VAR_6 > 0) {
    FUNC_12(VAR_4, VAR_8, VAR_5,0, VAR_6);
    FUNC_10(VAR_5, VAR_6);

    VAR_8 += VAR_6;
    VAR_7 -= VAR_6;
   }

   if (VAR_5->m_pkthdr.len == 0)
    FUNC_2(VAR_5);
  }


  if (VAR_5 != ((void*)0)) {
   FUNC_4(VAR_3);
   FUNC_1(&VAR_3->sc_scoq, VAR_5);
   FUNC_5(VAR_3);
  }
  for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6 ++) {
   FUNC_17(VAR_1, VAR_6,
       FUNC_11(VAR_8, FUNC_16(VAR_1)));
   VAR_8 -= FUNC_14(VAR_1, VAR_6);
  }

  FUNC_13(VAR_1);
  break;

 default:
  if (VAR_2 != VAR_0) {
   FUNC_7(VAR_3);
   goto send_next;
  }


  break;
 }
}
