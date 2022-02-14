
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct pci_dw_softc {int dev; int * dbi_res; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 struct pci_dw_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_0, u_int VAR_1, uint32_t VAR_2, int VAR_3)
{
 struct pci_dw_softc *VAR_4;

 VAR_4 = FUNC_4(VAR_0);
 FUNC_0(VAR_4->dbi_res != ((void*)0));

 switch (VAR_3) {
 case 4:
  FUNC_3(VAR_4->dbi_res, VAR_1, VAR_2);
  break;
 case 2:
  FUNC_2(VAR_4->dbi_res, VAR_1, VAR_2);
  break;
 case 1:
  FUNC_1(VAR_4->dbi_res, VAR_1, VAR_2);
  break;
 default:
  FUNC_5(VAR_4->dev, "Unsupported width: %d\n", VAR_3);
  break;
 }
}
