
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dbi_res; } ;
struct pci_mv_softc {int intr_cookie; int * irq_res; int dev; int clk_reg; int clk_core; TYPE_1__ dw_sc; int node; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int,int ,int *,struct pci_mv_softc*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,int *) ;
 struct pci_mv_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pci_mv_softc*) ;
 int VAR_7 ;
 int FUNC_10 (struct pci_mv_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_8)
{
 struct pci_mv_softc *VAR_9;
 phandle_t VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_5(VAR_8);
 VAR_10 = FUNC_7(VAR_8);
 VAR_9->dev = VAR_8;
 VAR_9->node = VAR_10;

 VAR_12 = 0;
 VAR_9->dw_sc.dbi_res = FUNC_0(VAR_8, VAR_6, &VAR_12,
     VAR_3);
 if (VAR_9->dw_sc.dbi_res == ((void*)0)) {
  FUNC_6(VAR_8, "Cannot allocate DBI memory\n");
  VAR_11 = VAR_0;
  goto out;
 }


 VAR_12 = 0;
 VAR_9->irq_res = FUNC_0(VAR_8, VAR_5, &VAR_12,
     VAR_3 | VAR_4);
 if (VAR_9->irq_res == ((void*)0)) {
  FUNC_6(VAR_8, "Cannot allocate IRQ resources\n");
  VAR_11 = VAR_0;
  goto out;
 }


 VAR_11 = FUNC_4(VAR_9->dev, 0, "core", &VAR_9->clk_core);
 if (VAR_11 != 0) {
  FUNC_6(VAR_9->dev, "Cannot get 'core' clock\n");
  VAR_11 = VAR_0;
  goto out;
 }

 VAR_11 = FUNC_4(VAR_9->dev, 0, "reg", &VAR_9->clk_reg);
 if (VAR_11 != 0) {
  FUNC_6(VAR_9->dev, "Cannot get 'reg' clock\n");
  VAR_11 = VAR_0;
  goto out;
 }


 VAR_11 = FUNC_3(VAR_9->clk_core);
 if (VAR_11 != 0) {
  FUNC_6(VAR_9->dev, "Cannot enable 'core' clock\n");
  VAR_11 = VAR_0;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_9->clk_reg);
 if (VAR_11 != 0) {
  FUNC_6(VAR_9->dev, "Cannot enable 'reg' clock\n");
  VAR_11 = VAR_0;
  goto out;
 }

 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_8(VAR_8);
 if (VAR_11 != 0)
  goto out;

 FUNC_9(VAR_9);


 if (FUNC_2(VAR_8, VAR_9->irq_res, VAR_2 | VAR_1,
      VAR_7, ((void*)0), VAR_9, &VAR_9->intr_cookie)) {
  FUNC_6(VAR_8, "cannot setup interrupt handler\n");
  VAR_11 = VAR_0;
  goto out;
 }

 return (FUNC_1(VAR_8));
out:

 return (VAR_11);
}
