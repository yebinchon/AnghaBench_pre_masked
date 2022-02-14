
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct tws_softc {int q_lock; TYPE_4__* reqs; scalar_t__ dma_mem_phys; TYPE_1__* sense_bufs; int data_tag; scalar_t__ dma_mem; } ;
struct TYPE_6__ {int size_header; } ;
struct TYPE_7__ {TYPE_2__ header_desc; } ;
struct tws_command_packet {TYPE_3__ hdr; } ;
struct tws_command_header {int dummy; } ;
struct TYPE_8__ {int request_id; int state; int timeout; struct tws_command_packet* cmd_pkt; struct tws_softc* sc; scalar_t__ cmd_pkt_phy; int dma_map; } ;
struct TYPE_5__ {scalar_t__ hdr_pkt_phy; TYPE_3__* hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tws_softc*,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct tws_command_packet*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tws_softc*,TYPE_4__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_7(struct tws_softc *VAR_6, u_int32_t VAR_7)
{

    struct tws_command_packet *VAR_8;
    VAR_8 = (struct tws_command_packet *)VAR_6->dma_mem;
    int VAR_9;

    FUNC_2(VAR_8, VAR_7);
    FUNC_0(VAR_6, "phy cmd", VAR_6->dma_mem_phys, 0);
    FUNC_4(&VAR_6->q_lock);
    for ( VAR_9=0; VAR_9< VAR_5; VAR_9++)
    {
        if (FUNC_1(VAR_6->data_tag, 0, &VAR_6->reqs[VAR_9].dma_map)) {

            FUNC_5(&VAR_6->q_lock);
            return(VAR_0);
        }
        VAR_6->reqs[VAR_9].cmd_pkt = &VAR_8[VAR_9];

        VAR_6->sense_bufs[VAR_9].hdr = &VAR_8[VAR_9].hdr ;
        VAR_6->sense_bufs[VAR_9].hdr_pkt_phy = VAR_6->dma_mem_phys +
                              (VAR_9 * sizeof(struct tws_command_packet));

        VAR_6->reqs[VAR_9].cmd_pkt_phy = VAR_6->dma_mem_phys +
                              sizeof(struct tws_command_header) +
                              (VAR_9 * sizeof(struct tws_command_packet));
        VAR_6->reqs[VAR_9].request_id = VAR_9;
        VAR_6->reqs[VAR_9].sc = VAR_6;

        VAR_6->reqs[VAR_9].cmd_pkt->hdr.header_desc.size_header = 128;

 FUNC_3(&VAR_6->reqs[VAR_9].timeout, 1);
        VAR_6->reqs[VAR_9].state = VAR_3;
        if ( VAR_9 >= VAR_4 )
            FUNC_6(VAR_6, &VAR_6->reqs[VAR_9], VAR_2);
    }
    FUNC_5(&VAR_6->q_lock);
    return(VAR_1);
}
