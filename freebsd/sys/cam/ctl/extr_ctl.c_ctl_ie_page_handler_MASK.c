
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct scsi_info_exceptions_page {int info_flags; scalar_t__ mrie; int interval_timer; int report_count; } ;
struct ctl_scsiio {int dummy; } ;
struct ctl_page_index {int dummy; } ;
struct ctl_lun {int ie_asc; int ie_ascq; int ie_reported; int ie_reportcnt; int lun_lock; int ie_callout; } ;


 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int ,struct ctl_lun*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ctl_lun*,int,int ) ;
 int FUNC_4 (struct ctl_scsiio*,struct ctl_page_index*,int *) ;
 int FUNC_5 (struct ctl_lun*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct ctl_scsiio *VAR_7,
    struct ctl_page_index *VAR_8, uint8_t *VAR_9)
{
 struct ctl_lun *VAR_10 = FUNC_0(VAR_7);
 struct scsi_info_exceptions_page *VAR_11;
 uint64_t VAR_12;

 (void)FUNC_4(VAR_7, VAR_8, VAR_9);

 VAR_11 = (struct scsi_info_exceptions_page *)VAR_9;
 FUNC_6(&VAR_10->lun_lock);
 if (VAR_11->info_flags & VAR_2) {
  VAR_10->ie_asc = 0x5d;
  VAR_10->ie_ascq = 0xff;
  if (VAR_11->mrie == VAR_3) {
   FUNC_5(VAR_10, -1, VAR_1);
   VAR_10->ie_reported = 1;
  } else {
   FUNC_3(VAR_10, -1, VAR_1);
   VAR_10->ie_reported = -1;
  }
  VAR_10->ie_reportcnt = 1;
  if (VAR_10->ie_reportcnt < FUNC_8(VAR_11->report_count)) {
   VAR_10->ie_reportcnt++;
   VAR_12 = FUNC_8(VAR_11->interval_timer);
   if (VAR_12 == 0 || VAR_12 == VAR_4)
    VAR_12 = 3000;
   FUNC_1(&VAR_10->ie_callout, VAR_12 * VAR_6 / 10,
       VAR_5, VAR_10);
  }
 } else {
  VAR_10->ie_asc = 0;
  VAR_10->ie_ascq = 0;
  VAR_10->ie_reported = 1;
  FUNC_3(VAR_10, -1, VAR_1);
  VAR_10->ie_reportcnt = VAR_4;
  FUNC_2(&VAR_10->ie_callout);
 }
 FUNC_7(&VAR_10->lun_lock);
 return (VAR_0);
}
