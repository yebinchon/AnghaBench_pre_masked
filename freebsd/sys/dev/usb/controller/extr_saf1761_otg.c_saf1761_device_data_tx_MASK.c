
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct saf1761_otg_td {int ep_index; int error_any; int remainder; int max_packet_size; int short_pkt; scalar_t__ set_toggle; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct saf1761_otg_softc*,struct saf1761_otg_td*,int) ;

__attribute__((used)) static uint8_t
FUNC_4(struct saf1761_otg_softc *VAR_11, struct saf1761_otg_td *VAR_12)
{
 uint32_t VAR_13;

 if (VAR_12->ep_index == 0) {

  FUNC_2(VAR_11, VAR_5, VAR_8);

  VAR_13 = FUNC_1(VAR_11, VAR_0);


  if ((VAR_13 & VAR_1) != 0) {
   FUNC_0(5, "SETUP abort\n");



   VAR_12->error_any = 1;
   return (0);
  }
 }

 FUNC_2(VAR_11, VAR_5,
     (VAR_12->ep_index << VAR_7) |
     VAR_6);

 VAR_13 = FUNC_1(VAR_11, VAR_0);


 if ((VAR_13 & VAR_1) != 0)
  return (1);


 if (VAR_12->set_toggle) {
  VAR_12->set_toggle = 0;
  FUNC_2(VAR_11, VAR_2, VAR_3);
 }

 FUNC_0(5, "rem=%u\n", VAR_12->remainder);

 VAR_13 = VAR_12->max_packet_size;
 if (VAR_12->remainder < VAR_13) {

  VAR_12->short_pkt = 1;
  VAR_13 = VAR_12->remainder;
 }

 FUNC_3(VAR_11, VAR_12, VAR_13);

 if (VAR_12->ep_index == 0) {
  if (VAR_13 < VAR_9) {

   FUNC_2(VAR_11, VAR_2, VAR_4);
  }
 } else {
  if (VAR_13 < VAR_10) {

   FUNC_2(VAR_11, VAR_2, VAR_4);
  }
 }


 if (VAR_12->remainder == 0) {
  if (VAR_12->short_pkt) {
   return (0);
  }

 }
 return (1);
}
