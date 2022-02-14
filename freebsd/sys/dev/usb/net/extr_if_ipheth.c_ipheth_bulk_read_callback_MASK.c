
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct mbuf {int m_len; int m_data; } ;
struct ipheth_softc {struct mbuf** sc_rx_buf; int sc_ue; } ;
struct ether_header {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct mbuf**,int) ;
 int FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct mbuf*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int) ;
 int FUNC_11 (struct usb_xfer*,int,int ,int ) ;
 int FUNC_12 (struct usb_xfer*,int) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct ipheth_softc* FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_16(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct ipheth_softc *VAR_6 = FUNC_14(VAR_4);
 struct mbuf *VAR_7;
 uint8_t VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_15(VAR_4, &VAR_9, ((void*)0), &VAR_10, ((void*)0));

 switch (FUNC_1(VAR_4)) {
 case 128:

  FUNC_0("received %u bytes in %u frames\n", VAR_9, VAR_10);

  for (VAR_8 = 0; VAR_8 != VAR_10; VAR_8++) {

   VAR_7 = VAR_6->sc_rx_buf[VAR_8];
   VAR_6->sc_rx_buf[VAR_8] = ((void*)0);
   VAR_11 = FUNC_10(VAR_4, VAR_8);

   if (VAR_11 < (int)(sizeof(struct ether_header) +
       VAR_1)) {
    FUNC_4(VAR_7);
    continue;
   }

   FUNC_3(VAR_7, VAR_1);


   FUNC_7(&VAR_6->sc_ue, VAR_7, VAR_11 - VAR_1);
  }


 case 129:

  for (VAR_8 = 0; VAR_8 != VAR_2; VAR_8++) {
   if (VAR_6->sc_rx_buf[VAR_8] == ((void*)0)) {
    VAR_7 = FUNC_5();
    if (VAR_7 == ((void*)0))
     goto tr_stall;


    FUNC_3(VAR_7, VAR_0);

    VAR_6->sc_rx_buf[VAR_8] = VAR_7;
   } else {
    VAR_7 = VAR_6->sc_rx_buf[VAR_8];
   }

   FUNC_11(VAR_4, VAR_8, VAR_7->m_data, VAR_7->m_len);
  }

  FUNC_12(VAR_4, VAR_8);
  FUNC_9(VAR_4);

  FUNC_6(&VAR_6->sc_ue);
  break;

 default:
  FUNC_0("error = %s\n", FUNC_8(VAR_5));

  if (VAR_5 != VAR_3) {
 tr_stall:

   FUNC_13(VAR_4);
   FUNC_12(VAR_4, 0);
   FUNC_9(VAR_4);
   break;
  }

  FUNC_2(VAR_6->sc_rx_buf, VAR_2);
  break;
 }
}
