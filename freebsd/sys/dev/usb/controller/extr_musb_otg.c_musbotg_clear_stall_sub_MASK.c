
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct musbotg_softc {TYPE_1__* sc_hw_ep_profile; } ;
struct TYPE_2__ {int max_in_frame_size; int max_out_frame_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct musbotg_softc*,int ) ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct musbotg_softc*,int ,int) ;
 int FUNC_3 (struct musbotg_softc*,int ,int) ;

 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;



__attribute__((used)) static void
FUNC_4(struct musbotg_softc *VAR_23, uint16_t VAR_24,
    uint8_t VAR_25, uint8_t VAR_26, uint8_t VAR_27)
{
 uint16_t VAR_28;
 uint16_t VAR_29;
 uint8_t VAR_30;

 if (VAR_26 == VAR_21) {

  return;
 }

 FUNC_2(VAR_23, VAR_12, VAR_25);


 VAR_28 = VAR_24 & 0x7FF;
 switch ((VAR_24 >> 11) & 3) {
 case 1:
  VAR_28 *= 2;
  break;
 case 2:
  VAR_28 *= 3;
  break;
 default:
  break;
 }

 if (VAR_27 == VAR_22) {

  VAR_29 = 0;


  switch (VAR_26) {
  case 129:
   FUNC_3(VAR_23, VAR_20, VAR_24);
   FUNC_2(VAR_23, VAR_17,
       VAR_3 | VAR_29);
   break;
  case 128:
   FUNC_3(VAR_23, VAR_20, VAR_24);
   FUNC_2(VAR_23, VAR_17,
       VAR_3 |
       VAR_2 | VAR_29);
   break;
  case 130:
   FUNC_3(VAR_23, VAR_20, VAR_24);
   FUNC_2(VAR_23, VAR_17,
       VAR_3 | VAR_29);
   break;
  default:
   break;
  }


  VAR_30 = FUNC_0(VAR_23, VAR_18);
  if (VAR_30 & VAR_10) {
   FUNC_2(VAR_23, VAR_18,
       VAR_9);
   VAR_30 = FUNC_0(VAR_23, VAR_18);
   if (VAR_30 & VAR_10) {
    FUNC_2(VAR_23, VAR_18,
        VAR_9);
    VAR_30 = FUNC_0(VAR_23, VAR_18);
   }
  }

  FUNC_2(VAR_23, VAR_18,
      VAR_8);
  FUNC_2(VAR_23, VAR_18, 0);
  VAR_30 = FUNC_0(VAR_23, VAR_18);


  VAR_29 = FUNC_1(VAR_23, VAR_19);
  if (VAR_28 <= (VAR_23->sc_hw_ep_profile[VAR_25].
      max_in_frame_size / 2)) {

   VAR_29 &= ~(1 << VAR_25);
  } else {

   VAR_29 |= (1 << VAR_25);
  }
  FUNC_3(VAR_23, VAR_19, VAR_29);


  if (VAR_30 & VAR_11) {
   FUNC_2(VAR_23, VAR_18, 0);
   VAR_30 = FUNC_0(VAR_23, VAR_18);
  }
 } else {

  VAR_29 = 0;


  switch (VAR_26) {
  case 129:
   FUNC_3(VAR_23, VAR_16, VAR_24);
   FUNC_2(VAR_23, VAR_13,
       VAR_1 | VAR_29);
   break;
  case 128:
   FUNC_3(VAR_23, VAR_16, VAR_24);
   FUNC_2(VAR_23, VAR_13,
       VAR_1 |
       VAR_0 | VAR_29);
   break;
  case 130:
   FUNC_3(VAR_23, VAR_16, VAR_24);
   FUNC_2(VAR_23, VAR_13, VAR_29);
   break;
  default:
   break;
  }


  VAR_30 = FUNC_0(VAR_23, VAR_14);
  if (VAR_30 & VAR_6) {
   FUNC_2(VAR_23, VAR_14,
       VAR_5);
   VAR_30 = FUNC_0(VAR_23, VAR_14);
   if (VAR_30 & VAR_6) {
    FUNC_2(VAR_23, VAR_14,
        VAR_5);
    VAR_30 = FUNC_0(VAR_23, VAR_14);
   }
  }

  FUNC_2(VAR_23, VAR_14,
      VAR_4);
  FUNC_2(VAR_23, VAR_14, 0);
  VAR_30 = FUNC_0(VAR_23, VAR_14);


  VAR_29 = FUNC_1(VAR_23, VAR_15);
  if (VAR_28 <= (VAR_23->sc_hw_ep_profile[VAR_25].
      max_out_frame_size / 2)) {

   VAR_29 &= ~(1 << VAR_25);
  } else {

   VAR_29 |= (1 << VAR_25);
  }
  FUNC_3(VAR_23, VAR_15, VAR_29);


  if (VAR_30 & VAR_7) {
   FUNC_2(VAR_23, VAR_14, 0);
  }
 }
}
