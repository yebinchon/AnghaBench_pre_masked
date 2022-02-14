
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct pci_dw_softc {int dev; int * dbi_res; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 struct pci_dw_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static uint32_t
FUNC_6(device_t VAR_0, u_int VAR_1, int VAR_2)
{
 struct pci_dw_softc *VAR_3;

 VAR_3 = FUNC_4(VAR_0);
 FUNC_0(VAR_3->dbi_res != ((void*)0));

 switch (VAR_2) {
 case 4:
  return (FUNC_3(VAR_3->dbi_res, VAR_1));
 case 2:
  return (FUNC_2(VAR_3->dbi_res, VAR_1));
 case 1:
  return (FUNC_1(VAR_3->dbi_res, VAR_1));
 default:
  FUNC_5(VAR_3->dev, "Unsupported width: %d\n", VAR_2);
  return (0xFFFFFFFF);
 }
}
