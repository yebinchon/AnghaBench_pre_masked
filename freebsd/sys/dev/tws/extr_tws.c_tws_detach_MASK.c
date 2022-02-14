
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {TYPE_3__* q; } ;
struct TYPE_4__ {TYPE_3__* q; } ;
struct tws_softc {int obfl_q_overrun; int irqs; scalar_t__ intr_type; int tws_clist; int tws_cdev; int io_lock; int gen_lock; int sim_lock; int q_lock; TYPE_2__ trace_q; TYPE_1__ aen_q; scalar_t__ data_tag; int ioctl_data_map; scalar_t__ ioctl_data_mem; TYPE_3__* scan_ccb; TYPE_3__* sense_bufs; TYPE_3__* reqs; int stats_timer; int reg_res_id; scalar_t__ reg_res; int tws_dev; int mfa_res_id; scalar_t__ mfa_res; scalar_t__ cmd_tag; int cmd_map; scalar_t__ dma_mem; scalar_t__ dma_mem_phys; int * irq_res_id; scalar_t__* irq_res; } ;
typedef int device_t ;
struct TYPE_6__ {int timeout; scalar_t__ dma_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct tws_softc*,char*,int,int ) ;
 int FUNC_1 (struct tws_softc*,char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct tws_softc* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct tws_softc*) ;
 int FUNC_17 (struct tws_softc*,int) ;
 int VAR_7 ;
 int FUNC_18 (struct tws_softc*,int ,int) ;
 int FUNC_19 (struct tws_softc*,int ) ;
 int FUNC_20 (struct tws_softc*) ;
 int FUNC_21 (struct tws_softc*) ;
 int FUNC_22 (struct tws_softc*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_8)
{
    struct tws_softc *VAR_9 = FUNC_9(VAR_8);
    int VAR_10;
    u_int32_t VAR_11;

    FUNC_1(VAR_9, "entry", 0, 0);

    FUNC_12(&VAR_9->gen_lock);
    FUNC_19(VAR_9, VAR_6);
    FUNC_13(&VAR_9->gen_lock);


    FUNC_21(VAR_9);

    FUNC_22(VAR_9, VAR_4, ~0, 4);
    VAR_11 = FUNC_18(VAR_9, VAR_3, 4);
    FUNC_1(VAR_9, "turn-off-intr", VAR_11, 0);
    VAR_9->obfl_q_overrun = 0;
    FUNC_17(VAR_9, 1);



    FUNC_20(VAR_9);


    for(VAR_10=0;VAR_10<VAR_9->irqs;VAR_10++) {
        if ( VAR_9->irq_res[VAR_10] ){
            if (FUNC_6(VAR_9->tws_dev,
                     VAR_1, VAR_9->irq_res_id[VAR_10], VAR_9->irq_res[VAR_10]))
                FUNC_0(VAR_9, "bus release irq resource",
                                       VAR_10, VAR_9->irq_res_id[VAR_10]);
        }
    }
    if ( VAR_9->intr_type == VAR_5 ) {
        FUNC_14(VAR_9->tws_dev);
    }

    FUNC_16(VAR_9);

    if (VAR_9->dma_mem_phys)
     FUNC_4(VAR_9->cmd_tag, VAR_9->cmd_map);
    if (VAR_9->dma_mem)
     FUNC_5(VAR_9->cmd_tag, VAR_9->dma_mem, VAR_9->cmd_map);
    if (VAR_9->cmd_tag)
     FUNC_2(VAR_9->cmd_tag);


    if ( VAR_9->mfa_res ){
        if (FUNC_6(VAR_9->tws_dev,
                 VAR_2, VAR_9->mfa_res_id, VAR_9->mfa_res))
            FUNC_0(VAR_9, "bus release mem resource", 0, VAR_9->mfa_res_id);
    }
    if ( VAR_9->reg_res ){
        if (FUNC_6(VAR_9->tws_dev,
                 VAR_2, VAR_9->reg_res_id, VAR_9->reg_res))
            FUNC_0(VAR_9, "bus release mem resource", 0, VAR_9->reg_res_id);
    }

    for ( VAR_10=0; VAR_10< VAR_7; VAR_10++) {
     if (VAR_9->reqs[VAR_10].dma_map)
      FUNC_3(VAR_9->data_tag, VAR_9->reqs[VAR_10].dma_map);
     FUNC_7(&VAR_9->reqs[VAR_10].timeout);
    }

    FUNC_7(&VAR_9->stats_timer);
    FUNC_10(VAR_9->reqs, VAR_0);
    FUNC_10(VAR_9->sense_bufs, VAR_0);
    FUNC_10(VAR_9->scan_ccb, VAR_0);
    if (VAR_9->ioctl_data_mem)
            FUNC_5(VAR_9->data_tag, VAR_9->ioctl_data_mem, VAR_9->ioctl_data_map);
    if (VAR_9->data_tag)
     FUNC_2(VAR_9->data_tag);
    FUNC_10(VAR_9->aen_q.q, VAR_0);
    FUNC_10(VAR_9->trace_q.q, VAR_0);
    FUNC_11(&VAR_9->q_lock);
    FUNC_11(&VAR_9->sim_lock);
    FUNC_11(&VAR_9->gen_lock);
    FUNC_11(&VAR_9->io_lock);
    FUNC_8(VAR_9->tws_cdev);
    FUNC_15(&VAR_9->tws_clist);
    return (0);
}
