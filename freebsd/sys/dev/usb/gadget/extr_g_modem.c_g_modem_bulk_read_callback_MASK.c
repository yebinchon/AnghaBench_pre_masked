
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct g_modem_softc {int sc_throughput; int sc_tx_busy; int sc_data_len; int sc_data_buf; int sc_mode; int * sc_xfer; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int ,int ,int ) ;
 int FUNC_6 (struct usb_xfer*,int) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct g_modem_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_5, usb_error_t VAR_6)
{
 struct g_modem_softc *VAR_7 = FUNC_8(VAR_5);
 int VAR_8;
 int VAR_9;

 FUNC_9(VAR_5, &VAR_8, ((void*)0), &VAR_9, ((void*)0));

 FUNC_0("st=%d aframes=%d actlen=%d bytes\n",
     FUNC_1(VAR_5), VAR_9, VAR_8);

 switch (FUNC_1(VAR_5)) {
 case 128:

  VAR_7->sc_throughput += VAR_8;

  if (VAR_7->sc_mode == VAR_2) {
   VAR_7->sc_tx_busy = 1;
   VAR_7->sc_data_len = VAR_8;
   FUNC_3(VAR_7->sc_xfer[VAR_1]);
   break;
  }

 case 129:
tr_setup:
  if ((VAR_7->sc_mode == VAR_3) ||
      (VAR_7->sc_tx_busy != 0))
   break;

  FUNC_5(VAR_5, 0, VAR_7->sc_data_buf, VAR_0);
  FUNC_6(VAR_5, 1);
  FUNC_4(VAR_5);
  break;

 default:
  FUNC_0("error=%s\n", FUNC_2(VAR_6));

  if (VAR_6 != VAR_4) {

   FUNC_7(VAR_5);
   goto tr_setup;
  }
  break;
 }
}
