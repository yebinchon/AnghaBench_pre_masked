
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct al_msix_softc {int msi_mtx; int ** isrcs; int irq_alloc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct intr_irqsrc*) ;
 struct al_msix_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, device_t VAR_2, int VAR_3,
    struct intr_irqsrc **VAR_4)
{
 struct al_msix_softc *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_1);

 FUNC_2(&VAR_5->msi_mtx);

 VAR_7 = FUNC_0(VAR_1, *VAR_4);
 FUNC_4(VAR_5->irq_alloc, VAR_7, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_7 = FUNC_0(VAR_1, *VAR_4);
  if (VAR_7 != VAR_0)
   VAR_5->isrcs[VAR_7] = ((void*)0);
  VAR_4++;
 }

 FUNC_3(&VAR_5->msi_mtx);

 return (0);
}
