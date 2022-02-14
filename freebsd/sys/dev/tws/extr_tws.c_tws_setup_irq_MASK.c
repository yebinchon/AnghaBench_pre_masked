
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int intr_type; int irqs; int* irq_res_id; int tws_dev; void** irq_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct tws_softc*,char*,int ,int) ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (struct tws_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct tws_softc *VAR_5)
{
    int VAR_6;

    switch(VAR_5->intr_type) {
        case 129 :
            VAR_5->irqs = 1;
            VAR_5->irq_res_id[0] = 0;
            VAR_5->irq_res[0] = FUNC_1(VAR_5->tws_dev, VAR_4,
                            &VAR_5->irq_res_id[0], VAR_2 | VAR_1);
            if ( ! VAR_5->irq_res[0] )
                return(VAR_0);
            if ( FUNC_4(VAR_5, VAR_5->irqs) == VAR_0 )
                return(VAR_0);
            FUNC_2(VAR_5->tws_dev, "Using legacy INTx\n");
            break;
        case 128 :
            VAR_5->irqs = 1;
            VAR_5->irq_res_id[0] = 1;
            VAR_6 = 1;
            if (FUNC_3(VAR_5->tws_dev, &VAR_6) != 0 ) {
                FUNC_0(VAR_5, "pci alloc msi fail", 0, VAR_6);
                return(VAR_0);
            }
            VAR_5->irq_res[0] = FUNC_1(VAR_5->tws_dev, VAR_4,
                              &VAR_5->irq_res_id[0], VAR_2 | VAR_1);

            if ( !VAR_5->irq_res[0] )
                return(VAR_0);
            if ( FUNC_4(VAR_5, VAR_5->irqs) == VAR_0 )
                return(VAR_0);
            FUNC_2(VAR_5->tws_dev, "Using MSI\n");
            break;

    }

    return(VAR_3);
}
