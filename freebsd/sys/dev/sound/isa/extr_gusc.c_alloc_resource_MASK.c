
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int * device_t ;
struct TYPE_4__ {int* io_rid; int irq_rid; int* drq_rid; int irq_alloced; int * irq; int * io_alloced; int ** io; int dev; int * drq_alloced; int ** drq; } ;


 int * FUNC_0 (int *,int *,int ,int*,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ,int ,int*,int,int,int,int) ;
 void* FUNC_2 (int ,int ,int*,int) ;
 void* FUNC_3 (int ,int ,int*,int,int) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (TYPE_1__*) ;
 int * VAR_7 ;
 int* VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int **) ;

__attribute__((used)) static int
FUNC_10(sc_p VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 device_t VAR_14;

 VAR_13 = 0;
 if (FUNC_8(VAR_9->dev))
  VAR_12 = FUNC_6(VAR_9->dev);
 else {
  VAR_12 = 130;
  VAR_13 = FUNC_4(VAR_9->dev);
 }
 switch(VAR_12) {
 case 128:
 case 130:
  if (VAR_12 == 130)
   VAR_11 = FUNC_7(VAR_9->dev);
  else
   VAR_11 = 0;
  for (VAR_10 = 0 ; VAR_10 < FUNC_9(VAR_9->io); VAR_10++) {
   if (VAR_9->io[VAR_10] == ((void*)0)) {
    VAR_9->io_rid[VAR_10] = VAR_10;
    if (VAR_11 == 0)
     VAR_9->io[VAR_10] =
         FUNC_3(VAR_9->dev,
                 VAR_5,
                 &VAR_9->io_rid[VAR_10],
         VAR_8[VAR_10],
         VAR_2);
    else
     VAR_9->io[VAR_10] = FUNC_1(VAR_9->dev, VAR_5, &VAR_9->io_rid[VAR_10],
         VAR_11 + VAR_7[VAR_10],
         VAR_11 + VAR_7[VAR_10] + VAR_8[VAR_10] - 1
         , VAR_8[VAR_10], VAR_2);
    if (VAR_9->io[VAR_10] == ((void*)0))
     return (1);
    VAR_9->io_alloced[VAR_10] = 0;
   }
  }
  if (VAR_9->irq == ((void*)0)) {
   VAR_9->irq_rid = 0;
   VAR_9->irq =
    FUNC_2(VAR_9->dev, VAR_6,
             &VAR_9->irq_rid,
             VAR_2|VAR_3);
   if (VAR_9->irq == ((void*)0))
    return (1);
   VAR_9->irq_alloced = 0;
  }
  for (VAR_10 = 0 ; VAR_10 < FUNC_9(VAR_9->drq); VAR_10++) {
   if (VAR_9->drq[VAR_10] == ((void*)0)) {
    VAR_9->drq_rid[VAR_10] = VAR_10;
    if (VAR_11 == 0 || VAR_10 == 0)
     VAR_9->drq[VAR_10] =
      FUNC_2(
       VAR_9->dev, VAR_4,
       &VAR_9->drq_rid[VAR_10],
       VAR_2);
    else if ((VAR_13 & VAR_1) != 0)

     VAR_9->drq[VAR_10] = FUNC_1(VAR_9->dev, VAR_4, &VAR_9->drq_rid[VAR_10],
          VAR_13 & VAR_0,
          VAR_13 & VAR_0, 1, VAR_2);
    if (VAR_9->drq[VAR_10] == ((void*)0))
     return (1);
    VAR_9->drq_alloced[VAR_10] = 0;
   }
  }
  break;
 case 129:
  if (VAR_9->io[0] == ((void*)0)) {
   VAR_9->io_rid[0] = 0;
   VAR_9->io[0] = FUNC_3(VAR_9->dev,
         VAR_5,
         &VAR_9->io_rid[0],
         VAR_8[0],
         VAR_2);
   if (VAR_9->io[0] == ((void*)0))
    return (1);
   VAR_9->io_alloced[0] = 0;
  }
  break;
 case 131:
  if (VAR_9->io[0] == ((void*)0)) {
   VAR_9->io_rid[0] = 0;
   VAR_9->io[0] = FUNC_3(VAR_9->dev,
         VAR_5,
         &VAR_9->io_rid[0],
         VAR_8[0],
         VAR_2);
   if (VAR_9->io[0] == ((void*)0))
    return (1);
   VAR_9->io_alloced[0] = 0;
  }
  if (VAR_9->irq == ((void*)0)) {

   VAR_14 = FUNC_5(VAR_9);
   if (VAR_14 == ((void*)0))
    return (1);
   VAR_9->irq_rid = 0;
   VAR_9->irq = FUNC_0(VAR_14, ((void*)0), VAR_6, &VAR_9->irq_rid,
            0, ~0, 1, VAR_2 | VAR_3);
   if (VAR_9->irq == ((void*)0))
    return (1);
   VAR_9->irq_alloced = 0;
  }
  break;
 }
 return (0);
}
