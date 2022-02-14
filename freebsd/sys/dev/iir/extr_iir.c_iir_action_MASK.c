
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int target_id; int target_lun; void* status; int func_code; struct cam_sim* ccb_sim_ptr; } ;
struct TYPE_10__ {void* status; } ;
struct ccb_pathinq {int version_num; int hba_inquiry; int target_sprt; int max_lun; int bus_id; int initiator_id; int base_transfer_speed; int transport_version; TYPE_1__ ccb_h; void* protocol_version; void* protocol; void* transport; int dev_name; int hba_vid; int sim_vid; int unit_number; int max_target; int hba_eng_cnt; int hba_misc; } ;
struct ccb_calc_geometry {int heads; int secs_per_track; int cylinders; int volume_size; } ;
struct ccb_trans_settings_spi {int sync_period; int sync_offset; int valid; int bus_width; int flags; } ;
struct TYPE_14__ {struct ccb_trans_settings_spi spi; } ;
struct ccb_trans_settings_scsi {int valid; int flags; } ;
struct TYPE_13__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {int transport_version; int type; void* transport; void* protocol_version; void* protocol; TYPE_5__ xport_specific; TYPE_4__ proto_specific; } ;
struct TYPE_11__ {int * cdb_bytes; } ;
struct TYPE_12__ {TYPE_2__ cdb_io; } ;
union ccb {TYPE_9__ ccb_h; struct ccb_pathinq cpi; struct ccb_calc_geometry ccg; struct ccb_trans_settings cts; TYPE_3__ csio; } ;
typedef int u_int32_t ;
struct gdt_softc {int sc_virt_bus; int sc_class; int* sc_bus_id; int sc_vendor; TYPE_6__* sc_hdr; int sc_ccb_queue; int sc_lock; } ;
struct cam_sim {int dummy; } ;
struct TYPE_17__ {scalar_t__ io_count_act; scalar_t__ io_count_max; int req_queue_act; int req_queue_max; } ;
struct TYPE_16__ {int tqe; } ;
struct TYPE_15__ {int hd_heads; int hd_secs; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int *,TYPE_9__*,int ) ;
 void* VAR_28 ;
 int FUNC_2 (struct cam_sim*) ;
 char* FUNC_3 (struct cam_sim*) ;
 scalar_t__ FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (struct gdt_softc*) ;
 TYPE_8__ VAR_29 ;
 int FUNC_7 (int *,int ) ;
 TYPE_7__ VAR_30 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (union ccb*) ;

__attribute__((used)) static void
FUNC_10( struct cam_sim *VAR_31, union ccb *VAR_32 )
{
    struct gdt_softc *VAR_33;
    int VAR_34, VAR_35, VAR_36;

    VAR_33 = (struct gdt_softc *)FUNC_4( VAR_31 );
    FUNC_7(&VAR_33->sc_lock, VAR_20);
    VAR_32->ccb_h.ccb_sim_ptr = VAR_31;
    VAR_34 = FUNC_2(VAR_31);
    VAR_35 = VAR_32->ccb_h.target_id;
    VAR_36 = VAR_32->ccb_h.target_lun;
    FUNC_0(VAR_12,
                ("iir_action(%p) func 0x%x cmd 0x%x bus %d target %d lun %d\n",
                 VAR_33, VAR_32->ccb_h.func_code, VAR_32->csio.cdb_io.cdb_bytes[0],
                 VAR_34, VAR_35, VAR_36));
    ++VAR_29.io_count_act;
    if (VAR_29.io_count_act > VAR_29.io_count_max)
        VAR_29.io_count_max = VAR_29.io_count_act;

    switch (VAR_32->ccb_h.func_code) {
      case 130:
        FUNC_1(&VAR_33->sc_ccb_queue, &VAR_32->ccb_h, VAR_30.tqe);
        ++VAR_29.req_queue_act;
        if (VAR_29.req_queue_act > VAR_29.req_queue_max)
            VAR_29.req_queue_max = VAR_29.req_queue_act;
        FUNC_6(VAR_33);
        break;
      case 131:
      case 136:

        VAR_32->ccb_h.status = VAR_2;
        --VAR_29.io_count_act;
        FUNC_9(VAR_32);
        break;
      case 129:
        VAR_32->ccb_h.status = VAR_0;
        --VAR_29.io_count_act;
        FUNC_9(VAR_32);
        break;
      case 134:

          {
              struct ccb_trans_settings *VAR_37 = &VAR_32->cts;
              struct ccb_trans_settings_scsi *VAR_38 = &VAR_37->proto_specific.scsi;
              struct ccb_trans_settings_spi *VAR_39 = &VAR_37->xport_specific.spi;

              VAR_37->protocol = VAR_25;
              VAR_37->protocol_version = VAR_26;
              VAR_37->transport = VAR_28;
              VAR_37->transport_version = 2;

              if (VAR_37->type == VAR_10) {
    VAR_39->flags = VAR_5;
                  VAR_38->flags = VAR_3;
                  VAR_39->bus_width = VAR_21;
                  VAR_39->sync_period = 25;
                  if (VAR_39->sync_period != 0)
                      VAR_39->sync_offset = 15;

                  VAR_39->valid = VAR_9
                      | VAR_8
                      | VAR_6
                      | VAR_7;
                  VAR_38->valid = VAR_4;
                  VAR_32->ccb_h.status = VAR_1;
              } else {
                  VAR_32->ccb_h.status = VAR_0;
              }
              --VAR_29.io_count_act;
              FUNC_9(VAR_32);
              break;
          }
      case 135:
          {
              struct ccb_calc_geometry *VAR_40;
              u_int32_t VAR_41;

              VAR_40 = &VAR_32->ccg;
              VAR_40->heads = VAR_33->sc_hdr[VAR_35].hd_heads;
              VAR_40->secs_per_track = VAR_33->sc_hdr[VAR_35].hd_secs;
              VAR_41 = VAR_40->heads * VAR_40->secs_per_track;
              VAR_40->cylinders = VAR_40->volume_size / VAR_41;
              VAR_32->ccb_h.status = VAR_1;
              --VAR_29.io_count_act;
              FUNC_9(VAR_32);
              break;
          }
      case 132:
          {

              VAR_32->ccb_h.status = VAR_1;
              --VAR_29.io_count_act;
              FUNC_9(VAR_32);
              break;
          }
      case 128:

        VAR_32->ccb_h.status = VAR_2;
        --VAR_29.io_count_act;
        FUNC_9(VAR_32);
        break;
      case 133:
          {
              struct ccb_pathinq *VAR_42 = &VAR_32->cpi;

              VAR_42->version_num = 1;
              VAR_42->hba_inquiry = VAR_22|VAR_23;
              VAR_42->hba_inquiry |= VAR_24;
              VAR_42->target_sprt = 1;
              VAR_42->hba_misc = 0;
              VAR_42->hba_eng_cnt = 0;
              if (VAR_34 == VAR_33->sc_virt_bus)
                  VAR_42->max_target = VAR_17 - 1;
              else if (VAR_33->sc_class & VAR_14)
                  VAR_42->max_target = VAR_16 - 1;
              else
                  VAR_42->max_target = VAR_15 - 1;
              VAR_42->max_lun = 7;
              VAR_42->unit_number = FUNC_5(VAR_31);
              VAR_42->bus_id = VAR_34;
              VAR_42->initiator_id =
                  (VAR_34 == VAR_33->sc_virt_bus ? 127 : VAR_33->sc_bus_id[VAR_34]);
              VAR_42->base_transfer_speed = 3300;
              FUNC_8(VAR_42->sim_vid, "FreeBSD", VAR_27);
              if (VAR_33->sc_vendor == VAR_19)
                  FUNC_8(VAR_42->hba_vid, "Intel Corp.", VAR_18);
              else
                  FUNC_8(VAR_42->hba_vid, "ICP vortex ", VAR_18);
              FUNC_8(VAR_42->dev_name, FUNC_3(VAR_31), VAR_11);
              VAR_42->transport = VAR_28;
              VAR_42->transport_version = 2;
              VAR_42->protocol = VAR_25;
              VAR_42->protocol_version = VAR_26;
              VAR_42->ccb_h.status = VAR_1;
              --VAR_29.io_count_act;
              FUNC_9(VAR_32);
              break;
          }
      default:
        FUNC_0(VAR_13, ("gdt_next(%p) cmd 0x%x invalid\n",
                                    VAR_33, VAR_32->ccb_h.func_code));
        VAR_32->ccb_h.status = VAR_2;
        --VAR_29.io_count_act;
        FUNC_9(VAR_32);
        break;
    }
}
