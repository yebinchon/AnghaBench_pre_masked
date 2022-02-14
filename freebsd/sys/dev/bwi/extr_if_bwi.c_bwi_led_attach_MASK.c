
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct bwi_softc {scalar_t__ sc_pci_subvid; int sc_mtx; int sc_led_blink_ch; int sc_led_idle; struct bwi_led* sc_blink_led; struct bwi_led* sc_leds; } ;
struct bwi_led {scalar_t__ l_act; int l_flags; int l_mask; } ;
struct TYPE_3__ {scalar_t__ vid; scalar_t__* led_act; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct bwi_softc*,int,char*,int,scalar_t__,int) ;
 void* FUNC_2 (int,int ) ;
 scalar_t__* VAR_18 ;
 int FUNC_3 (struct bwi_softc*,int ) ;
 TYPE_1__* VAR_19 ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct bwi_softc *VAR_20)
{
 const uint8_t *VAR_21 = ((void*)0);
 uint16_t VAR_22, VAR_23[VAR_11];
 int VAR_24;

 for (VAR_24 = 0; VAR_24 < FUNC_5(VAR_19); ++VAR_24) {
  if (VAR_20->sc_pci_subvid == VAR_19[VAR_24].vid) {
   VAR_21 = VAR_19[VAR_24].led_act;
   break;
  }
 }
 if (VAR_21 == ((void*)0))
  VAR_21 = VAR_18;

 VAR_22 = FUNC_3(VAR_20, VAR_12);
 VAR_23[0] = FUNC_2(VAR_22, VAR_14);
 VAR_23[1] = FUNC_2(VAR_22, VAR_15);

 VAR_22 = FUNC_3(VAR_20, VAR_13);
 VAR_23[2] = FUNC_2(VAR_22, VAR_16);
 VAR_23[3] = FUNC_2(VAR_22, VAR_17);

 for (VAR_24 = 0; VAR_24 < VAR_11; ++VAR_24) {
  struct bwi_led *VAR_25 = &VAR_20->sc_leds[VAR_24];

  if (VAR_23[VAR_24] == 0xff) {
   VAR_25->l_act = VAR_21[VAR_24];
  } else {
   if (VAR_23[VAR_24] & VAR_5)
    VAR_25->l_flags |= VAR_7;
   VAR_25->l_act = FUNC_2(VAR_23[VAR_24], VAR_6);
  }
  VAR_25->l_mask = (1 << VAR_24);

  if (VAR_25->l_act == VAR_4 ||
      VAR_25->l_act == VAR_3 ||
      VAR_25->l_act == VAR_2) {
   VAR_25->l_flags |= VAR_8;
   if (VAR_25->l_act == VAR_3)
    VAR_25->l_flags |= VAR_9;
   else if (VAR_25->l_act == VAR_4)
    VAR_25->l_flags |= VAR_10;

   if (VAR_20->sc_blink_led == ((void*)0)) {
    VAR_20->sc_blink_led = VAR_25;
    if (VAR_25->l_flags & VAR_10)
     FUNC_0(VAR_20->sc_led_idle);
   }
  }

  FUNC_1(VAR_20, VAR_1 | VAR_0,
   "%dth led, act %d, lowact %d\n", VAR_24,
   VAR_25->l_act, VAR_25->l_flags & VAR_7);
 }
 FUNC_4(&VAR_20->sc_led_blink_ch, &VAR_20->sc_mtx, 0);
}
