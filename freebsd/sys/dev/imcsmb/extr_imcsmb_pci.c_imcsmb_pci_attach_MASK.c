
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imcsmb_pci_softc {scalar_t__ semaphore; int * dev; } ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,int) ;
 struct imcsmb_pci_softc* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int *) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct imcsmb_pci_softc *VAR_3;
 device_t VAR_4;
 int VAR_5;
 int VAR_6;


 VAR_3 = FUNC_2(VAR_2);
 VAR_3->dev = VAR_2;
 VAR_3->semaphore = 0;


 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_4 = FUNC_1(VAR_2, "imcsmb", -1);
  if (VAR_4 == ((void*)0)) {

   FUNC_3(VAR_2, "Child imcsmb not added\n");
   VAR_5 = VAR_0;
   goto out;
  }



  FUNC_4(VAR_4, &VAR_1[VAR_6]);
 }


 if ((VAR_5 = FUNC_0(VAR_2)) != 0) {
  FUNC_3(VAR_2, "failed to attach children: %d\n", VAR_5);
  goto out;
 }

out:
 return (VAR_5);
}
