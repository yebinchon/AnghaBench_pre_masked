
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int bdev; } ;
struct atmegadci_softc {TYPE_1__ sc_bus; } ;


 scalar_t__ FUNC_0 (struct atmegadci_softc*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (struct atmegadci_softc*,int ,scalar_t__) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct atmegadci_softc *VAR_21, uint8_t VAR_22,
    uint8_t VAR_23, uint8_t VAR_24)
{
 uint8_t VAR_25;

 if (VAR_23 == VAR_18) {

  return;
 }

 FUNC_3(VAR_21, VAR_13, VAR_22);


 FUNC_3(VAR_21, VAR_14, FUNC_2(VAR_22));


 FUNC_3(VAR_21, VAR_14, 0);


 FUNC_3(VAR_21, VAR_8,
     VAR_9 |
     VAR_11);


 FUNC_3(VAR_21, VAR_8,
     VAR_9 |
     VAR_10);


 FUNC_3(VAR_21, VAR_8,
     VAR_9 |
     VAR_12);

 do {
  if (VAR_23 == VAR_17) {
   VAR_25 = VAR_3;
  } else if (VAR_23 == VAR_20) {
   VAR_25 = VAR_4;
  } else {
   VAR_25 = VAR_2;
  }
  if (VAR_24 & VAR_19) {
   VAR_25 |= VAR_1;
  }

  FUNC_3(VAR_21, VAR_0, VAR_25);
  FUNC_3(VAR_21, VAR_5,
      VAR_6 |
      VAR_7 |
      FUNC_1(3));

  VAR_25 = FUNC_0(VAR_21, VAR_15);
  if (!(VAR_25 & VAR_16)) {
   FUNC_4(VAR_21->sc_bus.bdev,
       "Chip rejected configuration\n");
  }
 } while (0);
}
