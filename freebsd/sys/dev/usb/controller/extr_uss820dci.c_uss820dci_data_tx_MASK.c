
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct uss820dci_td {scalar_t__ ep_index; scalar_t__ remainder; int error; scalar_t__ max_packet_size; int short_pkt; int did_enable; int pc; int offset; int support_multi_buffer; } ;
struct uss820dci_softc {int sc_io_hdl; int sc_io_tag; } ;
struct usb_page_search {scalar_t__ length; int buffer; } ;


 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct uss820dci_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct uss820dci_softc*,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,struct usb_page_search*) ;
 int FUNC_6 (int ,int ,int,int ) ;

__attribute__((used)) static uint8_t
FUNC_7(struct uss820dci_softc *VAR_16, struct uss820dci_td *VAR_17)
{
 struct usb_page_search VAR_18;
 uint16_t VAR_19;
 uint16_t VAR_20;
 uint8_t VAR_21;
 uint8_t VAR_22;
 uint8_t VAR_23;


 FUNC_3(VAR_16, VAR_2, VAR_17->ep_index);

 VAR_23 = 2;

repeat:

 VAR_22 = FUNC_2(VAR_16, VAR_11);

 FUNC_0(5, "tx_flag=0x%02x rem=%u\n", VAR_22, VAR_17->remainder);

 if (VAR_17->ep_index == 0) {

  VAR_21 = FUNC_2(VAR_16, VAR_4);

  FUNC_0(5, "rx_stat=0x%02x\n", VAR_21);

  if (VAR_21 & (VAR_6 |
      VAR_7 |
      VAR_5)) {




   VAR_17->error = 1;
   return (0);
  }
 }
 if (VAR_22 & (VAR_14 |
     VAR_15)) {
  VAR_17->error = 1;
  return (0);
 }
 if (VAR_22 & VAR_12) {
  if (VAR_22 & VAR_13) {
   return (1);
  }
 }
 if ((!VAR_17->support_multi_buffer) &&
     (VAR_22 & (VAR_12 |
     VAR_13))) {
  return (1);
 }
 VAR_19 = VAR_17->max_packet_size;
 if (VAR_17->remainder < VAR_19) {

  VAR_17->short_pkt = 1;
  VAR_19 = VAR_17->remainder;
 }
 VAR_20 = VAR_19;
 while (VAR_19 > 0) {

  FUNC_5(VAR_17->pc, VAR_17->offset, &VAR_18);


  if (VAR_18.length > VAR_19) {
   VAR_18.length = VAR_19;
  }

  FUNC_4(VAR_16->sc_io_tag, VAR_16->sc_io_hdl,
      VAR_10 * VAR_3, VAR_18.buffer, VAR_18.length);


  VAR_19 -= VAR_18.length;
  VAR_17->offset += VAR_18.length;
  VAR_17->remainder -= VAR_18.length;
 }


 FUNC_3(VAR_16, VAR_8, VAR_20 >> 8);


 FUNC_3(VAR_16, VAR_9, VAR_20);





 if (!VAR_17->did_enable) {
  FUNC_6(FUNC_1(VAR_17->pc),
      VAR_0, 0xFF, VAR_1);
  VAR_17->did_enable = 1;
 }

 if (VAR_17->remainder == 0) {
  if (VAR_17->short_pkt) {
   return (0);
  }

 }
 if (--VAR_23) {
  goto repeat;
 }
 return (1);
}
