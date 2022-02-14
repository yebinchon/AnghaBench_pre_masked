
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_softc {int device; } ;
typedef int device_t ;


 struct isci_softc* FUNC_0 (int ) ;
 struct isci_softc* VAR_0 ;
 int FUNC_1 (struct isci_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct isci_softc*) ;
 int FUNC_4 (struct isci_softc*) ;
 int FUNC_5 (struct isci_softc*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 int VAR_2;
 struct isci_softc *VAR_3 = FUNC_0(VAR_1);

 VAR_0 = VAR_3;
 VAR_3->device = VAR_1;
 FUNC_6(VAR_1);

 FUNC_1(VAR_3);

 VAR_2 = FUNC_3(VAR_3);

 if (VAR_2)
 {
  FUNC_2(VAR_1);
  return (VAR_2);
 }

 FUNC_4(VAR_3);
 FUNC_5(VAR_3);

 return (0);
}
