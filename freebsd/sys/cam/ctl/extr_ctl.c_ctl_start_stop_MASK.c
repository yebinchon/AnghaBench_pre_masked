
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef scalar_t__ uint32_t ;
struct scsi_start_stop_unit {int how; } ;
struct TYPE_3__ {int nexus; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; scalar_t__ cdb; } ;
struct ctl_lun {int flags; scalar_t__ pr_res_idx; int pr_res_type; scalar_t__ prevent_count; TYPE_2__* backend; } ;
struct TYPE_4__ {int (* config_write ) (union ctl_io*) ;} ;


 int FUNC_0 (char*) ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
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
 int FUNC_2 (union ctl_io*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ctl_lun*,scalar_t__) ;
 int FUNC_5 (struct ctl_scsiio*,int,int,int,int,int) ;
 int FUNC_6 (struct ctl_scsiio*) ;
 int FUNC_7 (struct ctl_scsiio*,int,int ,int,int,int ) ;
 int FUNC_8 (union ctl_io*) ;

int
FUNC_9(struct ctl_scsiio *VAR_10)
{
 struct ctl_lun *VAR_11 = FUNC_1(VAR_10);
 struct scsi_start_stop_unit *VAR_12;
 int VAR_13;

 FUNC_0(("ctl_start_stop\n"));

 VAR_12 = (struct scsi_start_stop_unit *)VAR_10->cdb;

 if ((VAR_12->how & VAR_8) == 0) {
  if ((VAR_11->flags & VAR_1) &&
      (VAR_12->how & VAR_9) == 0) {
   uint32_t VAR_14;

   VAR_14 = FUNC_3(&VAR_10->io_hdr.nexus);
   if (FUNC_4(VAR_11, VAR_14) == 0 ||
       (VAR_11->pr_res_idx != VAR_14 && VAR_11->pr_res_type < 4)) {

    FUNC_6(VAR_10);
    FUNC_2((union ctl_io *)VAR_10);
    return (VAR_3);
   }
  }

  if ((VAR_12->how & VAR_7) &&
      (VAR_11->flags & VAR_2) == 0) {
   FUNC_5(VAR_10,
                         1,
                       1,
                     4,
                         1,
                   1);
   FUNC_2((union ctl_io *)VAR_10);
   return (VAR_3);
  }

  if ((VAR_12->how & VAR_9) == 0 && (VAR_12->how & VAR_7) &&
      VAR_11->prevent_count > 0) {

   FUNC_7(VAR_10, 1,
                    (VAR_11->flags & VAR_0) ?
        VAR_6 : VAR_5,
               0x53, 0x02, VAR_4);
   FUNC_2((union ctl_io *)VAR_10);
   return (VAR_3);
  }
 }

 VAR_13 = VAR_11->backend->config_write((union ctl_io *)VAR_10);
 return (VAR_13);
}
