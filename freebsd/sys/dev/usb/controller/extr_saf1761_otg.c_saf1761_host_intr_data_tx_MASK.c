
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct saf1761_otg_td {scalar_t__ channel; int error_stall; int error_any; scalar_t__ remainder; int short_pkt; int max_packet_size; int toggle; int dw1_value; int uframe; int interval; int ep_index; scalar_t__ set_toggle; } ;
struct saf1761_otg_softc {int sc_host_intr_map; int sc_host_intr_suspend_map; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct saf1761_otg_softc*,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (struct saf1761_otg_softc*,struct saf1761_otg_td*) ;
 int FUNC_6 (struct saf1761_otg_softc*,struct saf1761_otg_td*) ;
 int FUNC_7 (struct saf1761_otg_softc*,int) ;
 int FUNC_8 (struct saf1761_otg_softc*,struct saf1761_otg_td*,int) ;

__attribute__((used)) static uint8_t
FUNC_9(struct saf1761_otg_softc *VAR_16, struct saf1761_otg_td *VAR_17)
{
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;

 if (VAR_17->channel < VAR_0) {
  uint32_t VAR_21;

  VAR_18 = FUNC_4(VAR_17->channel);

  VAR_21 = FUNC_7(VAR_16, VAR_18 + VAR_7);

  FUNC_0(5, "STATUS=0x%08x\n", VAR_21);

  if (VAR_21 & VAR_8) {
   goto busy;
  } else if (VAR_21 & VAR_11) {
   if (!(VAR_21 & VAR_10))
    VAR_17->error_stall = 1;
   VAR_17->error_any = 1;
   goto complete;
  }


  if (VAR_17->remainder == 0) {
   if (VAR_17->short_pkt)
    goto complete;

  }
  FUNC_6(VAR_16, VAR_17);
 }
 if (FUNC_5(VAR_16, VAR_17))
  goto busy;

 VAR_20 = VAR_17->max_packet_size;
 if (VAR_17->remainder < VAR_20) {

  VAR_17->short_pkt = 1;
  VAR_20 = VAR_17->remainder;
 }

 FUNC_8(VAR_16, VAR_17, VAR_20);


 if (VAR_17->set_toggle) {
  VAR_17->set_toggle = 0;
  VAR_17->toggle = 1;
 }



 VAR_18 = FUNC_4(VAR_17->channel);

 FUNC_1(VAR_16, VAR_18 + VAR_15, 0);
 FUNC_1(VAR_16, VAR_18 + VAR_14, 0);

 if (VAR_17->dw1_value & VAR_5) {
  VAR_19 = (0xFC << VAR_17->uframe) & 0xFF;
 } else {
  VAR_19 = 0;
 }
 FUNC_1(VAR_16, VAR_18 + VAR_13, VAR_19);

 VAR_19 = (1U << VAR_17->uframe);
 FUNC_1(VAR_16, VAR_18 + VAR_12, VAR_19);

 VAR_19 = VAR_8 | (VAR_17->toggle << 25) | VAR_9;
 FUNC_1(VAR_16, VAR_18 + VAR_7, VAR_19);

 VAR_19 = (FUNC_3(FUNC_2(VAR_17->channel)) << 8) |
     (VAR_17->interval & 0xF8);
 FUNC_1(VAR_16, VAR_18 + VAR_6, VAR_19);

 VAR_19 = VAR_17->dw1_value | (0 << 10) | (VAR_17->ep_index >> 1);
 FUNC_1(VAR_16, VAR_18 + VAR_4, VAR_19);

 VAR_19 = (VAR_17->ep_index << 31) | (1 << 29) |
     (VAR_17->max_packet_size << 18) |
     (VAR_20 << 3) |
     VAR_3;
 FUNC_1(VAR_16, VAR_18 + VAR_2, VAR_19);


 FUNC_1(VAR_16, VAR_1,
     (~VAR_16->sc_host_intr_map) | VAR_16->sc_host_intr_suspend_map);

 VAR_17->toggle ^= 1;
busy:
 return (1);
complete:
 FUNC_6(VAR_16, VAR_17);
 return (0);
}
