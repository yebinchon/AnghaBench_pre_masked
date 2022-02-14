
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbc_softc {int ** irq; int * irq_rid; int dev; int ** ih; int ** drq; int * drq_rid; int ** io; int * io_rid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct sbc_softc *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0 ; VAR_7 < VAR_1 ; VAR_7++) {
  if (VAR_6->io[VAR_7] != ((void*)0)) {
   FUNC_0(VAR_6->dev, VAR_4, VAR_6->io_rid[VAR_7], VAR_6->io[VAR_7]);
   VAR_6->io[VAR_7] = ((void*)0);
  }
 }
 for (VAR_7 = 0 ; VAR_7 < VAR_0 ; VAR_7++) {
  if (VAR_6->drq[VAR_7] != ((void*)0)) {
   FUNC_0(VAR_6->dev, VAR_3, VAR_6->drq_rid[VAR_7], VAR_6->drq[VAR_7]);
   VAR_6->drq[VAR_7] = ((void*)0);
  }
 }
 for (VAR_7 = 0 ; VAR_7 < VAR_2 ; VAR_7++) {
  if (VAR_6->irq[VAR_7] != ((void*)0)) {
   if (VAR_6->ih[VAR_7] != ((void*)0))
    FUNC_1(VAR_6->dev, VAR_6->irq[VAR_7], VAR_6->ih[VAR_7]);
   VAR_6->ih[VAR_7] = ((void*)0);
   FUNC_0(VAR_6->dev, VAR_5, VAR_6->irq_rid[VAR_7], VAR_6->irq[VAR_7]);
   VAR_6->irq[VAR_7] = ((void*)0);
  }
 }
 return (0);
}
