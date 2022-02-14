
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device_request {int dummy; } ;
struct musbotg_td {int channel; int error; scalar_t__ remainder; int offset; int dev_addr; int haddr; int hport; int transfer_type; int transaction_started; int pc; } ;
struct musbotg_softc {int sc_io_hdl; int sc_io_tag; } ;
typedef int req ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct musbotg_softc*,int ,int) ;
 struct musbotg_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,void*,int) ;
 int FUNC_9 (struct musbotg_softc*,struct musbotg_td*,int) ;
 int FUNC_10 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_11 (int ,int ,struct usb_device_request*,int) ;

__attribute__((used)) static uint8_t
FUNC_12(struct musbotg_td *VAR_13)
{
 struct musbotg_softc *VAR_14;
 struct usb_device_request VAR_15;
 uint8_t VAR_16, VAR_17;


 VAR_14 = FUNC_7(VAR_13->pc);

 if (VAR_13->channel == -1)
  VAR_13->channel = FUNC_9(VAR_14, VAR_13, 1);


 if (VAR_13->channel == -1)
  return (1);

 FUNC_0(1, "ep_no=%d\n", VAR_13->channel);


 FUNC_6(VAR_14, VAR_8, 0);


 VAR_16 = FUNC_1(VAR_14, VAR_10);
 FUNC_0(4, "csr=0x%02x\n", VAR_16);


 if (VAR_16 & VAR_7)
  return (1);


 if (VAR_16 & (VAR_4 |
     VAR_2))
 {

  FUNC_6(VAR_14, VAR_10, 0);
  FUNC_0(1, "error bit set, csr=0x%02x\n", VAR_16);
  VAR_13->error = 1;
 }

 if (VAR_16 & VAR_3) {
  FUNC_0(1, "NAK timeout\n");

  if (VAR_16 & VAR_6) {
   VAR_17 = FUNC_1(VAR_14, VAR_9);
   VAR_17 |= VAR_1;
   FUNC_6(VAR_14, VAR_9, VAR_17);
   VAR_16 = FUNC_1(VAR_14, VAR_10);
   if (VAR_16 & VAR_6) {
    VAR_17 = FUNC_1(VAR_14, VAR_9);
    VAR_17 |= VAR_1;
    FUNC_6(VAR_14, VAR_9, VAR_17);
    VAR_16 = FUNC_1(VAR_14, VAR_10);
   }
  }

  VAR_16 &= ~VAR_3;
  FUNC_6(VAR_14, VAR_10, VAR_16);

  VAR_13->error = 1;
 }

 if (VAR_13->error) {
  FUNC_10(VAR_14, VAR_13);
  return (0);
 }


 if (VAR_16 & VAR_7)
  return (1);


 if (VAR_13->remainder == 0) {

  FUNC_10(VAR_14, VAR_13);
  return (0);
 }


 FUNC_11(VAR_13->pc, 0, &VAR_15, sizeof(VAR_15));


 FUNC_8(VAR_14->sc_io_tag, VAR_14->sc_io_hdl,
     FUNC_2(0), (void *)&VAR_15, sizeof(VAR_15));


 VAR_13->offset += sizeof(VAR_15);
 VAR_13->remainder -= sizeof(VAR_15);


 FUNC_6(VAR_14, VAR_11, VAR_0);
 FUNC_6(VAR_14, FUNC_3(0), VAR_13->dev_addr);
 FUNC_6(VAR_14, FUNC_4(0), VAR_13->haddr);
 FUNC_6(VAR_14, FUNC_5(0), VAR_13->hport);
 FUNC_6(VAR_14, VAR_12, VAR_13->transfer_type);


 FUNC_6(VAR_14, VAR_10,
     VAR_7 |
     VAR_5);


 VAR_13->transaction_started = 1;

 return (1);
}
