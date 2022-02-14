
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct saf1761_otg_td {scalar_t__ channel; int error_stall; int error_any; int dw1_value; int max_packet_size; int short_pkt; int toggle; int remainder; int ep_index; scalar_t__ set_toggle; } ;
struct saf1761_otg_softc {int sc_host_async_map; int sc_host_async_suspend_map; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct saf1761_otg_softc*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
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
 int VAR_17 ;
 scalar_t__ FUNC_5 (struct saf1761_otg_softc*,struct saf1761_otg_td*) ;
 int FUNC_6 (struct saf1761_otg_softc*,struct saf1761_otg_td*) ;
 int FUNC_7 (struct saf1761_otg_softc*,int) ;
 int FUNC_8 (struct saf1761_otg_softc*,struct saf1761_otg_td*,int) ;

__attribute__((used)) static uint8_t
FUNC_9(struct saf1761_otg_softc *VAR_18, struct saf1761_otg_td *VAR_19)
{
 uint32_t VAR_20;
 uint32_t VAR_21;

 if (VAR_19->channel < VAR_1) {
  uint32_t VAR_22;
  uint32_t VAR_23;
  uint8_t VAR_24;

  VAR_20 = FUNC_4(VAR_19->channel);

  VAR_22 = FUNC_7(VAR_18, VAR_20 + VAR_7);

  FUNC_0(5, "STATUS=0x%08x\n", VAR_22);

  if (VAR_22 & VAR_8) {
   VAR_21 = FUNC_7(VAR_18,
       VAR_20 + VAR_2);
   if (VAR_21 & VAR_3) {
    goto busy;
   } else {
    VAR_22 = FUNC_7(VAR_18,
        VAR_20 + VAR_7);


    if (VAR_22 & VAR_8) {
     FUNC_6(VAR_18, VAR_19);
     goto retry;
    } else if (VAR_22 & VAR_11) {
     if (!(VAR_22 & VAR_10))
      VAR_19->error_stall = 1;
     VAR_19->error_any = 1;
     goto complete;
    }
   }
  } else if (VAR_22 & VAR_11) {
   if (!(VAR_22 & VAR_10))
    VAR_19->error_stall = 1;
   VAR_19->error_any = 1;
   goto complete;
  }
  if (VAR_19->dw1_value & VAR_5)
   VAR_23 = (VAR_22 & VAR_13);
  else
   VAR_23 = (VAR_22 & VAR_12);
  VAR_24 = 0;


  if (VAR_23 != VAR_19->max_packet_size) {
   if (VAR_23 < VAR_19->max_packet_size) {

    VAR_19->short_pkt = 1;
    VAR_24 = 1;
   } else {

    VAR_19->error_any = 1;
    goto complete;
   }
  }
  VAR_19->toggle ^= 1;


  if (VAR_23 > VAR_19->remainder) {

   VAR_19->error_any = 1;
   goto complete;
  }

  FUNC_8(VAR_18, VAR_19, VAR_23);


  if ((VAR_19->remainder == 0) || VAR_24) {
   if (VAR_19->short_pkt)
    goto complete;

  }
  FUNC_6(VAR_18, VAR_19);
 }
retry:
 if (FUNC_5(VAR_18, VAR_19))
  goto busy;


 if (VAR_19->set_toggle) {
  VAR_19->set_toggle = 0;
  VAR_19->toggle = 1;
 }



 VAR_20 = FUNC_4(VAR_19->channel);

 FUNC_1(VAR_18, VAR_20 + VAR_17, 0);
 FUNC_1(VAR_18, VAR_20 + VAR_16, 0);
 FUNC_1(VAR_18, VAR_20 + VAR_15, 0);
 FUNC_1(VAR_18, VAR_20 + VAR_14, 0);

 VAR_21 = VAR_8 | (VAR_19->toggle << 25) |
     VAR_9;
 FUNC_1(VAR_18, VAR_20 + VAR_7, VAR_21);

 VAR_21 = (FUNC_3(FUNC_2(VAR_19->channel)) << 8);
 FUNC_1(VAR_18, VAR_20 + VAR_6, VAR_21);

 VAR_21 = VAR_19->dw1_value | (1 << 10) | (VAR_19->ep_index >> 1);
 FUNC_1(VAR_18, VAR_20 + VAR_4, VAR_21);

 VAR_21 = (VAR_19->ep_index << 31) | (1 << 29) |
     (VAR_19->max_packet_size << 18) |
     (VAR_19->max_packet_size << 3) |
     VAR_3;
 FUNC_1(VAR_18, VAR_20 + VAR_2, VAR_21);


 FUNC_1(VAR_18, VAR_0,
     (~VAR_18->sc_host_async_map) | VAR_18->sc_host_async_suspend_map);
busy:
 return (1);
complete:
 FUNC_6(VAR_18, VAR_19);
 return (0);
}
