
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ocs_softc {TYPE_1__* reg; int dev; int dmat; int * irq; scalar_t__ n_vec; } ;
struct TYPE_2__ {int * res; int rid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (struct ocs_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ocs_softc *VAR_3)
{

 if (((void*)0) != VAR_3) {
  uint32_t VAR_4;

  FUNC_2(VAR_3);

  if (VAR_3->irq) {
   FUNC_1(VAR_3->dev, VAR_1,
     FUNC_4(VAR_3->irq), VAR_3->irq);

   if (VAR_3->n_vec) {
    FUNC_3(VAR_3->dev);
    VAR_3->n_vec = 0;
   }

   VAR_3->irq = ((void*)0);
  }

  FUNC_0(VAR_3->dmat);

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_3->reg[VAR_4].res) {
    FUNC_1(VAR_3->dev, VAR_2,
      VAR_3->reg[VAR_4].rid,
      VAR_3->reg[VAR_4].res);
   }
  }
 }
}
