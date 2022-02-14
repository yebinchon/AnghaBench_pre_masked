
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int * intr_handle; scalar_t__ irq_res; int bus_dev; } ;


 int FUNC_0 (int ,scalar_t__,int *) ;

int FUNC_1(struct twa_softc *VAR_0)
{
 int VAR_1 = 0;

 if ((VAR_0->intr_handle) && (VAR_0->irq_res)) {
  VAR_1 = FUNC_0(VAR_0->bus_dev,
      VAR_0->irq_res, VAR_0->intr_handle);
  VAR_0->intr_handle = ((void*)0);
 }
 return( VAR_1 );
}
