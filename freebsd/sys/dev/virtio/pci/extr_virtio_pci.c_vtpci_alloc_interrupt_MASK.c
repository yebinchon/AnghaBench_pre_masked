
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int vtpci_dev; } ;
struct vtpci_interrupt {int vti_rid; struct resource* vti_irq; } ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_1(struct vtpci_softc *VAR_2, int VAR_3, int VAR_4,
    struct vtpci_interrupt *VAR_5)
{
 struct resource *VAR_6;

 VAR_6 = FUNC_0(VAR_2->vtpci_dev, VAR_1, &VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_5->vti_irq = VAR_6;
 VAR_5->vti_rid = VAR_3;

 return (0);
}
