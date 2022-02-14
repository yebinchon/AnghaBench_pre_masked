
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int dummy; } ;
struct al_msix_softc {struct intr_irqsrc** isrcs; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct al_msix_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, struct intr_irqsrc *VAR_3)
{
 struct al_msix_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_4->isrcs[VAR_5] == VAR_3)
   return (VAR_5);
 return (VAR_0);
}
