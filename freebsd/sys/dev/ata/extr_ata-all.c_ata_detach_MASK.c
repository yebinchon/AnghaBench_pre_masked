
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* free ) (int ) ;} ;
struct ata_channel {int flags; int state_mtx; TYPE_1__ dma; int * r_irq; int ih; int * sim; int path; int conntask; int poll_callout; int state; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 struct ata_channel* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_7 ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

int
FUNC_14(device_t VAR_8)
{
    struct ata_channel *VAR_9 = FUNC_5(VAR_8);


    if (!VAR_9->r_irq)
 return VAR_4;


    FUNC_7(&VAR_9->state_mtx);
    VAR_9->state |= VAR_3;
    FUNC_8(&VAR_9->state_mtx);
    if (VAR_9->flags & VAR_2)
 FUNC_2(&VAR_9->poll_callout);

    FUNC_10(VAR_7, &VAR_9->conntask);

 FUNC_7(&VAR_9->state_mtx);
 FUNC_11(VAR_0, VAR_9->path, ((void*)0));
 FUNC_13(VAR_9->path);
 FUNC_12(FUNC_4(VAR_9->sim));
 FUNC_3(VAR_9->sim, VAR_6);
 VAR_9->sim = ((void*)0);
 FUNC_8(&VAR_9->state_mtx);


    FUNC_1(VAR_8, VAR_9->r_irq, VAR_9->ih);
    FUNC_0(VAR_8, VAR_5, VAR_1, VAR_9->r_irq);
    VAR_9->r_irq = ((void*)0);


    if (VAR_9->dma.free)
 VAR_9->dma.free(VAR_8);

    FUNC_6(&VAR_9->state_mtx);
    return 0;
}
