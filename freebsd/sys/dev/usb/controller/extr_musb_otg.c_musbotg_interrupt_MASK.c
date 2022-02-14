
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int status_bus_reset; int status_suspend; int change_suspend; int change_connect; int status_high_speed; } ;
struct musbotg_softc {scalar_t__ sc_mode; int sc_bus; TYPE_1__ sc_flags; } ;


 int FUNC_0 (int,char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int FUNC_2 (struct musbotg_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct musbotg_softc*,int ,int) ;
 int FUNC_4 (struct musbotg_softc*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct musbotg_softc*) ;
 int FUNC_8 (struct musbotg_softc*) ;

void
FUNC_9(struct musbotg_softc *VAR_17,
    uint16_t VAR_18, uint16_t VAR_19, uint8_t VAR_20)
{
 uint16_t VAR_21;
 uint16_t VAR_22;
 uint8_t VAR_23;
 uint8_t VAR_24;
 uint8_t VAR_25 = 2;

 FUNC_5(&VAR_17->sc_bus);

repeat:


 VAR_23 = FUNC_1(VAR_17, VAR_14);


 VAR_21 = FUNC_2(VAR_17, VAR_10);
 VAR_22 = FUNC_2(VAR_17, VAR_12);
 VAR_21 |= VAR_18;
 VAR_22 |= VAR_19;
 VAR_23 |= VAR_20;


 VAR_18 = 0;
 VAR_19 = 0;
 VAR_20 = 0;



 if (VAR_23 & (VAR_4 |
     VAR_5 | VAR_6 |
     VAR_2 | VAR_3 |
     VAR_7)) {

  FUNC_0(4, "real bus interrupt 0x%08x\n", VAR_23);

  if (VAR_23 & VAR_4) {


   VAR_17->sc_flags.status_bus_reset = 1;
   VAR_17->sc_flags.status_suspend = 0;
   VAR_17->sc_flags.change_suspend = 0;
   VAR_17->sc_flags.change_connect = 1;


   VAR_24 = FUNC_1(VAR_17, VAR_16);
   if (VAR_24 & VAR_1)
    VAR_17->sc_flags.status_high_speed = 1;
   else
    VAR_17->sc_flags.status_high_speed = 0;





   VAR_24 = VAR_4;

   VAR_24 &= ~VAR_5;

   VAR_24 |= VAR_6;
   FUNC_3(VAR_17, VAR_15, VAR_24);

   FUNC_4(VAR_17, VAR_13, 0);
   FUNC_4(VAR_17, VAR_11, 0);
  }





  if (VAR_23 & VAR_5) {
   if (VAR_17->sc_flags.status_suspend) {
    VAR_17->sc_flags.status_suspend = 0;
    VAR_17->sc_flags.change_suspend = 1;

    VAR_24 = FUNC_1(VAR_17, VAR_15);

    VAR_24 &= ~VAR_5;

    VAR_24 |= VAR_6;
    FUNC_3(VAR_17, VAR_15, VAR_24);
   }
  } else if (VAR_23 & VAR_6) {
   if (!VAR_17->sc_flags.status_suspend) {
    VAR_17->sc_flags.status_suspend = 1;
    VAR_17->sc_flags.change_suspend = 1;

    VAR_24 = FUNC_1(VAR_17, VAR_15);

    VAR_24 &= ~VAR_6;

    VAR_24 |= VAR_5;
    FUNC_3(VAR_17, VAR_15, VAR_24);
   }
  }
  if (VAR_23 &
      (VAR_2 | VAR_3))
   VAR_17->sc_flags.change_connect = 1;





  if (VAR_17->sc_mode == VAR_0) {

      if (VAR_23 & VAR_7) {
   VAR_24 = FUNC_1(VAR_17, VAR_9);
   VAR_24 |= VAR_8;
   FUNC_3(VAR_17, VAR_9, VAR_24);
      }
      if (VAR_23 & VAR_2)
   VAR_17->sc_flags.status_bus_reset = 1;
      if (VAR_23 & VAR_3)
   VAR_17->sc_flags.status_bus_reset = 0;
  }


  FUNC_8(VAR_17);
 }


 if (VAR_21 || VAR_22) {
  FUNC_0(4, "real endpoint interrupt "
      "rx=0x%04x, tx=0x%04x\n", VAR_21, VAR_22);
 }


 FUNC_7(VAR_17);

 if (--VAR_25)
  goto repeat;

 FUNC_6(&VAR_17->sc_bus);
}
