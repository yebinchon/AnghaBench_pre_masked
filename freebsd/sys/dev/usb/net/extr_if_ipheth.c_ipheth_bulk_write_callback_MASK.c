
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_2__ {size_t len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ipheth_softc {struct mbuf** sc_tx_buf; int sc_ue; } ;
struct ifnet {int if_snd; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct mbuf**,size_t) ;
 struct ifnet* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_page_cache*,size_t,size_t) ;
 int FUNC_9 (struct usb_page_cache*,int ,struct mbuf*,int ,size_t) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_11 (struct usb_xfer*,size_t) ;
 int FUNC_12 (struct usb_xfer*,size_t,size_t) ;
 int FUNC_13 (struct usb_xfer*,size_t,size_t) ;
 int FUNC_14 (struct usb_xfer*,size_t) ;
 int FUNC_15 (struct usb_xfer*) ;
 struct ipheth_softc* FUNC_16 (struct usb_xfer*) ;
 int FUNC_17 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_18(struct usb_xfer *VAR_5, usb_error_t VAR_6)
{
 struct ipheth_softc *VAR_7 = FUNC_16(VAR_5);
 struct ifnet *VAR_8 = FUNC_6(&VAR_7->sc_ue);
 struct usb_page_cache *VAR_9;
 struct mbuf *VAR_10;
 uint8_t VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_17(VAR_5, &VAR_12, ((void*)0), &VAR_13, ((void*)0));

 FUNC_1(1, "\n");

 switch (FUNC_3(VAR_5)) {
 case 128:
  FUNC_1(11, "transfer complete: %u bytes in %u frames\n",
      VAR_12, VAR_13);

  FUNC_4(VAR_8, VAR_1, 1);


  FUNC_5(VAR_7->sc_tx_buf, VAR_3);


 case 129:
tr_setup:
  for (VAR_11 = 0; VAR_11 != VAR_3; VAR_11++) {

   FUNC_2(&VAR_8->if_snd, VAR_10);

   if (VAR_10 == ((void*)0))
    break;

   FUNC_13(VAR_5,
       VAR_11 * VAR_2, VAR_11);

   VAR_9 = FUNC_11(VAR_5, VAR_11);

   VAR_7->sc_tx_buf[VAR_11] = VAR_10;

   if (VAR_10->m_pkthdr.len > VAR_2)
    VAR_10->m_pkthdr.len = VAR_2;

   FUNC_9(VAR_9, 0, VAR_10, 0, VAR_10->m_pkthdr.len);

   FUNC_12(VAR_5, VAR_11, VAR_2);

   if (VAR_2 != VAR_10->m_pkthdr.len) {
    FUNC_8(VAR_9, VAR_10->m_pkthdr.len,
     VAR_2 - VAR_10->m_pkthdr.len);
   }





   FUNC_0(VAR_8, VAR_10);
  }
  if (VAR_11 != 0) {
   FUNC_14(VAR_5, VAR_11);

   FUNC_10(VAR_5);
  }
  break;

 default:
  FUNC_1(11, "transfer error, %s\n",
      FUNC_7(VAR_6));


  FUNC_5(VAR_7->sc_tx_buf, VAR_3);


  FUNC_4(VAR_8, VAR_0, 1);

  if (VAR_6 != VAR_4) {

   FUNC_15(VAR_5);
   goto tr_setup;
  }
  break;
 }
}
