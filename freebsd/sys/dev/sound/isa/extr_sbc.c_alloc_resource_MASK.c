
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbc_softc {int* io_rid; int* drq_rid; int* irq_rid; scalar_t__* irq_alloced; int ** irq; int dev; scalar_t__* drq_alloced; int ** drq; scalar_t__* io_alloced; int ** io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int * FUNC_1 (int ,int ,int*,int ,int ) ;
 int * VAR_7 ;

__attribute__((used)) static int
FUNC_2(struct sbc_softc *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0 ; VAR_9 < VAR_1 ; VAR_9++) {
  if (VAR_8->io[VAR_9] == ((void*)0)) {
   VAR_8->io_rid[VAR_9] = VAR_9;
   VAR_8->io[VAR_9] = FUNC_1(VAR_8->dev,
         VAR_5,
         &VAR_8->io_rid[VAR_9],
        VAR_7[VAR_9],
        VAR_3);
   if (VAR_9 == 0 && VAR_8->io[VAR_9] == ((void*)0))
    return (1);
   VAR_8->io_alloced[VAR_9] = 0;
  }
 }
 for (VAR_9 = 0 ; VAR_9 < VAR_0 ; VAR_9++) {
  if (VAR_8->drq[VAR_9] == ((void*)0)) {
   VAR_8->drq_rid[VAR_9] = VAR_9;
   VAR_8->drq[VAR_9] = FUNC_0(VAR_8->dev,
            VAR_4,
            &VAR_8->drq_rid[VAR_9],
            VAR_3);
   if (VAR_9 == 0 && VAR_8->drq[VAR_9] == ((void*)0))
    return (1);
   VAR_8->drq_alloced[VAR_9] = 0;
  }
 }
 for (VAR_9 = 0 ; VAR_9 < VAR_2 ; VAR_9++) {
   if (VAR_8->irq[VAR_9] == ((void*)0)) {
   VAR_8->irq_rid[VAR_9] = VAR_9;
   VAR_8->irq[VAR_9] = FUNC_0(VAR_8->dev,
            VAR_6,
            &VAR_8->irq_rid[VAR_9],
            VAR_3);
   if (VAR_9 == 0 && VAR_8->irq[VAR_9] == ((void*)0))
    return (1);
   VAR_8->irq_alloced[VAR_9] = 0;
  }
 }
 return (0);
}
