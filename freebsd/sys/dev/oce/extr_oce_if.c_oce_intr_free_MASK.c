
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int intr_count; int flags; int dev; TYPE_1__* intrs; } ;
struct TYPE_4__ {int * intr_res; int * tag; int irq_rr; int * tq; } ;
typedef TYPE_2__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(POCE_SOFTC VAR_2)
{
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->intr_count; VAR_3++) {

  if (VAR_2->intrs[VAR_3].tag != ((void*)0))
   FUNC_1(VAR_2->dev, VAR_2->intrs[VAR_3].intr_res,
      VAR_2->intrs[VAR_3].tag);
  if (VAR_2->intrs[VAR_3].tq != ((void*)0))
   FUNC_3(VAR_2->intrs[VAR_3].tq);

  if (VAR_2->intrs[VAR_3].intr_res != ((void*)0))
   FUNC_0(VAR_2->dev, VAR_1,
      VAR_2->intrs[VAR_3].irq_rr,
      VAR_2->intrs[VAR_3].intr_res);
  VAR_2->intrs[VAR_3].tag = ((void*)0);
  VAR_2->intrs[VAR_3].intr_res = ((void*)0);
 }

 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_2->dev);

}
