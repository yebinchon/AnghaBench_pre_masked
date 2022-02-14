
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct musbotg_td {int ep_no; scalar_t__ max_frame_size; } ;
struct musbotg_softc {scalar_t__ sc_mode; int sc_channel_mask; int sc_ep_max; TYPE_1__* sc_hw_ep_profile; } ;
struct TYPE_2__ {scalar_t__ max_in_frame_size; scalar_t__ max_out_frame_size; } ;


 int FUNC_0 (int,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct musbotg_softc*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct musbotg_softc *VAR_1, struct musbotg_td *VAR_2, uint8_t VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = VAR_2->ep_no;


 if (VAR_1->sc_mode == VAR_0) {
  FUNC_1(VAR_1, VAR_5, 1);
  return (VAR_5);
 }




 if (VAR_5 == 0) {
  if (VAR_1->sc_channel_mask & (1 << 0))
   return (-1);
  VAR_1->sc_channel_mask |= (1 << 0);
  FUNC_1(VAR_1, VAR_5, 1);
  return (0);
 }

 for (VAR_4 = VAR_1->sc_ep_max; VAR_4 != 0; VAR_4--) {
  if (VAR_1->sc_channel_mask & (1 << VAR_4))
   continue;


  if (VAR_3) {
   if (VAR_2->max_frame_size >
       VAR_1->sc_hw_ep_profile[VAR_4].max_in_frame_size)
    continue;
  } else {
   if (VAR_2->max_frame_size >
       VAR_1->sc_hw_ep_profile[VAR_4].max_out_frame_size)
    continue;
  }
  VAR_1->sc_channel_mask |= (1 << VAR_4);
  FUNC_1(VAR_1, VAR_4, 1);
  return (VAR_4);
 }

 FUNC_0(-1, "No available channels. Mask: %04x\n", VAR_1->sc_channel_mask);

 return (-1);
}
