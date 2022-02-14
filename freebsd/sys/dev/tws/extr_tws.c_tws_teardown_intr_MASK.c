
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int irqs; int ** intr_handle; int * irq_res; int tws_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

int
FUNC_1(struct tws_softc *VAR_1)
{
    int VAR_2, VAR_3;

    for(VAR_2=0;VAR_2<VAR_1->irqs;VAR_2++) {
        if (VAR_1->intr_handle[VAR_2]) {
            VAR_3 = FUNC_0(VAR_1->tws_dev,
                                      VAR_1->irq_res[VAR_2], VAR_1->intr_handle[VAR_2]);
            VAR_1->intr_handle[VAR_2] = ((void*)0);
        }
    }
    return(VAR_0);
}
