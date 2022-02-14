
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenpci_softc {scalar_t__ res_irq; int rid_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 struct xenpci_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct xenpci_softc *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->res_irq != 0) {
  FUNC_0(VAR_1, VAR_0,
   VAR_2->rid_irq, VAR_2->res_irq);
  FUNC_1(VAR_1, VAR_0,
   VAR_2->rid_irq, VAR_2->res_irq);
  VAR_2->res_irq = 0;
 }

 return (0);
}
