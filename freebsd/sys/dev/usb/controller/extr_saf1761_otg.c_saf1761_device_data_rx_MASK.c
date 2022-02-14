
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct saf1761_otg_td {int ep_index; int remainder; int error_any; int max_packet_size; int short_pkt; scalar_t__ set_toggle; } ;
struct saf1761_otg_softc {int dummy; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct saf1761_otg_softc*,int ) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct saf1761_otg_softc*,struct saf1761_otg_td*,int) ;

__attribute__((used)) static uint8_t
FUNC_4(struct saf1761_otg_softc *VAR_9, struct saf1761_otg_td *VAR_10)
{
 uint32_t VAR_11;
 uint8_t VAR_12 = 0;

 if (VAR_10->ep_index == 0) {

  FUNC_2(VAR_9, VAR_5, VAR_8);

  VAR_11 = FUNC_1(VAR_9, VAR_0);


  if ((VAR_11 & VAR_2) != 0) {

   if (VAR_10->remainder == 0) {




    FUNC_0(5, "faking complete\n");
    return (0);
   }
   FUNC_0(5, "SETUP packet while receiving data\n");



   VAR_10->error_any = 1;
   return (0);
  }
 }

 FUNC_2(VAR_9, VAR_5,
     (VAR_10->ep_index << VAR_7) |
     VAR_6);


 if (VAR_10->set_toggle) {
  VAR_10->set_toggle = 0;
  FUNC_2(VAR_9, VAR_3, VAR_4);
 }

 VAR_11 = FUNC_1(VAR_9, VAR_0);


 if ((VAR_11 & VAR_2) == 0)
  return (1);


 VAR_11 &= VAR_1;

 FUNC_0(5, "rem=%u count=0x%04x\n", VAR_10->remainder, VAR_11);


 if (VAR_11 != VAR_10->max_packet_size) {
  if (VAR_11 < VAR_10->max_packet_size) {

   VAR_10->short_pkt = 1;
   VAR_12 = 1;
  } else {

   VAR_10->error_any = 1;
   return (0);
  }
 }

 if (VAR_11 > VAR_10->remainder) {

  VAR_10->error_any = 1;
  return (0);
 }

 FUNC_3(VAR_9, VAR_10, VAR_11);


 if ((VAR_10->remainder == 0) || VAR_12) {
  if (VAR_10->short_pkt) {

   return (0);
  }

 }
 return (1);
}
