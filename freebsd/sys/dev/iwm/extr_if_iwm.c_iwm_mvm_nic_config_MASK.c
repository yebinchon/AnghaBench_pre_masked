
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct iwm_softc {TYPE_1__* cfg; int sc_hw_rev; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct iwm_softc*,int ,char*,int,int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct iwm_softc*,int ,int) ;
 int FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (struct iwm_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct iwm_softc *VAR_23)
{
 uint8_t VAR_24, VAR_25, VAR_26;
 uint32_t VAR_27 = 0;
 uint32_t VAR_28 = FUNC_4(VAR_23);

 VAR_24 = (VAR_28 & VAR_21) >>
     VAR_22;
 VAR_25 = (VAR_28 & VAR_19) >>
     VAR_20;
 VAR_26 = (VAR_28 & VAR_17) >>
     VAR_18;


 VAR_27 |= FUNC_1(VAR_23->sc_hw_rev) <<
     VAR_11;
 VAR_27 |= FUNC_0(VAR_23->sc_hw_rev) <<
     VAR_10;


 VAR_27 |= VAR_24 << VAR_14;
 VAR_27 |= VAR_25 << VAR_13;
 VAR_27 |= VAR_26 << VAR_12;

 FUNC_3(VAR_23, VAR_2,
     VAR_5 |
     VAR_6 |
     VAR_8 |
     VAR_7 |
     VAR_9 |
     VAR_4 |
     VAR_3 |
     VAR_27);

 FUNC_2(VAR_23, VAR_15,
     "Radio type=0x%x-0x%x-0x%x\n", VAR_24,
     VAR_25, VAR_26);






 if (VAR_23->cfg->device_family == VAR_16) {
  FUNC_5(VAR_23, VAR_1,
      VAR_0,
      ~VAR_0);
 }
}
