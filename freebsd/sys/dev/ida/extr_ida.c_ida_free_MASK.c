
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ida_softc {int lock; int * regs; int regs_res_id; int regs_res_type; int dev; int * parent_dmat; int * irq; int irq_res_type; TYPE_1__* qcbs; int * hwqcb_dmat; int hwqcb_dmamap; scalar_t__ hwqcbs; scalar_t__ hwqcb_busaddr; int * buffer_dmat; int ch; int * ih; } ;
struct TYPE_2__ {int dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void
FUNC_12(struct ida_softc *VAR_2)
{
 int VAR_3;

 if (VAR_2->ih != ((void*)0))
  FUNC_5(VAR_2->dev, VAR_2->irq, VAR_2->ih);

 FUNC_10(&VAR_2->lock);
 FUNC_7(&VAR_2->ch);
 FUNC_11(&VAR_2->lock);
 FUNC_6(&VAR_2->ch);

 if (VAR_2->buffer_dmat) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_1(VAR_2->buffer_dmat, VAR_2->qcbs[VAR_3].dmamap);
  FUNC_0(VAR_2->buffer_dmat);
 }

 if (VAR_2->hwqcb_dmat) {
  if (VAR_2->hwqcb_busaddr)
   FUNC_2(VAR_2->hwqcb_dmat, VAR_2->hwqcb_dmamap);
  if (VAR_2->hwqcbs)
   FUNC_3(VAR_2->hwqcb_dmat, VAR_2->hwqcbs,
       VAR_2->hwqcb_dmamap);
  FUNC_0(VAR_2->hwqcb_dmat);
 }

 if (VAR_2->qcbs != ((void*)0))
  FUNC_8(VAR_2->qcbs, VAR_1);

 if (VAR_2->irq != ((void*)0))
  FUNC_4(VAR_2->dev, VAR_2->irq_res_type,
      0, VAR_2->irq);

 if (VAR_2->parent_dmat != ((void*)0))
  FUNC_0(VAR_2->parent_dmat);

 if (VAR_2->regs != ((void*)0))
  FUNC_4(VAR_2->dev, VAR_2->regs_res_type,
      VAR_2->regs_res_id, VAR_2->regs);

 FUNC_9(&VAR_2->lock);
}
