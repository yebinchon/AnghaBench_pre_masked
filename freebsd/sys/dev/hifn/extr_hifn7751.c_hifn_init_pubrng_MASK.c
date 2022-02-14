
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct hifn_softc {int sc_flags; int sc_rngfirst; int sc_rnghz; int sc_dmaier; TYPE_1__* sc_pkdev; int sc_rngto; int sc_dev; void* sc_harvest; scalar_t__ sc_rndtest; } ;
struct TYPE_2__ {struct hifn_softc* si_drv1; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (struct hifn_softc*,int ) ;
 int VAR_16 ;
 int FUNC_2 (struct hifn_softc*,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ,struct hifn_softc*) ;
 void* VAR_17 ;
 int FUNC_5 (int ,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_1__* FUNC_6 (int *,int ,int ,int ,int,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 void* VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int
FUNC_8(struct hifn_softc *VAR_22)
{
 u_int32_t VAR_23;
 int VAR_24;
 VAR_22->sc_harvest = VAR_17;

 if ((VAR_22->sc_flags & VAR_12) == 0) {

  FUNC_2(VAR_22, VAR_5,
      FUNC_1(VAR_22, VAR_5) | VAR_14);

  for (VAR_24 = 0; VAR_24 < 100; VAR_24++) {
   FUNC_0(1000);
   if ((FUNC_1(VAR_22, VAR_5) &
       VAR_14) == 0)
    break;
  }

  if (VAR_24 == 100) {
   FUNC_5(VAR_22->sc_dev, "public key init failed\n");
   return (1);
  }
 }


 if (VAR_22->sc_flags & VAR_11) {
  if (VAR_22->sc_flags & VAR_12) {
   VAR_23 = FUNC_1(VAR_22, VAR_2);
   if (VAR_23 & VAR_8) {
    VAR_23 &= ~VAR_8;
    FUNC_2(VAR_22, VAR_2, VAR_23);
   }
   FUNC_2(VAR_22, VAR_1,
       VAR_7);
   VAR_23 |= VAR_8;
   FUNC_2(VAR_22, VAR_2, VAR_23);
  } else
   FUNC_2(VAR_22, VAR_6,
       FUNC_1(VAR_22, VAR_6) |
       VAR_15);

  VAR_22->sc_rngfirst = 1;
  if (VAR_19 >= 100)
   VAR_22->sc_rnghz = VAR_19 / 100;
  else
   VAR_22->sc_rnghz = 1;
  FUNC_3(&VAR_22->sc_rngto, 1);
  FUNC_4(&VAR_22->sc_rngto, VAR_22->sc_rnghz, VAR_18, VAR_22);
 }


 if (VAR_22->sc_flags & VAR_10) {
  FUNC_2(VAR_22, VAR_4, VAR_13);
  VAR_22->sc_dmaier |= VAR_9;
  FUNC_2(VAR_22, VAR_3, VAR_22->sc_dmaier);






 }

 return (0);
}
