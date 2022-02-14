
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct uss820dci_td {int ep_index; int remainder; int did_stall; int offset; int pc; } ;
struct uss820dci_softc {int sc_dv_addr; int sc_io_hdl; int sc_io_tag; } ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; int* wValue; } ;
typedef int req ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct uss820dci_softc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct uss820dci_softc*,int ,int) ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (int ,int ,int,void*,int) ;
 int FUNC_5 (int ,int ,struct usb_device_request*,int) ;
 int FUNC_6 (struct uss820dci_softc*,int ,int,int) ;

__attribute__((used)) static uint8_t
FUNC_7(struct uss820dci_softc *VAR_20, struct uss820dci_td *VAR_21)
{
 struct usb_device_request VAR_22;
 uint16_t VAR_23;
 uint8_t VAR_24;
 uint8_t VAR_25;


 FUNC_3(VAR_20, VAR_6, VAR_21->ep_index);


 VAR_24 = FUNC_2(VAR_20, VAR_13);

 FUNC_1(5, "rx_stat=0x%02x rem=%u\n", VAR_24, VAR_21->remainder);

 if (!(VAR_24 & VAR_15)) {
  goto not_complete;
 }

 VAR_21->did_stall = 0;


 FUNC_6(VAR_20, VAR_1,
     0xFF ^ (VAR_5 |
     VAR_3 |
     VAR_2 |
     VAR_4), 0);


 FUNC_6(VAR_20, VAR_13,
     0xFF ^ VAR_14, 0);


 VAR_23 = FUNC_2(VAR_20, VAR_9);
 VAR_23 |= (FUNC_2(VAR_20, VAR_8) << 8);
 VAR_23 &= 0x3FF;


 if (VAR_23 != VAR_21->remainder) {
  FUNC_1(0, "Invalid SETUP packet "
      "length, %d bytes\n", VAR_23);
  goto setup_not_complete;
 }
 if (VAR_23 != sizeof(VAR_22)) {
  FUNC_1(0, "Unsupported SETUP packet "
      "length, %d bytes\n", VAR_23);
  goto setup_not_complete;
 }

 FUNC_4(VAR_20->sc_io_tag, VAR_20->sc_io_hdl,
     VAR_12 * VAR_7, (void *)&VAR_22, sizeof(VAR_22));


 VAR_24 = FUNC_2(VAR_20, VAR_13);

 if (VAR_24 & (VAR_14 |
     VAR_16)) {
  FUNC_0("new SETUP packet received\n");
  return (1);
 }

 FUNC_6(VAR_20, VAR_13,
     0xFF ^ (VAR_15 |
     VAR_14 |
     VAR_16), 0);


 VAR_25 = FUNC_2(VAR_20, VAR_10);
 VAR_25 |= VAR_11;
 FUNC_3(VAR_20, VAR_10, VAR_25);


 FUNC_5(VAR_21->pc, 0, &VAR_22, sizeof(VAR_22));

 VAR_21->offset = sizeof(VAR_22);
 VAR_21->remainder = 0;


 if ((VAR_22.bmRequestType == VAR_19) &&
     (VAR_22.bRequest == VAR_0)) {
  VAR_20->sc_dv_addr = VAR_22.wValue[0] & 0x7F;
 } else {
  VAR_20->sc_dv_addr = 0xFF;
 }


 VAR_25 = FUNC_2(VAR_20, VAR_17);
 VAR_25 |= VAR_18;
 FUNC_3(VAR_20, VAR_17, VAR_25);
 VAR_25 &= ~VAR_18;
 FUNC_3(VAR_20, VAR_17, VAR_25);

 return (0);

setup_not_complete:


 VAR_25 = FUNC_2(VAR_20, VAR_10);
 VAR_25 |= VAR_11;
 FUNC_3(VAR_20, VAR_10, VAR_25);



not_complete:

 if (!VAR_21->did_stall) {
  FUNC_1(5, "stalling\n");

  FUNC_6(VAR_20, VAR_1, 0xFF,
      (VAR_5 | VAR_3));

  VAR_21->did_stall = 1;
 }


 if (VAR_24 & VAR_15) {
  FUNC_6(VAR_20, VAR_13,
      0xFF ^ (VAR_14 |
      VAR_16 |
      VAR_15), 0);
 }
 return (1);
}
