
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_6__ {TYPE_2__* qs; } ;
struct TYPE_7__ {int flags; int irq_rid; void* intr_tag; int msi_count; int* msix_irq_rid; int dev; void** msix_intr_tag; struct resource** msix_irq_res; TYPE_1__ sge; struct resource* irq_res; int cxgb_intr; } ;
typedef TYPE_2__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,struct resource*,void*,char*,...) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (int ,struct resource*,int,int *,int ,TYPE_2__*,void**) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,char*,int,...) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(adapter_t *VAR_9)
{
 struct resource *VAR_10;
 void *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15 = VAR_9->flags & (VAR_6 | VAR_7);

 VAR_9->irq_rid = VAR_15 ? 1 : 0;
 VAR_9->irq_res = FUNC_0(VAR_9->dev, VAR_5, &VAR_9->irq_rid,
          VAR_4 | VAR_3);
 if (VAR_9->irq_res == ((void*)0)) {
  FUNC_5(VAR_9->dev, "Cannot allocate interrupt (%x, %u)\n",
         VAR_15, VAR_9->irq_rid);
  VAR_14 = VAR_0;
  VAR_9->irq_rid = 0;
 } else {
  VAR_14 = FUNC_3(VAR_9->dev, VAR_9->irq_res,
      VAR_1 | VAR_2, ((void*)0),
      VAR_9->cxgb_intr, VAR_9, &VAR_9->intr_tag);

  if (VAR_14) {
   FUNC_5(VAR_9->dev,
          "Cannot set up interrupt (%x, %u, %d)\n",
          VAR_15, VAR_9->irq_rid, VAR_14);
   FUNC_2(VAR_9->dev, VAR_5, VAR_9->irq_rid,
          VAR_9->irq_res);
   VAR_9->irq_res = VAR_9->intr_tag = ((void*)0);
   VAR_9->irq_rid = 0;
  }
 }


 if (!(VAR_15 & VAR_7) || VAR_14)
  return (VAR_14);

 FUNC_1(VAR_9->dev, VAR_9->irq_res, VAR_9->intr_tag, "err");
 for (VAR_12 = 0; VAR_12 < VAR_9->msi_count - 1; VAR_12++) {
  VAR_13 = VAR_12 + 2;
  VAR_10 = FUNC_0(VAR_9->dev, VAR_5, &VAR_13,
          VAR_4 | VAR_3);
  if (VAR_10 == ((void*)0)) {
   FUNC_5(VAR_9->dev, "Cannot allocate interrupt "
          "for message %d\n", VAR_13);
   VAR_14 = VAR_0;
   break;
  }

  VAR_14 = FUNC_3(VAR_9->dev, VAR_10, VAR_1 | VAR_2,
         ((void*)0), VAR_8, &VAR_9->sge.qs[VAR_12], &VAR_11);
  if (VAR_14) {
   FUNC_5(VAR_9->dev, "Cannot set up interrupt "
          "for message %d (%d)\n", VAR_13, VAR_14);
   FUNC_2(VAR_9->dev, VAR_5, VAR_13, VAR_10);
   break;
  }

  VAR_9->msix_irq_rid[VAR_12] = VAR_13;
  VAR_9->msix_irq_res[VAR_12] = VAR_10;
  VAR_9->msix_intr_tag[VAR_12] = VAR_11;
  FUNC_1(VAR_9->dev, VAR_10, VAR_11, "qs%d", VAR_12);
 }

 if (VAR_14)
  FUNC_4(VAR_9);

 return (VAR_14);
}
