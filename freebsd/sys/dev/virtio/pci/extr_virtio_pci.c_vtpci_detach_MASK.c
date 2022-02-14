
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int * vtpci_res; int * vtpci_msix_res; int * vtpci_child_dev; } ;
typedef int * device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 struct vtpci_softc* FUNC_3 (int *) ;
 int FUNC_4 (struct vtpci_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct vtpci_softc *VAR_3;
 device_t VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_2);

 if ((VAR_4 = VAR_3->vtpci_child_dev) != ((void*)0)) {
  VAR_5 = FUNC_2(VAR_2, VAR_4);
  if (VAR_5)
   return (VAR_5);
  VAR_3->vtpci_child_dev = ((void*)0);
 }

 FUNC_4(VAR_3);

 if (VAR_3->vtpci_msix_res != ((void*)0)) {
  FUNC_1(VAR_2, VAR_1, FUNC_0(1),
      VAR_3->vtpci_msix_res);
  VAR_3->vtpci_msix_res = ((void*)0);
 }

 if (VAR_3->vtpci_res != ((void*)0)) {
  FUNC_1(VAR_2, VAR_0, FUNC_0(0),
      VAR_3->vtpci_res);
  VAR_3->vtpci_res = ((void*)0);
 }

 return (0);
}
