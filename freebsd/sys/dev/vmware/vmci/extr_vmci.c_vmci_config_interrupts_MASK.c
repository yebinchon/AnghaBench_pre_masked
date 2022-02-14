
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_softc {int capabilities; int vmci_ioh0; int vmci_iot0; int vmci_intr_type; } ;


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
 int FUNC_0 (int ,int ,int ,int) ;
 int * VAR_13 ;
 int VAR_14 ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct vmci_softc*) ;

__attribute__((used)) static int
FUNC_3(struct vmci_softc *VAR_15)
{
 int VAR_16;

 VAR_13 = FUNC_1(VAR_14, VAR_1, VAR_3 | VAR_2);
 if (VAR_13 == ((void*)0))
  return (VAR_0);

 VAR_15->vmci_intr_type = VAR_12;
 VAR_16 = FUNC_2(VAR_15);
 if (VAR_16) {
  VAR_15->vmci_intr_type = VAR_11;
  VAR_16 = FUNC_2(VAR_15);
 }
 if (VAR_16) {
  VAR_15->vmci_intr_type = VAR_10;
  VAR_16 = FUNC_2(VAR_15);
 }
 if (VAR_16)
  return (VAR_16);


 if (VAR_15->capabilities & VAR_4)
  FUNC_0(VAR_15->vmci_iot0, VAR_15->vmci_ioh0,
      VAR_7, VAR_8 | VAR_9);
 else
  FUNC_0(VAR_15->vmci_iot0, VAR_15->vmci_ioh0,
      VAR_7, VAR_8);


 FUNC_0(VAR_15->vmci_iot0, VAR_15->vmci_ioh0,
     VAR_5, VAR_6);

 return (0);
}
