
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint32_t ;
struct scsi_report_luns_lundata {int dummy; } ;
struct scsi_report_luns_data {int length; TYPE_1__* luns; } ;
struct scsi_report_luns {int select_report; int length; } ;
struct ctl_softc {int ctl_lock; struct ctl_lun** ctl_luns; } ;
struct TYPE_4__ {int flags; int nexus; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ kern_data_ptr; scalar_t__ cdb; } ;
struct ctl_port {int lun_map_size; scalar_t__ lun_map; } ;
struct ctl_lun {int lun_lock; } ;
struct TYPE_3__ {int lundata; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 struct ctl_port* FUNC_2 (struct ctl_scsiio*) ;
 int VAR_1 ;
 struct ctl_softc* FUNC_3 (struct ctl_scsiio*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ctl_lun*,int,int ) ;
 int VAR_7 ;
 int FUNC_6 (union ctl_io*) ;
 int FUNC_7 (union ctl_io*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct ctl_port*,int) ;
 int VAR_8 ;
 int FUNC_11 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_12 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_13 (int,int ,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,int ) ;

int
FUNC_19(struct ctl_scsiio *VAR_9)
{
 struct ctl_softc *VAR_10 = FUNC_3(VAR_9);
 struct ctl_port *VAR_11 = FUNC_2(VAR_9);
 struct ctl_lun *VAR_12, *VAR_13 = FUNC_1(VAR_9);
 struct scsi_report_luns *VAR_14;
 struct scsi_report_luns_data *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 uint32_t VAR_20, VAR_21;
 uint32_t VAR_22, VAR_23, VAR_24;

 VAR_19 = VAR_1;
 VAR_14 = (struct scsi_report_luns *)VAR_9->cdb;

 FUNC_0(("ctl_report_luns\n"));

 VAR_17 = 0;
 VAR_18 = VAR_11->lun_map ? VAR_11->lun_map_size : VAR_8;
 FUNC_15(&VAR_10->ctl_lock);
 for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++) {
  if (FUNC_10(VAR_11, VAR_23) != VAR_6)
   VAR_17++;
 }
 FUNC_16(&VAR_10->ctl_lock);

 switch (VAR_14->select_report) {
 case 130:
 case 132:
 case 129:
  break;
 case 128:
 case 133:
 case 131:
  VAR_17 = 0;
  break;
 default:
  FUNC_11(VAR_9,
                        1,
                      1,
                    2,
                        0,
                  0);
  FUNC_7((union ctl_io *)VAR_9);
  return (VAR_19);
  break;
 }

 VAR_20 = FUNC_17(VAR_14->length);





 if (VAR_20 < (sizeof(struct scsi_report_luns_data) +
     sizeof(struct scsi_report_luns_lundata))) {
  FUNC_11(VAR_9,
                        1,
                      1,
                    6,
                        0,
                  0);
  FUNC_7((union ctl_io *)VAR_9);
  return (VAR_19);
 }

 VAR_21 = sizeof(*VAR_15) +
  (VAR_17 * sizeof(struct scsi_report_luns_lundata));

 VAR_9->kern_data_ptr = FUNC_13(VAR_21, VAR_3, VAR_4 | VAR_5);
 VAR_15 = (struct scsi_report_luns_data *)VAR_9->kern_data_ptr;
 VAR_9->kern_sg_entries = 0;

 VAR_22 = FUNC_9(&VAR_9->io_hdr.nexus);

 FUNC_15(&VAR_10->ctl_lock);
 for (VAR_23 = 0, VAR_16 = 0;
     VAR_23 < VAR_18 && VAR_16 < VAR_17;
     VAR_23++) {
  VAR_24 = FUNC_10(VAR_11, VAR_23);
  if (VAR_24 == VAR_6)
   continue;
  VAR_12 = VAR_10->ctl_luns[VAR_24];
  if (VAR_12 == ((void*)0))
   continue;

  FUNC_4(VAR_15->luns[VAR_16++].lundata,
      FUNC_8(VAR_23));
  if (VAR_13 != ((void*)0)) {
   FUNC_15(&VAR_12->lun_lock);
   FUNC_5(VAR_12, VAR_22, VAR_2);
   FUNC_16(&VAR_12->lun_lock);
  }
 }
 FUNC_16(&VAR_10->ctl_lock);





 VAR_21 = sizeof(*VAR_15) +
  (VAR_16 * sizeof(struct scsi_report_luns_lundata));
 VAR_9->kern_rel_offset = 0;
 VAR_9->kern_sg_entries = 0;
 VAR_9->kern_data_len = FUNC_14(VAR_21, VAR_20);
 VAR_9->kern_total_len = VAR_9->kern_data_len;
 FUNC_18(VAR_21 - 8, VAR_15->length);





 FUNC_12(VAR_9);
 VAR_9->io_hdr.flags |= VAR_0;
 VAR_9->be_move_done = VAR_7;
 FUNC_6((union ctl_io *)VAR_9);
 return (VAR_19);
}
