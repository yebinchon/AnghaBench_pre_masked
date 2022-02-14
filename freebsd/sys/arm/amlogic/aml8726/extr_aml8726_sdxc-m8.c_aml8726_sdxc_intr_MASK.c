
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int error; } ;
struct aml8726_sdxc_softc {int ch; TYPE_2__ busy; TYPE_1__* cmd; } ;
struct TYPE_3__ {int* resp; int flags; } ;


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
 int FUNC_0 (struct aml8726_sdxc_softc*) ;
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
 int VAR_23 ;
 int FUNC_1 (struct aml8726_sdxc_softc*) ;
 int FUNC_2 (struct aml8726_sdxc_softc*,int ) ;
 int FUNC_3 (struct aml8726_sdxc_softc*,int ) ;
 int FUNC_4 (struct aml8726_sdxc_softc*,int ,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_5 (struct aml8726_sdxc_softc*) ;
 int FUNC_6 (struct aml8726_sdxc_softc*,int) ;
 int FUNC_7 (struct aml8726_sdxc_softc*) ;
 int FUNC_8 (int *,int ,int ,struct aml8726_sdxc_softc*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(void *VAR_32)
{
 struct aml8726_sdxc_softc *VAR_33 = (struct aml8726_sdxc_softc *)VAR_32;
 uint32_t VAR_34;
 uint32_t VAR_35;
 uint32_t VAR_36;
 uint32_t VAR_37;
 int VAR_38;
 int VAR_39;
 int VAR_40;
 int VAR_41;

 FUNC_0(VAR_33);

 VAR_34 = FUNC_3(VAR_33, VAR_8);
 VAR_36 = FUNC_3(VAR_33, VAR_19);
 VAR_37 = FUNC_3(VAR_33, VAR_23);

 if (VAR_33->cmd == ((void*)0))
  goto spurious;

 VAR_39 = VAR_27;

 if ((VAR_34 & (VAR_12 |
     VAR_10)) != 0)
  VAR_39 = VAR_26;
 else if ((VAR_34 & (VAR_2 |
     VAR_4)) != 0)
  VAR_39 = VAR_24;
 else if ((VAR_34 & (VAR_3 |
     VAR_5)) != 0)
  VAR_39 = VAR_28;
 else if ((VAR_34 & (VAR_9 |
     VAR_7 |
     VAR_11)) != 0) {
  ;
 }
 else {
spurious:






  FUNC_4(VAR_33, VAR_8,
      (VAR_6 & VAR_34));
  FUNC_2(VAR_33, VAR_8);
  FUNC_1(VAR_33);
  return;
 }

 FUNC_5(VAR_33);

 if ((VAR_36 & VAR_17) != 0) {
  VAR_40 = 0;
  VAR_41 = 1;
  if ((VAR_36 & VAR_20) != 0) {
   VAR_40 = 1;
   VAR_41 = VAR_40 + 4;
  }
  for (VAR_38 = VAR_40; VAR_38 < VAR_41; VAR_38++) {
   VAR_35 = FUNC_3(VAR_33, VAR_14);
   VAR_35 &= ~(VAR_13 |
       VAR_15);
   VAR_35 |= VAR_38 << VAR_16;
   FUNC_4(VAR_33, VAR_14, VAR_35);
   VAR_33->cmd->resp[(VAR_41 - 1) - VAR_38] = FUNC_3(VAR_33,
       VAR_1);
  }
 }

 if ((VAR_37 & VAR_21) != 0 &&




     (VAR_34 & (VAR_7 |
     VAR_11)) == 0) {
  if (VAR_39 == VAR_27)
   VAR_39 = VAR_25;
  FUNC_7(VAR_33);

  while ((FUNC_3(VAR_33, VAR_23) &
      VAR_21) != 0)
   FUNC_9();
 }







 if (((VAR_33->cmd->flags & VAR_29) != 0 ||
     (VAR_36 & VAR_18) == VAR_30) &&
     (VAR_37 & VAR_22) == 0) {
  VAR_33->busy.error = VAR_39;
  FUNC_8(&VAR_33->ch,
      FUNC_10(VAR_0),
      VAR_31, VAR_33);
  FUNC_4(VAR_33, VAR_8,
      (VAR_6 & VAR_34));
  FUNC_2(VAR_33, VAR_8);
  FUNC_1(VAR_33);
  return;
 }

 FUNC_6(VAR_33, VAR_39);
}
