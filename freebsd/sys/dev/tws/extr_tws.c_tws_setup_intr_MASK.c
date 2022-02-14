
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int * intr_handle; int * irq_res; int tws_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int *,int ,struct tws_softc*,int *) ;
 int VAR_5 ;
 int FUNC_1 (struct tws_softc*,int ) ;

int
FUNC_2(struct tws_softc *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;

    for(VAR_8=0;VAR_8<VAR_7;VAR_8++) {
        if (!(VAR_6->intr_handle[VAR_8])) {
            if ((VAR_9 = FUNC_0(VAR_6->tws_dev, VAR_6->irq_res[VAR_8],
                                    VAR_2 | VAR_1,
                                    ((void*)0),
                                    VAR_5, VAR_6, &VAR_6->intr_handle[VAR_8]))) {
                FUNC_1(VAR_6, VAR_3);
                return(VAR_0);
            }
        }
    }
    return(VAR_4);

}
