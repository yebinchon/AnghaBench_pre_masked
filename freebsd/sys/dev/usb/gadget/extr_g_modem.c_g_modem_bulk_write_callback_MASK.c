
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct g_modem_softc {int sc_throughput; int sc_tx_interval; int sc_pattern_len; int* sc_data_buf; int* sc_pattern; int sc_data_len; int sc_tx_busy; int sc_mode; int * sc_xfer; } ;


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
 int FUNC_5 (struct usb_xfer*,int ,int*,int) ;
 int FUNC_6 (struct usb_xfer*,int) ;
 int FUNC_7 (struct usb_xfer*,int) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct g_modem_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_5, usb_error_t VAR_6)
{
 struct g_modem_softc *VAR_7 = FUNC_9(VAR_5);
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_10(VAR_5, &VAR_8, ((void*)0), &VAR_9, ((void*)0));

 FUNC_0("st=%d aframes=%d actlen=%d bytes\n",
     FUNC_1(VAR_5), VAR_9, VAR_8);

 switch (FUNC_1(VAR_5)) {
 case 128:

  VAR_7->sc_tx_busy = 0;
  VAR_7->sc_throughput += VAR_8;

  if (VAR_7->sc_mode == VAR_2) {

   FUNC_3(VAR_7->sc_xfer[VAR_1]);
   break;
  } else if ((VAR_7->sc_mode == VAR_3) && (VAR_7->sc_tx_interval != 0)) {

   break;
  }
 case 129:
tr_setup:
  if (VAR_7->sc_mode == VAR_3) {

   VAR_10 = VAR_7->sc_pattern_len;
   VAR_12 = VAR_7->sc_tx_interval ? VAR_10 : VAR_0;

   if (VAR_10 == 0) {
    for (VAR_11 = 0; VAR_11 != VAR_12; VAR_11++)
     VAR_7->sc_data_buf[VAR_11] = VAR_11 % 255;
   } else {
    for (VAR_11 = 0; VAR_11 != VAR_12; VAR_11++)
     VAR_7->sc_data_buf[VAR_11] = VAR_7->sc_pattern[VAR_11 % VAR_10];
   }

   FUNC_5(VAR_5, 0, VAR_7->sc_data_buf, VAR_12);
   FUNC_7(VAR_5, 0);
   FUNC_6(VAR_5, 1);
   FUNC_4(VAR_5);

  } else if (VAR_7->sc_mode == VAR_2) {

   if (VAR_7->sc_tx_busy == 0)
    break;

   VAR_11 = VAR_7->sc_tx_interval;

   if (VAR_11 < 0)
    VAR_11 = 0;
   else if (VAR_11 > 256)
    VAR_11 = 256;

   FUNC_5(VAR_5, 0, VAR_7->sc_data_buf, VAR_7->sc_data_len);
   FUNC_7(VAR_5, VAR_11);
   FUNC_6(VAR_5, 1);
   FUNC_4(VAR_5);
  } else {
   VAR_7->sc_tx_busy = 0;
  }
  break;

 default:
  FUNC_0("error=%s\n", FUNC_2(VAR_6));

  if (VAR_6 != VAR_4) {

   FUNC_8(VAR_5);
   goto tr_setup;
  }
  break;
 }
}
