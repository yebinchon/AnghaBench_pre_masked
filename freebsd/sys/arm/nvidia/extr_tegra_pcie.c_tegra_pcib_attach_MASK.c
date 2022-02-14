
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sc_range_mask; int sc_nrange; int sc_range; } ;
struct tegra_pcib_softc {struct tegra_pcib_port** ports; int intr_cookie; int * irq_res; TYPE_1__ ofw_pci; void* msi_irq_res; int dev; int bus_tag; int * cfg_mem_res; int cfg_base_addr; int * afi_mem_res; int * pads_mem_res; int mtx; } ;
struct tegra_pcib_port {scalar_t__ enabled; int cfg_handle; int rp_size; int rp_base_addr; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int,int ,int *,struct tegra_pcib_softc*,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,char*,int) ;
 struct tegra_pcib_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_10 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct tegra_pcib_softc*,int ,int ) ;
 int FUNC_14 (struct tegra_pcib_softc*) ;
 int FUNC_15 (struct tegra_pcib_softc*,int ) ;
 int FUNC_16 (struct tegra_pcib_softc*,int) ;
 int FUNC_17 (struct tegra_pcib_softc*,int) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_11)
{
 struct tegra_pcib_softc *VAR_12;
 phandle_t VAR_13;
 int VAR_14;
 int VAR_15;
 struct tegra_pcib_port *VAR_16;
 int VAR_17;

 VAR_12 = FUNC_5(VAR_11);
 VAR_12->dev = VAR_11;
 FUNC_7(&VAR_12->mtx, "msi_mtx", ((void*)0), VAR_3);

 VAR_13 = FUNC_8(VAR_11);

 VAR_14 = FUNC_15(VAR_12, VAR_13);
 if (VAR_14 != 0) {
  FUNC_6(VAR_11, "Cannot get FDT resources\n");
  return (VAR_14);
 }


 VAR_15 = 0;
 VAR_12->pads_mem_res = FUNC_0(VAR_11, VAR_8, &VAR_15,
     VAR_4);
 if (VAR_12->pads_mem_res == ((void*)0)) {
  FUNC_6(VAR_11, "Cannot allocate PADS register\n");
  VAR_14 = VAR_0;
  goto out;
 }




 VAR_12->bus_tag = FUNC_10(VAR_12->pads_mem_res);

 VAR_15 = 1;
 VAR_12->afi_mem_res = FUNC_0(VAR_11, VAR_8, &VAR_15,
     VAR_4);
 if (VAR_12->afi_mem_res == ((void*)0)) {
  FUNC_6(VAR_11, "Cannot allocate AFI register\n");
  VAR_14 = VAR_0;
  goto out;
 }

 VAR_15 = 2;
 VAR_12->cfg_mem_res = FUNC_0(VAR_11, VAR_8, &VAR_15,
     VAR_5);
 if (VAR_12->cfg_mem_res == ((void*)0)) {
  FUNC_6(VAR_11, "Cannot allocate config space memory\n");
  VAR_14 = VAR_0;
  goto out;
 }
 VAR_12->cfg_base_addr = FUNC_11(VAR_12->cfg_mem_res);



 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  if (VAR_12->ports[VAR_17] == ((void*)0))
   continue;
  VAR_16 = VAR_12->ports[VAR_17];
  VAR_14 = FUNC_3(VAR_12->bus_tag, VAR_16->rp_base_addr,
      VAR_16->rp_size, 0, &VAR_16->cfg_handle);
  if (VAR_14 != 0) {
   FUNC_6(VAR_12->dev, "Cannot allocate memory for "
       "port: %d\n", VAR_17);
   VAR_14 = VAR_0;
   goto out;
  }
 }




 VAR_15 = 0;
 VAR_12->irq_res = FUNC_0(VAR_11, VAR_7, &VAR_15,
     VAR_4 | VAR_6);
 if (VAR_12->irq_res == ((void*)0)) {
  FUNC_6(VAR_11, "Cannot allocate IRQ resources\n");
  VAR_14 = VAR_0;
  goto out;
 }

 VAR_15 = 1;
 VAR_12->msi_irq_res = FUNC_0(VAR_11, VAR_7, &VAR_15,
     VAR_4);
 if (VAR_12->irq_res == ((void*)0)) {
  FUNC_6(VAR_11, "Cannot allocate MSI IRQ resources\n");
  VAR_14 = VAR_0;
  goto out;
 }

 VAR_12->ofw_pci.sc_range_mask = 0x3;
 VAR_14 = FUNC_9(VAR_11);
 if (VAR_14 != 0)
  goto out;

 VAR_14 = FUNC_13(VAR_12, VAR_12->ofw_pci.sc_range,
     VAR_12->ofw_pci.sc_nrange);
 if (VAR_14 != 0)
  goto out;

 if (FUNC_2(VAR_11, VAR_12->irq_res, VAR_2 | VAR_1,
      VAR_10, ((void*)0), VAR_12, &VAR_12->intr_cookie)) {
  FUNC_6(VAR_11, "cannot setup interrupt handler\n");
  VAR_14 = VAR_0;
  goto out;
 }




 VAR_14 = FUNC_14(VAR_12);
 if (VAR_14 != 0)
  goto out;
 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  if (VAR_12->ports[VAR_17] == ((void*)0))
   continue;
  if (VAR_12->ports[VAR_17]->enabled)
   FUNC_17(VAR_12, VAR_17);
  else
   FUNC_16(VAR_12, VAR_17);
 }






 FUNC_4(VAR_11, "pci", -1);

 return (FUNC_1(VAR_11));

out:

 return (VAR_14);
}
