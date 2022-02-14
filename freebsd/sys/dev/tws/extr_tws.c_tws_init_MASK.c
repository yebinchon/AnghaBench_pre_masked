
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef int u_int32_t ;
struct tws_stats {int dummy; } ;
struct tws_softc {int is64bit; void* dma_mem; int dma_mem_phys; int stats; int tws_dev; int ioctl_data_map; int ioctl_data_mem; int data_tag; void* scan_ccb; void* sense_bufs; void* reqs; int io_lock; int parent_tag; int cmd_map; int cmd_tag; scalar_t__ seq_id; } ;
struct tws_sense {int dummy; } ;
struct tws_request {int dummy; } ;
struct tws_command_packet {int dummy; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct tws_softc*,char*,int,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,void*,int,int ,int*,int ) ;
 scalar_t__ FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int * VAR_22 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct tws_softc*) ;
 int FUNC_9 (struct tws_softc*) ;
 int VAR_23 ;
 int FUNC_10 (struct tws_softc*) ;
 int FUNC_11 (struct tws_softc*) ;
 int FUNC_12 (struct tws_softc*,int) ;
 int VAR_24 ;
 int FUNC_13 (struct tws_softc*,int,int) ;
 int FUNC_14 (struct tws_softc*) ;
 int VAR_25 ;
 int FUNC_15 (struct tws_softc*,int,int,int) ;

__attribute__((used)) static int
FUNC_16(struct tws_softc *VAR_26)
{

    u_int32_t VAR_27;
    u_int32_t VAR_28;
    int VAR_29;
    u_int32_t VAR_30;

    VAR_26->seq_id = 0;
    if ( VAR_24 > VAR_19 )
        VAR_24 = VAR_19;
    if (VAR_24 < VAR_20+1)
        VAR_24 = VAR_20+1;
    VAR_26->is64bit = (sizeof(bus_addr_t) == 8) ? 1 : 0;
    VAR_27 = (VAR_26->is64bit && !VAR_25) ?
                                 VAR_17 :
                                 VAR_16;
    VAR_28 = (sizeof(struct tws_command_packet) * VAR_24) +
                             (VAR_21) ;
    if ( FUNC_1(FUNC_4(VAR_26->tws_dev),
                            VAR_12,
                            0,
                            VAR_4,
                            VAR_3,
                            ((void*)0), ((void*)0),
                            VAR_5,
                            VAR_27,
                            VAR_5,
                            0,
                            ((void*)0), ((void*)0),
                            &VAR_26->parent_tag
                           )) {
        FUNC_0(VAR_26, "DMA parent tag Create fail", VAR_27,
                                                    VAR_26->is64bit);
        return(VAR_6);
    }




    if ( FUNC_1(VAR_26->parent_tag,
                            VAR_15,
                            0,
                            VAR_4,
                            VAR_3,
                            ((void*)0), ((void*)0),
                            VAR_28,
                            1,
                            VAR_5,
                            0,
                            ((void*)0), ((void*)0),
                            &VAR_26->cmd_tag
                           )) {
        FUNC_0(VAR_26, "DMA cmd tag Create fail", VAR_27, VAR_26->is64bit);
        return(VAR_6);
    }

    if (FUNC_3(VAR_26->cmd_tag, &VAR_26->dma_mem,
                    VAR_1, &VAR_26->cmd_map)) {
        FUNC_0(VAR_26, "DMA mem alloc fail", VAR_27, VAR_26->is64bit);
        return(VAR_6);
    }


    VAR_26->dma_mem_phys=0;
    VAR_29 = FUNC_2(VAR_26->cmd_tag, VAR_26->cmd_map, VAR_26->dma_mem,
                    VAR_28, VAR_23,
                    &VAR_26->dma_mem_phys, 0);





    if (FUNC_1(VAR_26->parent_tag,
                           VAR_12,
                           0,
                           VAR_4,
                           VAR_3,
                           ((void*)0), ((void*)0),
                           VAR_18,
                           VAR_27,
                           VAR_18,
                           VAR_0,
                           VAR_22,
                           &VAR_26->io_lock,
                           &VAR_26->data_tag )) {
        FUNC_0(VAR_26, "DMA cmd tag Create fail", VAR_27, VAR_26->is64bit);
        return(VAR_6);
    }

    VAR_26->reqs = FUNC_7(sizeof(struct tws_request) * VAR_24, VAR_8,
                      VAR_9 | VAR_10);
    VAR_26->sense_bufs = FUNC_7(sizeof(struct tws_sense) * VAR_24, VAR_8,
                      VAR_9 | VAR_10);
    VAR_26->scan_ccb = FUNC_7(sizeof(union ccb), VAR_8, VAR_9 | VAR_10);
    if (FUNC_3(VAR_26->data_tag, (void **)&VAR_26->ioctl_data_mem,
            (VAR_1 | VAR_2), &VAR_26->ioctl_data_map)) {
        FUNC_6(VAR_26->tws_dev, "Cannot allocate ioctl data mem\n");
        return(VAR_6);
    }

    if ( !FUNC_8(VAR_26) )
        if( !FUNC_9(VAR_26) )
            return(VAR_7);

    FUNC_5(&VAR_26->stats, sizeof(struct tws_stats));
    FUNC_11(VAR_26);
    FUNC_14(VAR_26);
    FUNC_0(VAR_26, "dma_mem_phys", VAR_26->dma_mem_phys, VAR_14);
    if ( FUNC_12(VAR_26, VAR_28) == VAR_7 )
        return(VAR_7);
    if ( FUNC_10(VAR_26) == VAR_7 )
        return(VAR_7);

    return(VAR_11);

}
