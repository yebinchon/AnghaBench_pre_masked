
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int r_rid; int numirqs; int * r_mem; scalar_t__ ccc; scalar_t__ msi; } ;
struct tegra_ahci_sc {int * sata_mem; int dev; struct ahci_controller ctlr; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 struct tegra_ahci_sc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct tegra_ahci_sc*) ;
 int FUNC_6 (struct tegra_ahci_sc*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct tegra_ahci_sc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 struct tegra_ahci_sc *VAR_4;
 struct ahci_controller *VAR_5;
 phandle_t VAR_6;
 int VAR_7, VAR_8;

 VAR_4 = FUNC_3(VAR_3);
 VAR_4->dev = VAR_3;
 VAR_5 = &VAR_4->ctlr;
 VAR_6 = FUNC_7(VAR_3);

 VAR_5->r_rid = 0;
 VAR_5->r_mem = FUNC_1(VAR_3, VAR_2,
     &VAR_5->r_rid, VAR_1);
 if (VAR_5->r_mem == ((void*)0))
  return (VAR_0);

 VAR_8 = 1;
 VAR_4->sata_mem = FUNC_1(VAR_3, VAR_2,
     &VAR_8, VAR_1);
 if (VAR_4->sata_mem == ((void*)0)) {
  VAR_7 = VAR_0;
  goto fail;
 }
 VAR_7 = FUNC_6(VAR_4, VAR_6);
 if (VAR_7 != 0) {
  FUNC_4(VAR_4->dev, "Failed to allocate FDT resource(s)\n");
  goto fail;
 }

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7 != 0) {
  FUNC_4(VAR_4->dev, "Failed to enable FDT resource(s)\n");
  goto fail;
 }
 VAR_7 = FUNC_9(VAR_4);
 if (VAR_7 != 0) {
  FUNC_4(VAR_4->dev, "Failed to initialize controller)\n");
  goto fail;
 }


 VAR_5->msi = 0;
 VAR_5->numirqs = 1;
 VAR_5->ccc = 0;


 VAR_7 = FUNC_8(VAR_3);
 if (VAR_7 != 0)
  goto fail;
 VAR_7 = FUNC_0(VAR_3);
 return (VAR_7);

fail:

 if (VAR_4->sata_mem != ((void*)0))
  FUNC_2(VAR_3, VAR_2, 1, VAR_4->sata_mem);
 if (VAR_5->r_mem != ((void*)0))
  FUNC_2(VAR_3, VAR_2, VAR_5->r_rid,
      VAR_5->r_mem);
 return (VAR_7);
}
