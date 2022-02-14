
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct tws_softc {scalar_t__ is64bit; int data_tag; } ;
struct tws_request {int error_code; int flags; scalar_t__ type; struct tws_softc* sc; TYPE_6__* cmd_pkt; int dma_map; TYPE_2__* ccb_ptr; } ;
struct tws_cmd_generic {int size; } ;
typedef scalar_t__ gcmd ;
typedef int bus_dma_segment_t ;
struct TYPE_10__ {int lun_h4__sgl_entries; int sg_list; int res__opcode; } ;
struct TYPE_9__ {struct tws_cmd_generic generic; } ;
struct TYPE_11__ {TYPE_4__ pkt_a; TYPE_3__ pkt_g; } ;
struct TYPE_12__ {TYPE_5__ cmd; } ;
struct TYPE_7__ {int status; } ;
struct TYPE_8__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct tws_softc*,char*,int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct tws_softc*,void*,void*,int) ;
 int FUNC_4 (struct tws_softc*,struct tws_request*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_5(void *VAR_10, bus_dma_segment_t *VAR_11,
                            int VAR_12, int VAR_13)
{
    struct tws_request *VAR_14 = (struct tws_request *)VAR_10;
    struct tws_softc *VAR_15 = VAR_14->sc;
    u_int16_t VAR_16 = VAR_12;
    void *VAR_17;
    struct tws_cmd_generic *VAR_18;


    if ( VAR_13 ) {
        FUNC_1(VAR_15, "SOMETHING BAD HAPPENED! error = %d\n", VAR_13, 0);
    }

    if ( VAR_13 == VAR_3 ) {
        FUNC_1(VAR_15, "not enough data segs", 0, VAR_12);
        VAR_14->error_code = VAR_13;
        VAR_14->ccb_ptr->ccb_h.status = VAR_2;
        return;
    }

    if ( VAR_14->flags & VAR_4 )
        FUNC_2(VAR_14->sc->data_tag, VAR_14->dma_map,
                                            VAR_0);
    if ( VAR_14->flags & VAR_5 )
        FUNC_2(VAR_14->sc->data_tag, VAR_14->dma_map,
                                        VAR_1);
    if ( VAR_11 ) {
        if ( (VAR_14->type == VAR_8 &&
             FUNC_0(VAR_14->cmd_pkt->cmd.pkt_a.res__opcode) !=
                            VAR_6) ||
              VAR_14->type == VAR_7) {
            VAR_18 = &VAR_14->cmd_pkt->cmd.pkt_g.generic;
            VAR_17 = (u_int32_t *)(VAR_18) + VAR_18->size;
            VAR_18->size += VAR_16 *
                          ((VAR_14->sc->is64bit && !VAR_9) ? 4 : 2 );
            FUNC_3(VAR_14->sc, (void *)VAR_11, VAR_17, VAR_16);

        } else {
            FUNC_3(VAR_14->sc, (void *)VAR_11,
                      (void *)&(VAR_14->cmd_pkt->cmd.pkt_a.sg_list), VAR_16);
            VAR_14->cmd_pkt->cmd.pkt_a.lun_h4__sgl_entries |= VAR_16 ;
        }
    }


    VAR_14->error_code = FUNC_4(VAR_14->sc, VAR_14);

}
