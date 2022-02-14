
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct alc_softc {int alc_rev; int alc_flags; TYPE_1__* alc_ifp; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int) ;
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
 int VAR_22 ;

__attribute__((used)) static void
FUNC_3(struct alc_softc *VAR_23, int VAR_24)
{
 uint32_t VAR_25;

 VAR_25 = FUNC_1(VAR_23, VAR_1);
 VAR_25 &= ~VAR_9;
 VAR_25 |= VAR_8;
 VAR_25 &= ~VAR_15;
 VAR_25 |= VAR_14;
 VAR_25 &= ~VAR_11;
 VAR_25 |= VAR_10;
 VAR_25 |= VAR_20 | VAR_6 | VAR_13;
 VAR_25 &= ~(VAR_16 | VAR_22 |
     VAR_5 | VAR_4 |
     VAR_19 | VAR_21 |
     VAR_18 | VAR_17 |
     VAR_12 | VAR_7);
 if (FUNC_0(VAR_23->alc_rev) <= VAR_2 &&
     (VAR_23->alc_rev & 0x01) != 0)
  VAR_25 |= VAR_19 | VAR_21;
 if ((VAR_23->alc_flags & VAR_0) != 0) {

  VAR_25 |= VAR_4 | VAR_5 |
      VAR_12;
 } else {
  if (VAR_24 != 0)
   VAR_25 |= VAR_4 | VAR_5 |
       VAR_12;
  else if ((VAR_23->alc_ifp->if_drv_flags & VAR_3) != 0)
   VAR_25 |= VAR_5 | VAR_12;
 }
 FUNC_2(VAR_23, VAR_1, VAR_25);
}
