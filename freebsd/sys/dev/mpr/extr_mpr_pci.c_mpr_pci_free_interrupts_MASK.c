
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_softc {int msi_msgs; int mpr_dev; struct mpr_queue* queues; } ;
struct mpr_queue {int * irq; int irq_rid; int intrhand; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;

void
FUNC_2(struct mpr_softc *VAR_1)
{
 struct mpr_queue *VAR_2;
 int VAR_3;

 if (VAR_1->queues == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->msi_msgs; VAR_3++) {
  VAR_2 = &VAR_1->queues[VAR_3];
  if (VAR_2->irq != ((void*)0)) {
   FUNC_1(VAR_1->mpr_dev, VAR_2->irq,
       VAR_2->intrhand);
   FUNC_0(VAR_1->mpr_dev, VAR_0,
       VAR_2->irq_rid, VAR_2->irq);
  }
 }
}
