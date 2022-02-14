
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct vtpci_softc {int vtpci_dev; } ;
struct vtpci_interrupt {scalar_t__ vti_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct vtpci_softc*,int) ;
 int FUNC_2 (struct vtpci_softc*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct vtpci_softc *VAR_2, int VAR_3,
    struct vtpci_interrupt *VAR_4)
{
 device_t VAR_5;
 uint16_t VAR_6;

 VAR_5 = VAR_2->vtpci_dev;

 if (VAR_4 != ((void*)0)) {

  VAR_6 = VAR_4->vti_rid - 1;
 } else
  VAR_6 = VAR_1;

 FUNC_2(VAR_2, VAR_3, VAR_6);


 if (FUNC_1(VAR_2, VAR_3) != VAR_6) {
  FUNC_0(VAR_5,
      "insufficient host resources for MSIX interrupts\n");
  return (VAR_0);
 }

 return (0);
}
