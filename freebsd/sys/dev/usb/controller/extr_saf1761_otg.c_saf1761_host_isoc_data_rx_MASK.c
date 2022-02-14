
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct saf1761_otg_td {scalar_t__ channel; int dw1_value; int max_packet_size; int short_pkt; int error_any; int remainder; int uframe; int ep_index; } ;
struct saf1761_otg_softc {int sc_host_isoc_map; int sc_host_isoc_suspend_map; } ;


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
 int VAR_16 ;
 scalar_t__ FUNC_5 (struct saf1761_otg_softc*,struct saf1761_otg_td*) ;
 int FUNC_6 (struct saf1761_otg_softc*,struct saf1761_otg_td*) ;
 int FUNC_7 (struct saf1761_otg_softc*,int) ;
 int FUNC_8 (struct saf1761_otg_softc*,struct saf1761_otg_td*,int) ;

__attribute__((used)) static uint8_t
FUNC_9(struct saf1761_otg_softc *VAR_17, struct saf1761_otg_td *VAR_18)
{
 uint32_t VAR_19;
 uint32_t VAR_20;

 if (VAR_18->channel < VAR_0) {
  uint32_t VAR_21;
  uint32_t VAR_22;

  VAR_19 = FUNC_4(VAR_18->channel);

  VAR_21 = FUNC_7(VAR_17, VAR_19 + VAR_7);

  FUNC_0(5, "STATUS=0x%08x\n", VAR_21);

  if (VAR_21 & VAR_8) {
   goto busy;
  } else if (VAR_21 & VAR_10) {
   goto complete;
  }
  if (VAR_18->dw1_value & VAR_5)
   VAR_22 = (VAR_21 & VAR_12);
  else
   VAR_22 = (VAR_21 & VAR_11);


  if (VAR_22 != VAR_18->max_packet_size) {
   if (VAR_22 < VAR_18->max_packet_size) {

    VAR_18->short_pkt = 1;
   } else {

    VAR_18->error_any = 1;
    goto complete;
   }
  }


  if (VAR_22 > VAR_18->remainder) {

   VAR_18->error_any = 1;
   goto complete;
  }

  FUNC_8(VAR_17, VAR_18, VAR_22);
  goto complete;
 }

 if (FUNC_5(VAR_17, VAR_18))
  goto busy;



 VAR_19 = FUNC_4(VAR_18->channel);

 FUNC_1(VAR_17, VAR_19 + VAR_16, 0);
 FUNC_1(VAR_17, VAR_19 + VAR_15, 0);

 if (VAR_18->dw1_value & VAR_5) {
  VAR_20 = (0xFC << (VAR_18->uframe & 7)) & 0xFF;
 } else {
  VAR_20 = 0;
 }
 FUNC_1(VAR_17, VAR_19 + VAR_14, VAR_20);

 VAR_20 = (1U << (VAR_18->uframe & 7));
 FUNC_1(VAR_17, VAR_19 + VAR_13, VAR_20);

 VAR_20 = VAR_8 | VAR_9;
 FUNC_1(VAR_17, VAR_19 + VAR_7, VAR_20);

 VAR_20 = (FUNC_3(FUNC_2(VAR_18->channel)) << 8) |
     (VAR_18->uframe & 0xF8);
 FUNC_1(VAR_17, VAR_19 + VAR_6, VAR_20);

 VAR_20 = VAR_18->dw1_value | (1 << 10) | (VAR_18->ep_index >> 1);
 FUNC_1(VAR_17, VAR_19 + VAR_4, VAR_20);

 VAR_20 = (VAR_18->ep_index << 31) | (1 << 29) |
     (VAR_18->max_packet_size << 18) |
     (VAR_18->max_packet_size << 3) |
     VAR_3;
 FUNC_1(VAR_17, VAR_19 + VAR_2, VAR_20);


 FUNC_1(VAR_17, VAR_1,
     (~VAR_17->sc_host_isoc_map) | VAR_17->sc_host_isoc_suspend_map);
busy:
 return (1);
complete:
 FUNC_6(VAR_17, VAR_18);
 return (0);
}
