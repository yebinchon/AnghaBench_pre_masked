
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int timeout; int status; scalar_t__ ccb_sim_ptr; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct gdt_softc {int (* sc_copy_cmd ) (struct gdt_softc*,struct gdt_ccb*) ;int sc_buffer_dmat; int sc_lock; } ;
struct gdt_ccb {scalar_t__ gc_service; int gc_timeout; int gc_dmamap; void* gc_cmd_len; scalar_t__ gc_cmd; union ccb* gc_ccb; } ;
struct cam_sim {int dummy; } ;
typedef int caddr_t ;
struct TYPE_6__ {int ds_addr; int ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_7__ {int sg_count_act; int sg_count_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ) ;
 struct gdt_softc* FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (scalar_t__,int) ;
 TYPE_4__ VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct gdt_softc*,struct gdt_ccb*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_21, bus_dma_segment_t *VAR_22, int VAR_23, int VAR_24)
{
    struct gdt_ccb *VAR_25;
    union ccb *VAR_26;
    struct gdt_softc *VAR_27;
    int VAR_28;

    VAR_25 = (struct gdt_ccb *)VAR_21;
    VAR_26 = VAR_25->gc_ccb;
    VAR_27 = FUNC_3((struct cam_sim *)VAR_26->ccb_h.ccb_sim_ptr);
    FUNC_5(&VAR_27->sc_lock, VAR_17);

    FUNC_0(VAR_10, ("gdtexecuteccb(%p, %p, %p, %d, %d)\n",
                            VAR_27, VAR_25, VAR_22, VAR_23, VAR_24));
    VAR_19.sg_count_act = VAR_23;
    if (VAR_23 > VAR_19.sg_count_max)
        VAR_19.sg_count_max = VAR_23;


    if (VAR_25->gc_service == VAR_5) {
        for (VAR_28 = 0; VAR_28 < VAR_23; ++VAR_28) {
            FUNC_4(VAR_25->gc_cmd + VAR_9 + VAR_8 +
                      VAR_28 * VAR_16 + VAR_15, VAR_22->ds_addr);
            FUNC_4(VAR_25->gc_cmd + VAR_9 + VAR_8 +
                      VAR_28 * VAR_16 + VAR_14, VAR_22->ds_len);
            VAR_22++;
        }
        FUNC_4(VAR_25->gc_cmd + VAR_9 + VAR_7,
                  VAR_23);
        FUNC_4(VAR_25->gc_cmd + VAR_9 + VAR_6,
                  0xffffffffUL);

        VAR_25->gc_cmd_len = FUNC_6(VAR_9 + VAR_8 +
                                  VAR_23 * VAR_16, sizeof(u_int32_t));
    } else {
        for (VAR_28 = 0; VAR_28 < VAR_23; ++VAR_28) {
            FUNC_4(VAR_25->gc_cmd + VAR_9 + VAR_12 +
                      VAR_28 * VAR_16 + VAR_15, VAR_22->ds_addr);
            FUNC_4(VAR_25->gc_cmd + VAR_9 + VAR_12 +
                      VAR_28 * VAR_16 + VAR_14, VAR_22->ds_len);
            VAR_22++;
        }
        FUNC_4(VAR_25->gc_cmd + VAR_9 + VAR_13,
                  VAR_23);
        FUNC_4(VAR_25->gc_cmd + VAR_9 + VAR_11,
                  0xffffffffUL);

        VAR_25->gc_cmd_len = FUNC_6(VAR_9 + VAR_12 +
                                  VAR_23 * VAR_16, sizeof(u_int32_t));
    }

    if (VAR_23 != 0) {
        FUNC_1(VAR_27->sc_buffer_dmat, VAR_25->gc_dmamap,
            (VAR_26->ccb_h.flags & VAR_3) == VAR_2 ?
            VAR_0 : VAR_1);
    }





    VAR_26->ccb_h.status |= VAR_4;

    FUNC_2(&VAR_25->gc_timeout, VAR_18 * VAR_26->ccb_h.timeout, 0,
      VAR_20, (caddr_t)VAR_25, 0);

    VAR_27->sc_copy_cmd(VAR_27, VAR_25);
}
