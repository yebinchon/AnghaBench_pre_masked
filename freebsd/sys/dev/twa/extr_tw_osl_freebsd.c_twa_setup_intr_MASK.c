
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int intr_handle; scalar_t__ irq_res; int bus_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int,int *,int ,struct twa_softc*,int *) ;
 int VAR_2 ;

int FUNC_1(struct twa_softc *VAR_3)
{
 int VAR_4 = 0;

 if (!(VAR_3->intr_handle) && (VAR_3->irq_res)) {
  VAR_4 = FUNC_0(VAR_3->bus_dev, VAR_3->irq_res,
     VAR_1 | VAR_0,
     ((void*)0), VAR_2,
     VAR_3, &VAR_3->intr_handle);
 }
 return( VAR_4 );
}
