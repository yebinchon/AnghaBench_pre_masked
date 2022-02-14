
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int scsi_status; char sense_data; int sense_len; scalar_t__ resid; } ;
struct TYPE_14__ {int flags; int status; int target_id; } ;
union ccb {TYPE_3__ csio; TYPE_7__ ccb_h; } ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef char scsi_sense_data ;
struct TYPE_8__ {int service; int status; int info; int hostdrive; int ionode; } ;
struct TYPE_9__ {TYPE_1__ sync; } ;
struct TYPE_12__ {int size; TYPE_2__ eu; } ;
struct gdt_softc {int sc_status; int sc_info; TYPE_5__ sc_dvr; int sc_hanum; int sc_buffer_dmat; int sc_ccb_queue; int (* sc_release_event ) (struct gdt_softc*) ;int (* sc_copy_cmd ) (struct gdt_softc*,struct gdt_ccb*) ;scalar_t__ sc_cmd_cnt; scalar_t__ sc_cmd_off; int (* sc_set_sema0 ) (struct gdt_softc*) ;int sc_devnode; scalar_t__ (* sc_test_busy ) (struct gdt_softc*) ;} ;
struct gdt_ccb {char* gc_scratch; char* gc_cmd; int gc_service; int gc_cmd_index; int gc_scratch_busbase; int gc_dmamap; int gc_timeout; void* gc_cmd_len; void* gc_flags; union ccb* gc_ccb; } ;
struct TYPE_13__ {scalar_t__ req_queue_act; scalar_t__ req_queue_max; int io_count_act; } ;
struct TYPE_11__ {int tqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_2 (int *,TYPE_7__*,int ) ;
 int FUNC_3 (int*,char*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int) ;
 struct gdt_ccb* FUNC_12 (struct gdt_softc*) ;
 TYPE_6__ VAR_37 ;
 int FUNC_13 (int ,int,TYPE_5__*) ;
 int FUNC_14 (char*,...) ;
 void* FUNC_15 (int,int) ;
 int FUNC_16 (char*,int ,int,int ,int,int,int ) ;
 TYPE_4__ VAR_38 ;
 scalar_t__ FUNC_17 (struct gdt_softc*) ;
 int FUNC_18 (struct gdt_softc*) ;
 int FUNC_19 (struct gdt_softc*,struct gdt_ccb*) ;
 int FUNC_20 (struct gdt_softc*) ;
 scalar_t__ FUNC_21 (struct gdt_softc*) ;
 int FUNC_22 (struct gdt_softc*) ;
 int FUNC_23 (struct gdt_softc*,struct gdt_ccb*) ;
 int FUNC_24 (struct gdt_softc*) ;
 int FUNC_25 (union ccb*) ;

int
FUNC_26(struct gdt_softc *VAR_39, int VAR_40,
               u_int8_t VAR_41, struct gdt_ccb *VAR_42)
{
    union ccb *VAR_43;

    FUNC_1(VAR_15,
                ("gdt_sync_event(%p, %d, %d, %p)\n", VAR_39,VAR_40,VAR_41,VAR_42));

    VAR_43 = VAR_42->gc_ccb;

    if (VAR_40 == VAR_19) {
        u_int32_t VAR_44;

        VAR_44 = FUNC_9(VAR_42->gc_scratch + VAR_27);
        if (VAR_44)
            if (!(VAR_42->gc_scratch[VAR_24] &&
                  VAR_42->gc_scratch[VAR_25])) {
                VAR_42->gc_scratch[VAR_28 + VAR_44] = '\0';
                FUNC_14("%s",&VAR_42->gc_scratch[VAR_28]);
            }

        if (VAR_42->gc_scratch[VAR_25] &&
            !VAR_42->gc_scratch[VAR_24]) {
            while (VAR_39->sc_test_busy(VAR_39))
                FUNC_0(1);
            FUNC_6(VAR_42->gc_cmd, VAR_12);
            VAR_42 = FUNC_12(VAR_39);
            if (VAR_42 == ((void*)0)) {
                FUNC_8(VAR_39->sc_devnode, "No free command index found\n");
                return (1);
            }
            VAR_42->gc_service = VAR_40;
            VAR_42->gc_flags = VAR_17;
            FUNC_11(VAR_42->gc_cmd + VAR_10,
                      VAR_42->gc_cmd_index);
            FUNC_10(VAR_42->gc_cmd + VAR_11, VAR_18);
            FUNC_11(VAR_42->gc_cmd + VAR_13 + VAR_21,
                      VAR_42->gc_scratch[VAR_26]);
            FUNC_11(VAR_42->gc_cmd + VAR_13 + VAR_20,
                      VAR_42->gc_scratch_busbase);
            VAR_39->sc_set_sema0(VAR_39);
            VAR_39->sc_cmd_off = 0;
            VAR_42->gc_cmd_len = FUNC_15(VAR_13 + VAR_22,
                                      sizeof(u_int32_t));
            VAR_39->sc_cmd_cnt = 0;
            VAR_39->sc_copy_cmd(VAR_39, VAR_42);
            VAR_39->sc_release_event(VAR_39);
            return (0);
        }

        if (VAR_42->gc_scratch[VAR_24] &&
            FUNC_9(VAR_42->gc_scratch + VAR_23)) {

            if (FUNC_9(VAR_42->gc_scratch + VAR_23) == 1) {
                FUNC_11(VAR_42->gc_scratch + VAR_23, 0);
                FUNC_11(VAR_42->gc_scratch + VAR_27, 1);
                VAR_42->gc_scratch[VAR_28] = 0;
            } else {
                FUNC_11(VAR_42->gc_scratch + VAR_23,
                          FUNC_9(VAR_42->gc_scratch + VAR_23) - 2);
                FUNC_11(VAR_42->gc_scratch + VAR_27, 2);
                VAR_42->gc_scratch[VAR_28] = 1;
                VAR_42->gc_scratch[VAR_28 + 1] = 0;
            }
            VAR_42->gc_scratch[VAR_25] = 0;
            VAR_42->gc_scratch[VAR_24] = 0;
            while (VAR_39->sc_test_busy(VAR_39))
                FUNC_0(1);
            FUNC_6(VAR_42->gc_cmd, VAR_12);
            VAR_42 = FUNC_12(VAR_39);
            if (VAR_42 == ((void*)0)) {
                FUNC_8(VAR_39->sc_devnode, "No free command index found\n");
                return (1);
            }
            VAR_42->gc_service = VAR_40;
            VAR_42->gc_flags = VAR_17;
            FUNC_11(VAR_42->gc_cmd + VAR_10,
                      VAR_42->gc_cmd_index);
            FUNC_10(VAR_42->gc_cmd + VAR_11, VAR_32);
            FUNC_11(VAR_42->gc_cmd + VAR_13 + VAR_21,
                      VAR_42->gc_scratch[VAR_26]);
            FUNC_11(VAR_42->gc_cmd + VAR_13 + VAR_20,
                      VAR_42->gc_scratch_busbase);
            VAR_39->sc_set_sema0(VAR_39);
            VAR_39->sc_cmd_off = 0;
            VAR_42->gc_cmd_len = FUNC_15(VAR_13 + VAR_22,
                                      sizeof(u_int32_t));
            VAR_39->sc_cmd_cnt = 0;
            VAR_39->sc_copy_cmd(VAR_39, VAR_42);
            VAR_39->sc_release_event(VAR_39);
            return (0);
        }
        FUNC_14("\n");
        return (0);
    } else {
 FUNC_7(&VAR_42->gc_timeout);
        if (VAR_39->sc_status == VAR_29) {
            FUNC_1(VAR_14, ("gdt_sync_event(%p) gccb %p busy\n",
                                      VAR_39, VAR_42));
            FUNC_2(&VAR_39->sc_ccb_queue, &VAR_43->ccb_h, VAR_38.tqe);
            ++VAR_37.req_queue_act;
            if (VAR_37.req_queue_act > VAR_37.req_queue_max)
                VAR_37.req_queue_max = VAR_37.req_queue_act;
            return (2);
        }

        FUNC_4(VAR_39->sc_buffer_dmat, VAR_42->gc_dmamap,
            (VAR_43->ccb_h.flags & VAR_5) == VAR_4 ?
            VAR_0 : VAR_1);
        FUNC_5(VAR_39->sc_buffer_dmat, VAR_42->gc_dmamap);

        VAR_43->csio.resid = 0;
        if (VAR_39->sc_status == VAR_30) {
            VAR_43->ccb_h.status |= VAR_6;
            VAR_43->ccb_h.status &= ~VAR_8;
        } else {

            if (VAR_42->gc_service == VAR_9) {
                struct scsi_sense_data *VAR_45;

                VAR_43->ccb_h.status |= VAR_7 | VAR_2;
                VAR_43->ccb_h.status &= ~VAR_8;
                VAR_43->csio.scsi_status = VAR_33;
                FUNC_6(&VAR_43->csio.sense_data, VAR_43->csio.sense_len);
                VAR_45 = &VAR_43->csio.sense_data;
                FUNC_16(VAR_45,
                                                     VAR_36,
                                                      1,
                                                  VAR_35,
                                            0x4,
                                             0x01,
                                    VAR_34);

                VAR_39->sc_dvr.size = sizeof(VAR_39->sc_dvr.eu.sync);
                VAR_39->sc_dvr.eu.sync.ionode = VAR_39->sc_hanum;
                VAR_39->sc_dvr.eu.sync.service = VAR_40;
                VAR_39->sc_dvr.eu.sync.status = VAR_39->sc_status;
                VAR_39->sc_dvr.eu.sync.info = VAR_39->sc_info;
                VAR_39->sc_dvr.eu.sync.hostdrive = VAR_43->ccb_h.target_id;
                if (VAR_39->sc_status >= 0x8000)
                    FUNC_13(VAR_16, 0, &VAR_39->sc_dvr);
                else
                    FUNC_13(VAR_16, VAR_40, &VAR_39->sc_dvr);
            } else {

                if (VAR_39->sc_status != VAR_31 || VAR_39->sc_info >= 0x100) {
                    VAR_43->ccb_h.status = VAR_3;
                } else {
                    VAR_43->ccb_h.status |= VAR_7|VAR_2;
                    VAR_43->ccb_h.status &= ~VAR_8;
                    VAR_43->csio.scsi_status = VAR_39->sc_info;
                    FUNC_3(VAR_42->gc_scratch, &VAR_43->csio.sense_data,
                          VAR_43->csio.sense_len);
                }
            }
        }
        --VAR_37.io_count_act;
        FUNC_25(VAR_43);
    }
    return (0);
}
