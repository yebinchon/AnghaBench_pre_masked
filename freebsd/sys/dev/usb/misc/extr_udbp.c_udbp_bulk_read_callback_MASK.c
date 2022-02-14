
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct udbp_softc {int sc_flags; int * sc_xfer; int sc_node; struct mbuf* sc_bulk_in_buffer; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; int m_data; TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct mbuf*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (int ,int *,int *,int *,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct usb_page_cache*,int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_9 (struct usb_xfer*,int ) ;
 int FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int ,int ) ;
 struct udbp_softc* FUNC_12 (struct usb_xfer*) ;
 int FUNC_13 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_14(struct usb_xfer *VAR_6, usb_error_t VAR_7)
{
 struct udbp_softc *VAR_8 = FUNC_12(VAR_6);
 struct usb_page_cache *VAR_9;
 struct mbuf *VAR_10;
 int VAR_11;

 FUNC_13(VAR_6, &VAR_11, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_3(VAR_6)) {
 case 128:



  FUNC_2(VAR_10, VAR_1, VAR_0);

  if (VAR_10 == ((void*)0)) {
   goto tr_setup;
  }

  if (!(FUNC_1(VAR_10, VAR_1))) {
   FUNC_4(VAR_10);
   goto tr_setup;
  }
  VAR_10->m_pkthdr.len = VAR_10->m_len = VAR_11;

  VAR_9 = FUNC_9(VAR_6, 0);
  FUNC_6(VAR_9, 0, VAR_10->m_data, VAR_11);

  VAR_8->sc_bulk_in_buffer = VAR_10;

  FUNC_0("received package %d bytes\n", VAR_11);

 case 129:
tr_setup:
  if (VAR_8->sc_bulk_in_buffer) {
   FUNC_5(VAR_8->sc_node, ((void*)0), &VAR_5, ((void*)0), 0);
   return;
  }
  if (VAR_8->sc_flags & VAR_2) {
   FUNC_7(VAR_8->sc_xfer[VAR_3]);
   return;
  }
  FUNC_11(VAR_6, 0, FUNC_10(VAR_6));
  FUNC_8(VAR_6);
  return;

 default:
  if (VAR_7 != VAR_4) {

   VAR_8->sc_flags |= VAR_2;
   FUNC_7(VAR_8->sc_xfer[VAR_3]);
  }
  return;

 }
}
