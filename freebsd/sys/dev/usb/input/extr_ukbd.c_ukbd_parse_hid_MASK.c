
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ukbd_softc {int sc_flags; int sc_id_scrolllock; int sc_loc_scrolllock; int sc_id_capslock; int sc_loc_capslock; int sc_id_numlock; int sc_loc_numlock; void* sc_led_size; int sc_id_events; int sc_loc_events; int sc_id_win_r; int sc_loc_win_r; int sc_id_win_l; int sc_loc_win_l; int sc_id_alt_r; int sc_loc_alt_r; int sc_id_alt_l; int sc_loc_alt_l; int sc_id_shift_r; int sc_loc_shift_r; int sc_id_shift_l; int sc_loc_shift_l; int sc_id_ctrl_r; int sc_loc_ctrl_r; int sc_id_ctrl_l; int sc_loc_ctrl_l; int sc_id_apple_fn; int sc_loc_apple_fn; int sc_id_apple_eject; int sc_loc_apple_eject; int sc_kbd_id; void* sc_kbd_size; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (int const*,int,int ,int ,int ,int *,int*,int *) ;
 int VAR_22 ;
 void* FUNC_3 (int const*,int,int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct ukbd_softc *VAR_23, const uint8_t *VAR_24, uint32_t VAR_25)
{
 uint32_t VAR_26;


 VAR_23->sc_flags &= ~VAR_14;


 VAR_23->sc_kbd_size = FUNC_3(VAR_24, VAR_25,
     VAR_21, &VAR_23->sc_kbd_id);


 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_2, VAR_1),
     VAR_21, 0, &VAR_23->sc_loc_apple_eject, &VAR_26,
     &VAR_23->sc_id_apple_eject)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_7 |
       VAR_9;
  FUNC_0(1, "Found Apple eject-key\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(0xFFFF, 0x0003),
     VAR_21, 0, &VAR_23->sc_loc_apple_fn, &VAR_26,
     &VAR_23->sc_id_apple_fn)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_8;
  FUNC_0(1, "Found Apple FN-key\n");
 }

 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_3, 0xE0),
     VAR_21, 0, &VAR_23->sc_loc_ctrl_l, &VAR_26,
     &VAR_23->sc_id_ctrl_l)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_11;
  FUNC_0(1, "Found left control\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_3, 0xE4),
     VAR_21, 0, &VAR_23->sc_loc_ctrl_r, &VAR_26,
     &VAR_23->sc_id_ctrl_r)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_12;
  FUNC_0(1, "Found right control\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_3, 0xE1),
     VAR_21, 0, &VAR_23->sc_loc_shift_l, &VAR_26,
     &VAR_23->sc_id_shift_l)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_17;
  FUNC_0(1, "Found left shift\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_3, 0xE5),
     VAR_21, 0, &VAR_23->sc_loc_shift_r, &VAR_26,
     &VAR_23->sc_id_shift_r)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_18;
  FUNC_0(1, "Found right shift\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_3, 0xE2),
     VAR_21, 0, &VAR_23->sc_loc_alt_l, &VAR_26,
     &VAR_23->sc_id_alt_l)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_5;
  FUNC_0(1, "Found left alt\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_3, 0xE6),
     VAR_21, 0, &VAR_23->sc_loc_alt_r, &VAR_26,
     &VAR_23->sc_id_alt_r)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_6;
  FUNC_0(1, "Found right alt\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_3, 0xE3),
     VAR_21, 0, &VAR_23->sc_loc_win_l, &VAR_26,
     &VAR_23->sc_id_win_l)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_19;
  FUNC_0(1, "Found left GUI\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_3, 0xE7),
     VAR_21, 0, &VAR_23->sc_loc_win_r, &VAR_26,
     &VAR_23->sc_id_win_r)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_20;
  FUNC_0(1, "Found right GUI\n");
 }

 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_3, 0x00),
     VAR_21, 0, &VAR_23->sc_loc_events, &VAR_26,
     &VAR_23->sc_id_events)) {
  if (VAR_26 & VAR_0) {
   FUNC_0(1, "Ignoring keyboard event control\n");
  } else {
   VAR_23->sc_flags |= VAR_13;
   FUNC_0(1, "Found keyboard event array\n");
  }
 }


 VAR_23->sc_led_size = FUNC_3(VAR_24, VAR_25,
     VAR_22, ((void*)0));

 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_4, 0x01),
     VAR_22, 0, &VAR_23->sc_loc_numlock, &VAR_26,
     &VAR_23->sc_id_numlock)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_15;
  FUNC_0(1, "Found keyboard numlock\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_4, 0x02),
     VAR_22, 0, &VAR_23->sc_loc_capslock, &VAR_26,
     &VAR_23->sc_id_capslock)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_10;
  FUNC_0(1, "Found keyboard capslock\n");
 }
 if (FUNC_2(VAR_24, VAR_25,
     FUNC_1(VAR_4, 0x03),
     VAR_22, 0, &VAR_23->sc_loc_scrolllock, &VAR_26,
     &VAR_23->sc_id_scrolllock)) {
  if (VAR_26 & VAR_0)
   VAR_23->sc_flags |= VAR_16;
  FUNC_0(1, "Found keyboard scrolllock\n");
 }
}
