
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fwohci_softc_t ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 fwohci_softc_t *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_2(VAR_0, "fwohci_pci_suspend\n");
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;
 FUNC_3(VAR_1, VAR_0);
 return 0;
}
