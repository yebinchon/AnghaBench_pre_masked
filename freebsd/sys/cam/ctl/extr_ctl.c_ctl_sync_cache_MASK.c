
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct scsi_sync_cache_16 {int byte2; int lb_count; int begin_lba; } ;
struct scsi_sync_cache {int byte2; int lb_count; int begin_lba; } ;
struct TYPE_5__ {int * ctl_private; } ;
struct ctl_scsiio {int* cdb; TYPE_2__ io_hdr; } ;
struct ctl_lun {TYPE_3__* backend; TYPE_1__* be_lun; } ;
struct ctl_lba_len_flags {int flags; scalar_t__ len; scalar_t__ lba; } ;
struct TYPE_6__ {int (* config_write ) (union ctl_io*) ;} ;
struct TYPE_4__ {scalar_t__ maxlba; } ;


 int FUNC_0 (char*) ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 size_t VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;


 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_scsiio*) ;
 int FUNC_5 (struct ctl_scsiio*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (union ctl_io*) ;

int
FUNC_10(struct ctl_scsiio *VAR_1)
{
 struct ctl_lun *VAR_2 = FUNC_1(VAR_1);
 struct ctl_lba_len_flags *VAR_3;
 uint64_t VAR_4;
 uint32_t VAR_5;
 int VAR_6;
 uint8_t VAR_7;

 FUNC_0(("ctl_sync_cache\n"));

 VAR_6 = 0;

 switch (VAR_1->cdb[0]) {
 case 129: {
  struct scsi_sync_cache *VAR_8;
  VAR_8 = (struct scsi_sync_cache *)VAR_1->cdb;

  VAR_4 = FUNC_7(VAR_8->begin_lba);
  VAR_5 = FUNC_6(VAR_8->lb_count);
  VAR_7 = VAR_8->byte2;
  break;
 }
 case 128: {
  struct scsi_sync_cache_16 *VAR_9;
  VAR_9 = (struct scsi_sync_cache_16 *)VAR_1->cdb;

  VAR_4 = FUNC_8(VAR_9->begin_lba);
  VAR_5 = FUNC_7(VAR_9->lb_count);
  VAR_7 = VAR_9->byte2;
  break;
 }
 default:
  FUNC_4(VAR_1);
  FUNC_3((union ctl_io *)VAR_1);
  goto bailout;
  break;
 }







 if ((VAR_4 + VAR_5) > (VAR_2->be_lun->maxlba + 1)) {
  FUNC_5(VAR_1,
      FUNC_2(VAR_4, VAR_2->be_lun->maxlba + 1));
  FUNC_3((union ctl_io *)VAR_1);
  goto bailout;
 }

 VAR_3 = (struct ctl_lba_len_flags *)&VAR_1->io_hdr.ctl_private[VAR_0];
 VAR_3->lba = VAR_4;
 VAR_3->len = VAR_5;
 VAR_3->flags = VAR_7;
 VAR_6 = VAR_2->backend->config_write((union ctl_io *)VAR_1);

bailout:
 return (VAR_6);
}
