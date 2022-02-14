
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int func_code; void* status; } ;
struct TYPE_14__ {int version_num; int base_transfer_speed; int transport_version; int maxio; void* protocol_version; void* protocol; void* transport; int dev_name; int hba_vid; int sim_vid; int initiator_id; int bus_id; int unit_number; int max_lun; int max_target; int hba_eng_cnt; int hba_misc; int target_sprt; int hba_inquiry; } ;
struct TYPE_16__ {union ccb* block_size; } ;
struct TYPE_11__ {int flags; int valid; } ;
struct TYPE_12__ {TYPE_3__ scsi; } ;
struct TYPE_9__ {int flags; int valid; } ;
struct TYPE_10__ {TYPE_1__ spi; } ;
struct TYPE_13__ {int transport_version; TYPE_4__ proto_specific; TYPE_2__ xport_specific; void* transport; void* protocol_version; void* protocol; } ;
union ccb {TYPE_7__ ccb_h; TYPE_6__ cpi; TYPE_8__ ccg; TYPE_5__ cts; } ;
struct tws_softc {int dummy; } ;
struct cam_sim {TYPE_7__ ccb_h; TYPE_6__ cpi; TYPE_8__ ccg; TYPE_5__ cts; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct tws_softc*,char*,union ccb*,union ccb*) ;
 void* VAR_17 ;







 int FUNC_1 (TYPE_8__*,int) ;
 int FUNC_2 (union ccb*) ;
 char* FUNC_3 (union ccb*) ;
 scalar_t__ FUNC_4 (union ccb*) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (struct tws_softc*,union ccb*) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(struct cam_sim *VAR_18, union ccb *VAR_19)
{
    struct tws_softc *VAR_20 = (struct tws_softc *)FUNC_4(VAR_18);


    switch( VAR_19->ccb_h.func_code ) {
        case 129:
        {
            if ( FUNC_7(VAR_20, VAR_19) )
                FUNC_0(VAR_20, "execute scsi failed", 0, 0);
            break;
        }
        case 134:
        {
            FUNC_0(VAR_20, "abort i/o", 0, 0);
            VAR_19->ccb_h.status = VAR_3;
            FUNC_8(VAR_19);
            break;
        }
        case 130:
        {
            FUNC_0(VAR_20, "reset bus", VAR_18, VAR_19);
            break;
        }
        case 128:
        {
            FUNC_0(VAR_20, "set tran settings", VAR_18, VAR_19);
            VAR_19->ccb_h.status = VAR_0;
            FUNC_8(VAR_19);

            break;
        }
        case 132:
        {
            FUNC_0(VAR_20, "get tran settings", VAR_18, VAR_19);

            VAR_19->cts.protocol = VAR_10;
            VAR_19->cts.protocol_version = VAR_11;
            VAR_19->cts.transport = VAR_17;
            VAR_19->cts.transport_version = 2;

            VAR_19->cts.xport_specific.spi.valid = VAR_7;
            VAR_19->cts.xport_specific.spi.flags = VAR_6;
            VAR_19->cts.proto_specific.scsi.valid = VAR_5;
            VAR_19->cts.proto_specific.scsi.flags = VAR_4;
            VAR_19->ccb_h.status = VAR_1;
            FUNC_8(VAR_19);

            break;
        }
        case 133:
        {
            FUNC_0(VAR_20, "calc geometry(ccb,block-size)", VAR_19,
                                          VAR_19->ccg.block_size);
            FUNC_1(&VAR_19->ccg, 1 );
            FUNC_8(VAR_19);

            break;
        }
        case 131:
        {
            FUNC_0(VAR_20, "path inquiry", VAR_18, VAR_19);
            VAR_19->cpi.version_num = 1;
            VAR_19->cpi.hba_inquiry = 0;
            VAR_19->cpi.target_sprt = 0;
            VAR_19->cpi.hba_misc = 0;
            VAR_19->cpi.hba_eng_cnt = 0;
            VAR_19->cpi.max_target = VAR_15;
            VAR_19->cpi.max_lun = VAR_14 - 1;
            VAR_19->cpi.unit_number = FUNC_5(VAR_18);
            VAR_19->cpi.bus_id = FUNC_2(VAR_18);
            VAR_19->cpi.initiator_id = VAR_16;
            VAR_19->cpi.base_transfer_speed = 6000000;
            FUNC_6(VAR_19->cpi.sim_vid, "FreeBSD", VAR_12);
            FUNC_6(VAR_19->cpi.hba_vid, "3ware", VAR_9);
            FUNC_6(VAR_19->cpi.dev_name, FUNC_3(VAR_18), VAR_8);
            VAR_19->cpi.transport = VAR_17;
            VAR_19->cpi.transport_version = 2;
            VAR_19->cpi.protocol = VAR_10;
            VAR_19->cpi.protocol_version = VAR_11;
            VAR_19->cpi.maxio = VAR_13;
            VAR_19->ccb_h.status = VAR_1;
            FUNC_8(VAR_19);

            break;
        }
        default:
            FUNC_0(VAR_20, "default", VAR_18, VAR_19);
            VAR_19->ccb_h.status = VAR_2;
            FUNC_8(VAR_19);
            break;
    }
}
