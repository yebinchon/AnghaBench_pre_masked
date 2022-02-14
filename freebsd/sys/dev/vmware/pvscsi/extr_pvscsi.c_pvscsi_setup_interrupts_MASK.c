
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int use_msi_or_msix; int irq_id; int dev; int irq_handler; int * irq_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct pvscsi_softc*,int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct pvscsi_softc*) ;
 int FUNC_9 (struct pvscsi_softc*,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(struct pvscsi_softc *VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_9->use_msi_or_msix = 0;

 VAR_12 = FUNC_9(VAR_9, "use_msix", VAR_8);
 VAR_13 = FUNC_9(VAR_9, "use_msi", VAR_7);

 if (VAR_12 && FUNC_6(VAR_9->dev) > 0) {
  VAR_14 = 1;
  if (FUNC_4(VAR_9->dev, &VAR_14) == 0 && VAR_14 == 1) {
   VAR_9->use_msi_or_msix = 1;
   FUNC_2(VAR_9->dev, "Interrupt: MSI-X\n");
  } else {
   FUNC_7(VAR_9->dev);
  }
 }

 if (VAR_9->use_msi_or_msix == 0 && VAR_13 && FUNC_5(VAR_9->dev) > 0) {
  VAR_14 = 1;
  if (FUNC_3(VAR_9->dev, &VAR_14) == 0 && VAR_14 == 1) {
   VAR_9->use_msi_or_msix = 1;
   FUNC_2(VAR_9->dev, "Interrupt: MSI\n");
  } else {
   FUNC_7(VAR_9->dev);
  }
 }

 VAR_11 = VAR_3;
 if (VAR_9->use_msi_or_msix) {
  VAR_9->irq_id = 1;
 } else {
  FUNC_2(VAR_9->dev, "Interrupt: INT\n");
  VAR_9->irq_id = 0;
  VAR_11 |= VAR_4;
 }

 VAR_9->irq_res = FUNC_0(VAR_9->dev, VAR_5, &VAR_9->irq_id,
     VAR_11);
 if (VAR_9->irq_res == ((void*)0)) {
  FUNC_2(VAR_9->dev, "IRQ allocation failed\n");
  if (VAR_9->use_msi_or_msix) {
   FUNC_7(VAR_9->dev);
  }
  return (VAR_0);
 }

 VAR_10 = FUNC_1(VAR_9->dev, VAR_9->irq_res,
     VAR_2 | VAR_1, ((void*)0), VAR_6, VAR_9,
     &VAR_9->irq_handler);
 if (VAR_10) {
  FUNC_2(VAR_9->dev, "IRQ handler setup failed\n");
  FUNC_8(VAR_9);
  return (VAR_10);
 }

 return (0);
}
