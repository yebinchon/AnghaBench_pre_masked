
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ target_id; int status; scalar_t__ ccb_sim_ptr; } ;
struct TYPE_4__ {scalar_t__* cdb_bytes; } ;
struct TYPE_5__ {int cdb_len; TYPE_1__ cdb_io; } ;
union ccb {TYPE_3__ ccb_h; TYPE_2__ csio; } ;
typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct scsi_rw_6 {int length; int addr; } ;
struct scsi_rw_10 {int length; int addr; } ;
struct gdt_softc {scalar_t__ sc_cmd_off; scalar_t__ sc_ic_all_size; scalar_t__ sc_cmd_cnt; int sc_state; int sc_buffer_dmat; int (* sc_set_sema0 ) (struct gdt_softc*) ;int sc_devnode; } ;
struct gdt_ccb {int gc_cmd_index; union ccb* gc_ccb; int gc_dmamap; scalar_t__ gc_cmd; int gc_flags; int gc_service; } ;
struct cam_sim {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (int ,int ,union ccb*,int ,struct gdt_ccb*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 struct gdt_ccb* FUNC_6 (struct gdt_softc*) ;
 int VAR_23 ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct gdt_softc*) ;
 int FUNC_12 (struct cam_sim*,int) ;

__attribute__((used)) static struct gdt_ccb *
FUNC_13(struct gdt_softc *VAR_24, union ccb *VAR_25)
{
    struct gdt_ccb *VAR_26;
    struct cam_sim *VAR_27;
    u_int8_t *VAR_28;
    u_int16_t VAR_29;
    u_int32_t VAR_30, VAR_31;
    int VAR_32;

    FUNC_0(VAR_12, ("gdt_cache_cmd(%p, %p)\n", VAR_24, VAR_25));

    if (FUNC_7(VAR_10 + VAR_6, sizeof(u_int32_t)) +
        VAR_24->sc_cmd_off + VAR_11 >
        VAR_24->sc_ic_all_size) {
        FUNC_0(VAR_14, ("%s: gdt_cache_cmd(): DPMEM overflow\n",
  FUNC_3(VAR_24->sc_devnode)));
        return (((void*)0));
    }

    VAR_26 = FUNC_6(VAR_24);
    if (VAR_26 == ((void*)0)) {
        FUNC_0(VAR_13, ("%s: No free command index found\n",
  FUNC_3(VAR_24->sc_devnode)));
        return (VAR_26);
    }
    FUNC_2(VAR_26->gc_cmd, VAR_9);
    VAR_27 = (struct cam_sim *)VAR_25->ccb_h.ccb_sim_ptr;
    VAR_26->gc_ccb = VAR_25;
    VAR_26->gc_service = VAR_2;
    VAR_26->gc_flags = VAR_15;

    if (VAR_24->sc_cmd_cnt == 0)
        VAR_24->sc_set_sema0(VAR_24);
    FUNC_5(VAR_26->gc_cmd + VAR_7,
              VAR_26->gc_cmd_index);
    VAR_28 = VAR_25->csio.cdb_io.cdb_bytes;
    VAR_29 = (*VAR_28 == VAR_22 || *VAR_28 == VAR_21) ? VAR_18 : VAR_16;
    if ((VAR_24->sc_state & VAR_17) && VAR_29 == VAR_18)
        VAR_29 = VAR_19;
    FUNC_4(VAR_26->gc_cmd + VAR_8, VAR_29);

    FUNC_4(VAR_26->gc_cmd + VAR_10 + VAR_5,
              VAR_25->ccb_h.target_id);
    if (VAR_25->csio.cdb_len == 6) {
        struct scsi_rw_6 *VAR_33 = (struct scsi_rw_6 *)VAR_28;
        VAR_30 = FUNC_9(VAR_33->addr) & ((VAR_20<<16) | 0xffff);
        VAR_31 = VAR_33->length ? VAR_33->length : 0x100;
    } else {
        struct scsi_rw_10 *VAR_34 = (struct scsi_rw_10 *)VAR_28;
        VAR_30 = FUNC_10(VAR_34->addr);
        VAR_31 = FUNC_8(VAR_34->length);
    }
    FUNC_5(VAR_26->gc_cmd + VAR_10 + VAR_4,
              VAR_30);
    FUNC_5(VAR_26->gc_cmd + VAR_10 + VAR_3,
              VAR_31);

    VAR_32 = FUNC_1(VAR_24->sc_buffer_dmat,
                                VAR_26->gc_dmamap,
                                VAR_25,
                                VAR_23,
                                VAR_26, 0);
    if (VAR_32 == VAR_1) {
        FUNC_12(VAR_27, 1);
        VAR_26->gc_ccb->ccb_h.status |= VAR_0;
    }
    return (VAR_26);
}
