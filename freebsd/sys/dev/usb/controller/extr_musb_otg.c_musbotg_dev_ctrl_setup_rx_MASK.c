
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; int* wValue; } ;
struct musbotg_td {int channel; int did_stall; int remainder; int offset; int pc; } ;
struct musbotg_softc {int sc_ep0_busy; int sc_dv_addr; scalar_t__ sc_ep0_cmd; int sc_io_hdl; int sc_io_tag; } ;
typedef int req ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (struct musbotg_softc*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct musbotg_softc*,int ,scalar_t__) ;
 struct musbotg_softc* FUNC_5 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int ,int ,int ,void*,int) ;
 int FUNC_7 (struct musbotg_softc*,struct musbotg_td*,int ) ;
 int FUNC_8 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_9 (int ,int ,struct usb_device_request*,int) ;

__attribute__((used)) static uint8_t
FUNC_10(struct musbotg_td *VAR_12)
{
 struct musbotg_softc *VAR_13;
 struct usb_device_request VAR_14;
 uint16_t VAR_15;
 uint8_t VAR_16;


 VAR_13 = FUNC_5(VAR_12->pc);

 if (VAR_12->channel == -1)
  VAR_12->channel = FUNC_7(VAR_13, VAR_12, 0);


 if (VAR_12->channel == -1)
  return (1);

 FUNC_0(1, "ep_no=%d\n", VAR_12->channel);


 FUNC_4(VAR_13, VAR_7, 0);


 VAR_16 = FUNC_1(VAR_13, VAR_9);

 FUNC_0(4, "csr=0x%02x\n", VAR_16);





 if (VAR_16 & VAR_0) {

  VAR_12->did_stall = 1;

  FUNC_0(1, "CSR0 DATAEND\n");
  goto not_complete;
 }

 if (VAR_16 & VAR_4) {

  FUNC_4(VAR_13, VAR_9, 0);

  VAR_16 = FUNC_1(VAR_13, VAR_9);

  VAR_13->sc_ep0_busy = 0;
 }
 if (VAR_16 & VAR_5) {

  FUNC_4(VAR_13, VAR_9,
      VAR_6);

  VAR_16 = FUNC_1(VAR_13, VAR_9);

  VAR_13->sc_ep0_busy = 0;
 }
 if (VAR_13->sc_ep0_busy) {
  FUNC_0(1, "EP0 BUSY\n");
  goto not_complete;
 }
 if (!(VAR_16 & VAR_1)) {
  goto not_complete;
 }

 VAR_15 = FUNC_2(VAR_13, VAR_8);


 if (VAR_15 != VAR_12->remainder) {
  FUNC_0(1, "Invalid SETUP packet "
      "length, %d bytes\n", VAR_15);
  FUNC_4(VAR_13, VAR_9,
        VAR_2);

  VAR_12->did_stall = 1;
  goto not_complete;
 }
 if (VAR_15 != sizeof(VAR_14)) {
  FUNC_0(1, "Unsupported SETUP packet "
      "length, %d bytes\n", VAR_15);
  FUNC_4(VAR_13, VAR_9,
        VAR_2);

  VAR_12->did_stall = 1;
  goto not_complete;
 }

 VAR_12->did_stall = 0;


 FUNC_6(VAR_13->sc_io_tag, VAR_13->sc_io_hdl,
     FUNC_3(0), (void *)&VAR_14, sizeof(VAR_14));


 FUNC_9(VAR_12->pc, 0, &VAR_14, sizeof(VAR_14));

 VAR_12->offset = sizeof(VAR_14);
 VAR_12->remainder = 0;


 VAR_13->sc_ep0_cmd = VAR_2;


 VAR_13->sc_ep0_busy = 1;


 if ((VAR_14.bmRequestType == VAR_11) &&
     (VAR_14.bRequest == VAR_10)) {
  VAR_13->sc_dv_addr = VAR_14.wValue[0] & 0x7F;
 } else {
  VAR_13->sc_dv_addr = 0xFF;
 }

 FUNC_8(VAR_13, VAR_12);
 return (0);

not_complete:

 if (!VAR_12->did_stall) {
  FUNC_0(4, "stalling\n");
  FUNC_4(VAR_13, VAR_9,
      VAR_3);
  VAR_12->did_stall = 1;
 }
 return (1);
}
