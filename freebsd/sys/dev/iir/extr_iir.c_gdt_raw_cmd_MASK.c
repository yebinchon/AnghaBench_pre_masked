
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; int status; int target_lun; int target_id; scalar_t__ ccb_sim_ptr; } ;
struct TYPE_4__ {int cdb_bytes; } ;
struct TYPE_5__ {int dxfer_len; int cdb_len; TYPE_1__ cdb_io; } ;
union ccb {TYPE_3__ ccb_h; TYPE_2__ csio; } ;
typedef int u_int32_t ;
struct scsi_sense_data {int dummy; } ;
struct gdt_softc {scalar_t__ sc_cmd_off; scalar_t__ sc_ic_all_size; scalar_t__ sc_cmd_cnt; int sc_buffer_dmat; int (* sc_set_sema0 ) (struct gdt_softc*) ;int sc_devnode; } ;
struct gdt_ccb {int gc_cmd_index; int gc_scratch_busbase; union ccb* gc_ccb; int gc_dmamap; int * gc_cmd; int gc_flags; int gc_service; } ;
struct cam_sim {int dummy; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*) ;
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
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int ,union ccb*,int ,struct gdt_ccb*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 struct gdt_ccb* FUNC_8 (struct gdt_softc*) ;
 int VAR_26 ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (struct gdt_softc*) ;
 int FUNC_11 (struct cam_sim*,int) ;

__attribute__((used)) static struct gdt_ccb *
FUNC_12(struct gdt_softc *VAR_27, union ccb *VAR_28)
{
    struct gdt_ccb *VAR_29;
    struct cam_sim *VAR_30;
    int VAR_31;

    FUNC_0(VAR_11, ("gdt_raw_cmd(%p, %p)\n", VAR_27, VAR_28));

    if (FUNC_9(VAR_7 + VAR_22, sizeof(u_int32_t)) +
        VAR_27->sc_cmd_off + VAR_10 >
        VAR_27->sc_ic_all_size) {
        FUNC_0(VAR_12, ("%s: gdt_raw_cmd(): DPMEM overflow\n",
  FUNC_5(VAR_27->sc_devnode)));
        return (((void*)0));
    }

    VAR_29 = FUNC_8(VAR_27);
    if (VAR_29 == ((void*)0)) {
        FUNC_0(VAR_12, ("%s: No free command index found\n",
  FUNC_5(VAR_27->sc_devnode)));
        return (VAR_29);
    }
    FUNC_3(VAR_29->gc_cmd, VAR_6);
    VAR_30 = (struct cam_sim *)VAR_28->ccb_h.ccb_sim_ptr;
    VAR_29->gc_ccb = VAR_28;
    VAR_29->gc_service = VAR_24;
    VAR_29->gc_flags = VAR_13;

    if (VAR_27->sc_cmd_cnt == 0)
        VAR_27->sc_set_sema0(VAR_27);
    FUNC_7(VAR_29->gc_cmd + VAR_4,
              VAR_29->gc_cmd_index);
    FUNC_6(VAR_29->gc_cmd + VAR_5, VAR_25);

    FUNC_7(VAR_29->gc_cmd + VAR_7 + VAR_17,
              (VAR_28->ccb_h.flags & VAR_1) == VAR_0 ?
              VAR_8 : VAR_9);
    FUNC_7(VAR_29->gc_cmd + VAR_7 + VAR_19,
              VAR_28->csio.dxfer_len);
    FUNC_7(VAR_29->gc_cmd + VAR_7 + VAR_15,
              VAR_28->csio.cdb_len);
    FUNC_1(VAR_28->csio.cdb_io.cdb_bytes, VAR_29->gc_cmd + VAR_7 + VAR_16,
          VAR_28->csio.cdb_len);
    VAR_29->gc_cmd[VAR_7 + VAR_23] =
        VAR_28->ccb_h.target_id;
    VAR_29->gc_cmd[VAR_7 + VAR_18] =
        VAR_28->ccb_h.target_lun;
    VAR_29->gc_cmd[VAR_7 + VAR_14] =
        FUNC_4(VAR_30);
    FUNC_7(VAR_29->gc_cmd + VAR_7 + VAR_21,
              sizeof(struct scsi_sense_data));
    FUNC_7(VAR_29->gc_cmd + VAR_7 + VAR_20,
              VAR_29->gc_scratch_busbase);

    VAR_31 = FUNC_2(VAR_27->sc_buffer_dmat,
           VAR_29->gc_dmamap,
           VAR_28,
           VAR_26,
           VAR_29, 0);
    if (VAR_31 == VAR_3) {
        FUNC_11(VAR_30, 1);
        VAR_29->gc_ccb->ccb_h.status |= VAR_2;
    }

    return (VAR_29);
}
