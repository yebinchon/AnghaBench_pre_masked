
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; int* wValue; } ;
struct avr32dci_td {int did_stall; int remainder; int offset; int ep_no; int pc; } ;
struct avr32dci_softc {int sc_dv_addr; int physdata; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct avr32dci_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct avr32dci_softc*,int ) ;
 int FUNC_6 (struct avr32dci_softc*,int ,int) ;
 int FUNC_7 (int,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (struct avr32dci_softc*,int,int) ;
 int FUNC_9 (struct usb_device_request*,int ,int) ;
 int FUNC_10 (int ,int ,struct usb_device_request*,int) ;

__attribute__((used)) static uint8_t
FUNC_11(struct avr32dci_td *VAR_6)
{
 struct avr32dci_softc *VAR_7;
 struct usb_device_request VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10;


 VAR_7 = FUNC_4(VAR_6->pc);


 VAR_10 = FUNC_5(VAR_7, FUNC_2(VAR_6->ep_no));

 FUNC_7(5, "EPTSTA(%u)=0x%08x\n", VAR_6->ep_no, VAR_10);

 if (!(VAR_10 & VAR_3)) {
  goto not_complete;
 }

 VAR_6->did_stall = 0;

 VAR_9 = FUNC_3(VAR_10);


 if (VAR_9 != VAR_6->remainder) {
  FUNC_7(0, "Invalid SETUP packet "
      "length, %d bytes\n", VAR_9);
  goto not_complete;
 }
 if (VAR_9 != sizeof(VAR_8)) {
  FUNC_7(0, "Unsupported SETUP packet "
      "length, %d bytes\n", VAR_9);
  goto not_complete;
 }

 FUNC_9(&VAR_8, VAR_7->physdata, sizeof(VAR_8));


 FUNC_10(VAR_6->pc, 0, &VAR_8, sizeof(VAR_8));

 VAR_6->offset = sizeof(VAR_8);
 VAR_6->remainder = 0;


 if ((VAR_8.bmRequestType == VAR_5) &&
     (VAR_8.bRequest == VAR_4)) {
  VAR_7->sc_dv_addr = VAR_8.wValue[0] & 0x7F;

  FUNC_8(VAR_7, 0, VAR_1 |
      VAR_0);
  FUNC_8(VAR_7, VAR_7->sc_dv_addr, 0);
 } else {
  VAR_7->sc_dv_addr = 0xFF;
 }


 FUNC_6(VAR_7, FUNC_0(VAR_6->ep_no), VAR_3);
 return (0);

not_complete:
 if (VAR_10 & VAR_3) {

  FUNC_6(VAR_7, FUNC_0(VAR_6->ep_no), VAR_3);
 }

 if (!VAR_6->did_stall) {
  FUNC_7(5, "stalling\n");
  FUNC_6(VAR_7, FUNC_1(VAR_6->ep_no),
      VAR_2);
  VAR_6->did_stall = 1;
 }
 return (1);
}
