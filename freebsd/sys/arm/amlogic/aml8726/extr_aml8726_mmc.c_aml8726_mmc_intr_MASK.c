
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aml8726_mmc_softc {int port; TYPE_1__* cmd; } ;
struct TYPE_2__ {int* resp; } ;


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
 int FUNC_0 (struct aml8726_mmc_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct aml8726_mmc_softc*) ;
 int FUNC_2 (struct aml8726_mmc_softc*,int ) ;
 int FUNC_3 (struct aml8726_mmc_softc*,int ) ;
 int FUNC_4 (struct aml8726_mmc_softc*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct aml8726_mmc_softc*,int) ;
 int FUNC_6 (struct aml8726_mmc_softc*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(void *VAR_19)
{
 struct aml8726_mmc_softc *VAR_20 = (struct aml8726_mmc_softc *)VAR_19;
 uint32_t VAR_21;
 uint32_t VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 int VAR_26;
 unsigned int VAR_27;

 FUNC_0(VAR_20);

 VAR_22 = FUNC_3(VAR_20, VAR_11);
 VAR_21 = FUNC_3(VAR_20, VAR_6);

 if (VAR_20->cmd == ((void*)0))
  goto spurious;

 VAR_26 = VAR_18;

 if ((VAR_22 & VAR_9) != 0) {

  if ((VAR_21 & VAR_5) == 0 &&
      (VAR_22 & VAR_12) == 0)
   VAR_26 = VAR_16;
  if ((VAR_21 & VAR_4) != 0 &&
      (VAR_22 & VAR_10) == 0)
   VAR_26 = VAR_16;
  if ((VAR_21 & VAR_1) != 0 &&
      (VAR_22 & VAR_13) == 0)
   VAR_26 = VAR_16;
 } else {
spurious:







  FUNC_4(VAR_20, VAR_11,
      (VAR_7 & VAR_22));
  FUNC_2(VAR_20, VAR_11);
  FUNC_1(VAR_20);
  return;
 }

 if ((VAR_21 & VAR_2) != 0) {
  VAR_23 = VAR_20->port;
  VAR_23 |= VAR_15;
  FUNC_4(VAR_20, VAR_14, VAR_23);

  if ((VAR_21 & VAR_3) != 0) {
   VAR_24 = 0;

   for (VAR_27 = 0; VAR_27 < 4; VAR_27++) {
    VAR_25 = FUNC_3(VAR_20, VAR_0);
    VAR_20->cmd->resp[3 - VAR_27] = (VAR_25 << 8) |
        VAR_24;
    VAR_24 = (VAR_25 >> 24) & 0xff;
   }
  } else
   VAR_20->cmd->resp[0] = FUNC_3(VAR_20,
       VAR_0);
 }

 if ((VAR_22 & VAR_8) != 0 &&




     (VAR_22 & VAR_9) == 0) {
  if (VAR_26 == VAR_18)
   VAR_26 = VAR_17;
  FUNC_6(VAR_20, 0);

  while ((FUNC_3(VAR_20, VAR_11) &
      VAR_8) != 0)
   FUNC_7();
 }

 FUNC_5(VAR_20, VAR_26);
}
