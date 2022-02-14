
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; int* wValue; } ;
struct atmegadci_td {int ep_no; int did_stall; int remainder; int offset; int pc; } ;
struct atmegadci_softc {int sc_dv_addr; } ;
typedef int req ;


 struct atmegadci_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct atmegadci_softc*,int ) ;
 int FUNC_2 (struct atmegadci_softc*,int ,void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct atmegadci_softc*,int ,int) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int ,int ,struct usb_device_request*,int) ;

__attribute__((used)) static uint8_t
FUNC_6(struct atmegadci_td *VAR_14)
{
 struct atmegadci_softc *VAR_15;
 struct usb_device_request VAR_16;
 uint16_t VAR_17;
 uint8_t VAR_18;


 VAR_15 = FUNC_0(VAR_14->pc);


 FUNC_3(VAR_15, VAR_11, VAR_14->ep_no);


 VAR_18 = FUNC_1(VAR_15, VAR_9);

 FUNC_4(5, "UEINTX=0x%02x\n", VAR_18);

 if (!(VAR_18 & VAR_10)) {
  goto not_complete;
 }

 VAR_14->did_stall = 0;

 VAR_17 =
     (FUNC_1(VAR_15, VAR_1) << 8) |
     (FUNC_1(VAR_15, VAR_2));


 VAR_17 &= 0x7FF;


 if (VAR_17 != VAR_14->remainder) {
  FUNC_4(0, "Invalid SETUP packet "
      "length, %d bytes\n", VAR_17);
  goto not_complete;
 }
 if (VAR_17 != sizeof(VAR_16)) {
  FUNC_4(0, "Unsupported SETUP packet "
      "length, %d bytes\n", VAR_17);
  goto not_complete;
 }

 FUNC_2(VAR_15, VAR_6,
     (void *)&VAR_16, sizeof(VAR_16));


 FUNC_5(VAR_14->pc, 0, &VAR_16, sizeof(VAR_16));

 VAR_14->offset = sizeof(VAR_16);
 VAR_14->remainder = 0;


 if ((VAR_16.bmRequestType == VAR_13) &&
     (VAR_16.bRequest == VAR_12)) {
  VAR_15->sc_dv_addr = VAR_16.wValue[0] & 0x7F;

  FUNC_3(VAR_15, VAR_0, VAR_15->sc_dv_addr);
 } else {
  VAR_15->sc_dv_addr = 0xFF;
 }


 FUNC_3(VAR_15, VAR_9, 0);
 return (0);

not_complete:

 if (!VAR_14->did_stall) {
  FUNC_4(5, "stalling\n");
  FUNC_3(VAR_15, VAR_3,
      VAR_4 |
      VAR_5);
  VAR_14->did_stall = 1;
 }
 if (VAR_18 & VAR_10) {

  FUNC_3(VAR_15, VAR_9, ~VAR_10);
 }

 FUNC_3(VAR_15, VAR_7, VAR_8);
 return (1);
}
