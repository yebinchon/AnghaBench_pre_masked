
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct mbuf {int m_len; int m_data; } ;
struct ether_header {int dummy; } ;
struct TYPE_3__ {int ue_udev; } ;
struct cdce_softc {int sc_flags; struct mbuf** sc_rx_buf; TYPE_1__ sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;
 int VAR_3 ;


 int FUNC_2 (struct mbuf**,int ) ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,struct mbuf*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int) ;
 int FUNC_11 (struct usb_xfer*,int,int ,int ) ;
 int FUNC_12 (struct usb_xfer*,int) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct cdce_softc* FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_16(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct cdce_softc *VAR_6 = FUNC_14(VAR_4);
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


   if ((VAR_6->sc_flags & VAR_0) && VAR_11 >= 14)
    VAR_11 -= 4;

   if (VAR_11 < (int)sizeof(struct ether_header)) {
    FUNC_3(VAR_7);
    continue;
   }

   FUNC_6(&VAR_6->sc_ue, VAR_7, VAR_11);
  }


 case 129:




  for (VAR_8 = 0; VAR_8 != 1; VAR_8++) {
   if (VAR_6->sc_rx_buf[VAR_8] == ((void*)0)) {
    VAR_7 = FUNC_4();
    if (VAR_7 == ((void*)0))
     goto tr_stall;
    VAR_6->sc_rx_buf[VAR_8] = VAR_7;
   } else {
    VAR_7 = VAR_6->sc_rx_buf[VAR_8];
   }

   FUNC_11(VAR_4, VAR_8, VAR_7->m_data, VAR_7->m_len);
  }

  FUNC_12(VAR_4, VAR_8);
  FUNC_9(VAR_4);

  FUNC_5(&VAR_6->sc_ue);
  break;

 default:
  FUNC_0("error = %s\n",
      FUNC_7(VAR_5));

  if (VAR_5 != VAR_2) {
tr_stall:
   if (FUNC_8(VAR_6->sc_ue.ue_udev) == VAR_3) {

    FUNC_13(VAR_4);
    FUNC_12(VAR_4, 0);
    FUNC_9(VAR_4);
   }
   break;
  }


  FUNC_2(VAR_6->sc_rx_buf, VAR_1);
  break;
 }
}
