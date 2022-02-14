
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int * device_t ;
struct TYPE_4__ {int * irq; int irq_rid; int ** io; int * io_rid; int dev; int ** drq; int * drq_rid; } ;


 int FUNC_0 (int *,int *,int ,int ,int *) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int **) ;

__attribute__((used)) static int
FUNC_6(sc_p VAR_3)
{
 int VAR_4, VAR_5;
 device_t VAR_6;

 if (FUNC_4(VAR_3->dev))
  VAR_5 = FUNC_3(VAR_3->dev);
 else
  VAR_5 = 130;

 switch(VAR_5) {
 case 128:
 case 130:
  for (VAR_4 = 0 ; VAR_4 < FUNC_5(VAR_3->io); VAR_4++) {
   if (VAR_3->io[VAR_4] != ((void*)0)) {
    FUNC_1(VAR_3->dev, VAR_1, VAR_3->io_rid[VAR_4], VAR_3->io[VAR_4]);
    VAR_3->io[VAR_4] = ((void*)0);
   }
  }
  if (VAR_3->irq != ((void*)0)) {
   FUNC_1(VAR_3->dev, VAR_2, VAR_3->irq_rid, VAR_3->irq);
   VAR_3->irq = ((void*)0);
  }
  for (VAR_4 = 0 ; VAR_4 < FUNC_5(VAR_3->drq); VAR_4++) {
   if (VAR_3->drq[VAR_4] != ((void*)0)) {
    FUNC_1(VAR_3->dev, VAR_0, VAR_3->drq_rid[VAR_4], VAR_3->drq[VAR_4]);
    VAR_3->drq[VAR_4] = ((void*)0);
   }
  }
  break;
 case 129:
  if (VAR_3->io[0] != ((void*)0)) {
   FUNC_1(VAR_3->dev, VAR_1, VAR_3->io_rid[0], VAR_3->io[0]);
   VAR_3->io[0] = ((void*)0);
  }
  break;
 case 131:
  if (VAR_3->io[0] != ((void*)0)) {
   FUNC_1(VAR_3->dev, VAR_1, VAR_3->io_rid[0], VAR_3->io[0]);
   VAR_3->io[0] = ((void*)0);
  }
  if (VAR_3->irq != ((void*)0)) {

   VAR_6 = FUNC_2(VAR_3);
   if (VAR_6 == ((void*)0))
    return (1);
   FUNC_0(VAR_6, ((void*)0), VAR_1, VAR_3->irq_rid, VAR_3->irq);
   VAR_3->irq = ((void*)0);
  }
  break;
 }
 return (0);
}
