
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbni_softc {int ifp; int lock; scalar_t__ irq_handle; int irq_res; int dev; int wch; } ;


 int FUNC_0 (struct sbni_softc*) ;
 int FUNC_1 (struct sbni_softc*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sbni_softc*) ;

void
FUNC_8(struct sbni_softc *VAR_0)
{

 FUNC_0(VAR_0);
 FUNC_7(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_0->wch);
 FUNC_4(VAR_0->ifp);
 if (VAR_0->irq_handle)
  FUNC_2(VAR_0->dev, VAR_0->irq_res, VAR_0->irq_handle);
 FUNC_6(&VAR_0->lock);
 FUNC_5(VAR_0->ifp);
}
