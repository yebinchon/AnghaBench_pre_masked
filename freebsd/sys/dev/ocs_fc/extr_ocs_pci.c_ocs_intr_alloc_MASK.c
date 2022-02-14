
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vec; int name; struct ocs_softc* softc; } ;
struct ocs_softc {int n_vec; int irqid; TYPE_1__ intr_ctx; int dev; int * irq; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int*,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int,char*,char*,int) ;

__attribute__((used)) static int32_t
FUNC_6(struct ocs_softc *VAR_3)
{

 VAR_3->n_vec = 1;
 if (FUNC_4(VAR_3->dev, &VAR_3->n_vec)) {
  FUNC_2(VAR_3->dev, "MSI-X allocation failed\n");
  if (FUNC_3(VAR_3->dev, &VAR_3->n_vec)) {
   FUNC_2(VAR_3->dev, "MSI allocation failed \n");
   VAR_3->irqid = 0;
   VAR_3->n_vec = 0;
  } else
   VAR_3->irqid = 1;
 } else {
  VAR_3->irqid = 1;
 }

 VAR_3->irq = FUNC_0(VAR_3->dev, VAR_2, &VAR_3->irqid,
   VAR_0 | VAR_1);
 if (((void*)0) == VAR_3->irq) {
  FUNC_2(VAR_3->dev, "could not allocate interrupt\n");
  return -1;
 }

 VAR_3->intr_ctx.vec = 0;
 VAR_3->intr_ctx.softc = VAR_3;
 FUNC_5(VAR_3->intr_ctx.name, sizeof(VAR_3->intr_ctx.name),
   "%s_intr_%d",
   FUNC_1(VAR_3->dev),
   VAR_3->intr_ctx.vec);

 return 0;
}
