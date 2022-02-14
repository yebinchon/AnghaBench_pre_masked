
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; int* wValue; } ;
struct saf1761_otg_td {int remainder; int did_stall; int pc; } ;
struct saf1761_otg_softc {int sc_dv_addr; } ;
typedef int req ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ) ;
 int FUNC_3 (struct saf1761_otg_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct saf1761_otg_softc*,struct saf1761_otg_td*,int) ;
 int FUNC_5 (int ,int ,struct usb_device_request*,int) ;

__attribute__((used)) static uint8_t
FUNC_6(struct saf1761_otg_softc *VAR_9, struct saf1761_otg_td *VAR_10)
{
 struct usb_device_request VAR_11;
 uint32_t VAR_12;


 FUNC_3(VAR_9, VAR_5, VAR_6);

 VAR_12 = FUNC_2(VAR_9, VAR_0);


 if ((VAR_12 & VAR_2) == 0)
  goto busy;


 VAR_12 &= VAR_1;

 FUNC_1(5, "count=%u rem=%u\n", VAR_12, VAR_10->remainder);


 VAR_10->did_stall = 0;


 FUNC_3(VAR_9, VAR_3, 0);


 if (VAR_12 != VAR_10->remainder) {
  FUNC_1(0, "Invalid SETUP packet "
      "length, %d bytes\n", VAR_12);
  goto busy;
 }
 if (VAR_12 != sizeof(VAR_11)) {
  FUNC_1(0, "Unsupported SETUP packet "
      "length, %d bytes\n", VAR_12);
  goto busy;
 }

 FUNC_4(VAR_9, VAR_10, sizeof(VAR_11));


 FUNC_5(VAR_10->pc, 0, &VAR_11, sizeof(VAR_11));


 if ((VAR_11.bmRequestType == VAR_8) &&
     (VAR_11.bRequest == VAR_7)) {
  VAR_9->sc_dv_addr = VAR_11.wValue[0] & 0x7F;
  FUNC_0("Set address %d\n", VAR_9->sc_dv_addr);
 } else {
  VAR_9->sc_dv_addr = 0xFF;
 }
 return (0);

busy:

 if (!VAR_10->did_stall) {
  FUNC_1(5, "stalling\n");


  FUNC_3(VAR_9, VAR_3, VAR_4);

  VAR_10->did_stall = 1;
 }
 return (1);
}
