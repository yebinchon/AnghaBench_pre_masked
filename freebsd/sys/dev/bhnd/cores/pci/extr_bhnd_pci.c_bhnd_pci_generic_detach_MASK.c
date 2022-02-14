
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pci_softc {int mem_res; int mem_rid; } ;
typedef int device_t ;


 int FUNC_0 (struct bhnd_pci_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct bhnd_pci_softc* FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_1)
{
 struct bhnd_pci_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 if ((VAR_3 = FUNC_2(VAR_1)))
  return (VAR_3);

 FUNC_1(VAR_1, VAR_0, VAR_2->mem_rid, VAR_2->mem_res);

 FUNC_0(VAR_2);

 return (0);
}
