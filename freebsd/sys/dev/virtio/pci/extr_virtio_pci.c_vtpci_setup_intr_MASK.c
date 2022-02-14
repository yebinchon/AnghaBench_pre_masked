
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int vtpci_flags; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct vtpci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct vtpci_softc*) ;
 int FUNC_3 (struct vtpci_softc*) ;
 int FUNC_4 (struct vtpci_softc*) ;
 int FUNC_5 (struct vtpci_softc*) ;
 int FUNC_6 (struct vtpci_softc*) ;
 scalar_t__ FUNC_7 (struct vtpci_softc*,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, enum intr_type VAR_6)
{
 struct vtpci_softc *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_5);

 for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {




  switch (VAR_8) {
  case 0:
   VAR_9 = FUNC_4(VAR_7);
   break;
  case 1:
   VAR_9 = FUNC_5(VAR_7);
   break;
  case 2:
   VAR_9 = FUNC_3(VAR_7);
   break;
  case 3:
   VAR_9 = FUNC_2(VAR_7);
   break;
  default:
   FUNC_1(VAR_5,
       "exhausted all interrupt allocation attempts\n");
   return (VAR_0);
  }

  if (VAR_9 == 0 && FUNC_7(VAR_7, VAR_6) == 0)
   break;

  FUNC_6(VAR_7);
 }

 if (VAR_4) {
  if (VAR_7->vtpci_flags & VAR_1)
   FUNC_1(VAR_5, "using legacy interrupt\n");
  else if (VAR_7->vtpci_flags & VAR_2)
   FUNC_1(VAR_5, "using MSI interrupt\n");
  else if (VAR_7->vtpci_flags & VAR_3)
   FUNC_1(VAR_5, "using shared MSIX interrupts\n");
  else
   FUNC_1(VAR_5, "using per VQ MSIX interrupts\n");
 }

 return (0);
}
