
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psci_softc {int psci_version; int * psci_fnids; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,struct psci_softc*,int ) ;
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
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_21 ;
 int FUNC_3 (struct psci_softc*) ;
 scalar_t__ VAR_22 ;
 struct psci_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int,int) ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_25, int VAR_26)
{
 struct psci_softc *VAR_27 = FUNC_4(VAR_25);
 int VAR_28;


 VAR_27->psci_fnids[VAR_19] = VAR_9;
 VAR_27->psci_fnids[VAR_13] = VAR_3;
 VAR_27->psci_fnids[VAR_11] = VAR_1;
 VAR_27->psci_fnids[VAR_12] = VAR_2;
 VAR_27->psci_fnids[VAR_10] = VAR_0;
 VAR_27->psci_fnids[VAR_14] = VAR_4;
 VAR_27->psci_fnids[VAR_15] = VAR_5;
 VAR_27->psci_fnids[VAR_16] = VAR_6;
 VAR_27->psci_fnids[VAR_17] = VAR_7;
 VAR_27->psci_fnids[VAR_18] = VAR_8;

 VAR_28 = FUNC_3(VAR_27);






 if (VAR_28 == VAR_20) {
  if (VAR_26 == VAR_20)
   return (1);

  VAR_28 = VAR_26;
  FUNC_6("PSCI get_version() function is not implemented, "
      " assuming v%d.%d\n", FUNC_1(VAR_28),
      FUNC_2(VAR_28));
 }

 VAR_27->psci_version = VAR_28;
 if ((FUNC_1(VAR_28) == 0 && FUNC_2(VAR_28) == 2) ||
     FUNC_1(VAR_28) == 1) {
  if (VAR_22)
   FUNC_5(VAR_25, "PSCI version 0.2 compatible\n");





  FUNC_0(VAR_24, VAR_23, VAR_27,
      VAR_21);

  return (0);
 }

 FUNC_5(VAR_25, "PSCI version number mismatched with DT\n");
 return (1);
}
