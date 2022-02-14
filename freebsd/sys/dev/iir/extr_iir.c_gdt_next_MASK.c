
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ccb_hdr {int target_id; int target_lun; int flags; int status; scalar_t__ ccb_sim_ptr; } ;
struct ccb_scsiio {int cdb_len; } ;
union ccb {struct ccb_hdr ccb_h; struct ccb_scsiio csio; } ;
typedef scalar_t__ u_int8_t ;
struct gdt_softc {int sc_state; scalar_t__ sc_cmd_cnt; scalar_t__ sc_cmd_off; int sc_virt_bus; int (* sc_release_event ) (struct gdt_softc*) ;int sc_ccb_queue; TYPE_1__* sc_hdr; int sc_ucmd_queue; scalar_t__ (* sc_test_busy ) (struct gdt_softc*) ;int sc_lock; } ;
struct gdt_ccb {int dummy; } ;
struct cam_sim {int dummy; } ;
typedef struct ccb_hdr gdt_ucmd_t ;
struct TYPE_6__ {scalar_t__ req_queue_act; scalar_t__ req_queue_max; int io_count_act; } ;
struct TYPE_5__ {int tqe; } ;
struct TYPE_4__ {int hd_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct ccb_hdr* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ccb_hdr*,int ) ;
 int FUNC_4 (int *,struct ccb_hdr*,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (struct cam_sim*) ;
 struct gdt_ccb* FUNC_6 (struct gdt_softc*,union ccb*) ;
 int FUNC_7 (struct gdt_softc*,union ccb*) ;
 struct gdt_ccb* FUNC_8 (struct gdt_softc*,struct ccb_hdr*) ;
 struct gdt_ccb* FUNC_9 (struct gdt_softc*,union ccb*) ;
 TYPE_3__ VAR_14 ;
 int FUNC_10 (struct gdt_softc*,struct gdt_ccb*,int ) ;
 int VAR_15 ;
 int FUNC_11 (int *,int ) ;
 scalar_t__* FUNC_12 (struct ccb_scsiio*) ;
 TYPE_2__ VAR_16 ;
 scalar_t__ FUNC_13 (struct gdt_softc*) ;
 scalar_t__ FUNC_14 (struct gdt_softc*) ;
 int FUNC_15 (struct gdt_softc*) ;
 int FUNC_16 (union ccb*) ;

void
FUNC_17(struct gdt_softc *VAR_17)
{
    union ccb *VAR_18;
    gdt_ucmd_t *VAR_19;
    struct cam_sim *VAR_20;
    int VAR_21, VAR_22, VAR_23;
    int VAR_24;

    struct ccb_scsiio *VAR_25;
    struct ccb_hdr *VAR_26;
    struct gdt_ccb *VAR_27 = ((void*)0);
    u_int8_t VAR_28;

    FUNC_1(VAR_4, ("gdt_next(%p)\n", VAR_17));

    FUNC_11(&VAR_17->sc_lock, VAR_8);
    if (VAR_17->sc_test_busy(VAR_17)) {
        if (!(VAR_17->sc_state & VAR_6)) {
            return;
        }
        while (VAR_17->sc_test_busy(VAR_17))
            FUNC_0(1);
    }

    VAR_17->sc_cmd_cnt = VAR_17->sc_cmd_off = 0;
    VAR_24 = VAR_11;
    for (;;) {

        if (!FUNC_2(&VAR_17->sc_ucmd_queue) &&
            !FUNC_2(&VAR_17->sc_ccb_queue))
            break;


        VAR_19 = FUNC_2(&VAR_17->sc_ucmd_queue);
        if (VAR_19 != ((void*)0)) {
            FUNC_4(&VAR_17->sc_ucmd_queue, VAR_19, VAR_15);
            if ((VAR_27 = FUNC_8(VAR_17, VAR_19)) == ((void*)0)) {
                FUNC_3(&VAR_17->sc_ucmd_queue, VAR_19, VAR_15);
                break;
            }
            break;

        }


        VAR_18 = (union ccb *)FUNC_2(&VAR_17->sc_ccb_queue);

        VAR_20 = (struct cam_sim *)VAR_18->ccb_h.ccb_sim_ptr;
        VAR_21 = FUNC_5(VAR_20);
        VAR_22 = VAR_18->ccb_h.target_id;
        VAR_23 = VAR_18->ccb_h.target_lun;

        FUNC_4(&VAR_17->sc_ccb_queue, &VAR_18->ccb_h, VAR_16.tqe);
        --VAR_14.req_queue_act;

        FUNC_1(VAR_4, ("XPT_SCSI_IO flags 0x%x)\n",
                                  VAR_18->ccb_h.flags));
        VAR_25 = &VAR_18->csio;
        VAR_26 = &VAR_18->ccb_h;
        VAR_28 = FUNC_12(VAR_25)[0];

        if (VAR_25->cdb_len > 12 || (VAR_26->flags & VAR_0)) {
            VAR_26->status = VAR_2;
            --VAR_14.io_count_act;
            FUNC_16(VAR_18);
        } else if (VAR_21 != VAR_17->sc_virt_bus) {

            if ((VAR_27 = FUNC_9(VAR_17, VAR_18)) == ((void*)0)) {
                FUNC_3(&VAR_17->sc_ccb_queue, &VAR_18->ccb_h,
                                  VAR_16.tqe);
                ++VAR_14.req_queue_act;
                if (VAR_14.req_queue_act > VAR_14.req_queue_max)
                    VAR_14.req_queue_max = VAR_14.req_queue_act;
                VAR_24 = VAR_3;
            }
        } else if (VAR_22 >= VAR_5 ||
                   !VAR_17->sc_hdr[VAR_22].hd_present || VAR_23 != 0) {
            VAR_26->status = VAR_1;
            --VAR_14.io_count_act;
            FUNC_16(VAR_18);
        } else {

            if (VAR_28 == VAR_10 || VAR_28 == VAR_13 ||
                VAR_28 == VAR_9 || VAR_28 == VAR_12) {
                if ((VAR_27 = FUNC_6(VAR_17, VAR_18)) == ((void*)0)) {
                    FUNC_3(&VAR_17->sc_ccb_queue, &VAR_18->ccb_h,
                                      VAR_16.tqe);
                    ++VAR_14.req_queue_act;
                    if (VAR_14.req_queue_act > VAR_14.req_queue_max)
                        VAR_14.req_queue_max = VAR_14.req_queue_act;
                    VAR_24 = VAR_3;
                }
            } else {
                FUNC_7(VAR_17, VAR_18);
            }
        }
        if ((VAR_17->sc_state & VAR_6) || !VAR_24)
            break;
    }
    if (VAR_17->sc_cmd_cnt > 0)
        VAR_17->sc_release_event(VAR_17);

    if ((VAR_17->sc_state & VAR_6) && VAR_17->sc_cmd_cnt > 0) {
        FUNC_10(VAR_17, VAR_27, VAR_7);
    }
}
