
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct g_audio_softc {int sc_throughput; int ** sc_data_buf; struct usb_xfer** sc_xfer; int ** sc_data_len; } ;
typedef int int16_t ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int) ;
 int FUNC_6 (struct usb_xfer*,int,int *,int) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct g_audio_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_6, usb_error_t VAR_7)
{
 struct g_audio_softc *VAR_8 = FUNC_8(VAR_6);
 int VAR_9;
 int VAR_10;
 int VAR_11 = (VAR_6 == VAR_8->sc_xfer[VAR_2]) ? 0 : 1;
 int16_t *VAR_12;
 int VAR_13;

 FUNC_9(VAR_6, &VAR_9, ((void*)0), &VAR_10, ((void*)0));

 FUNC_0("st=%d aframes=%d actlen=%d bytes\n",
     FUNC_1(VAR_6), VAR_10, VAR_9);

 switch (FUNC_1(VAR_6)) {
 case 128:

  VAR_8->sc_throughput += VAR_9;

  for (VAR_13 = 0; VAR_13 != VAR_1; VAR_13++) {
   VAR_8->sc_data_len[VAR_11][VAR_13] = FUNC_5(VAR_6, VAR_13);
  }

  FUNC_3(VAR_8->sc_xfer[VAR_3]);
  FUNC_3(VAR_8->sc_xfer[VAR_4]);

  break;

 case 129:
tr_setup:
  VAR_12 = VAR_8->sc_data_buf[VAR_11];

  for (VAR_13 = 0; VAR_13 != VAR_1; VAR_13++) {

   FUNC_6(VAR_6, VAR_13, VAR_12,
       VAR_0 / VAR_1);

   VAR_12 += (VAR_0 / VAR_1) / 2;
  }

  FUNC_4(VAR_6);
  break;

 default:
  FUNC_0("error=%s\n", FUNC_2(VAR_7));

  if (VAR_7 != VAR_5) {

   FUNC_7(VAR_6);
   goto tr_setup;
  }
  break;
 }
}
