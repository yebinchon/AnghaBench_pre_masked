
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


typedef int uint64_t ;
struct TYPE_15__ {int param_len; int param_code; } ;
struct TYPE_16__ {int integer; int exponent; TYPE_7__ hdr; } ;
struct TYPE_13__ {int param_len; void* param_control; int param_code; } ;
struct TYPE_14__ {TYPE_5__ hdr; int idle_int; } ;
struct TYPE_9__ {int param_len; void* param_control; int param_code; } ;
struct TYPE_12__ {int weighted_int; int weighted_num; int write_int; int read_int; int transmitted_lba; int recvieved_lba; int write_num; int read_num; TYPE_1__ hdr; } ;
struct stat_page {TYPE_8__ ti; TYPE_6__ it; TYPE_4__ sap; } ;
struct scsi_log_time_interval {int dummy; } ;
struct scsi_log_stat_and_perf {int dummy; } ;
struct scsi_log_param_header {int dummy; } ;
struct scsi_log_idle_time {int dummy; } ;
struct ctl_scsiio {int dummy; } ;
struct ctl_page_index {scalar_t__ page_data; } ;
struct TYPE_11__ {int* operations; int* bytes; struct bintime* time; } ;
struct ctl_lun {int idle_time; TYPE_3__ stats; TYPE_2__* be_lun; } ;
struct bintime {int frac; scalar_t__ sec; } ;
struct TYPE_10__ {int blocksize; } ;


 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;

int
FUNC_4(struct ctl_scsiio *VAR_8,
          struct ctl_page_index *VAR_9,
          int VAR_10)
{
 struct ctl_lun *VAR_11 = FUNC_0(VAR_8);
 struct stat_page *VAR_12;
 struct bintime *VAR_13;

 VAR_12 = (struct stat_page *)VAR_9->page_data;

 FUNC_2(VAR_5, VAR_12->sap.hdr.param_code);
 VAR_12->sap.hdr.param_control = VAR_4;
 VAR_12->sap.hdr.param_len = sizeof(struct scsi_log_stat_and_perf) -
     sizeof(struct scsi_log_param_header);
 FUNC_1(VAR_11->stats.operations[VAR_0],
     VAR_12->sap.read_num);
 FUNC_1(VAR_11->stats.operations[VAR_1],
     VAR_12->sap.write_num);
 if (VAR_11->be_lun->blocksize > 0) {
  FUNC_1(VAR_11->stats.bytes[VAR_1] /
      VAR_11->be_lun->blocksize, VAR_12->sap.recvieved_lba);
  FUNC_1(VAR_11->stats.bytes[VAR_0] /
      VAR_11->be_lun->blocksize, VAR_12->sap.transmitted_lba);
 }
 VAR_13 = &VAR_11->stats.time[VAR_0];
 FUNC_1((uint64_t)VAR_13->sec * 1000 + VAR_13->frac / (VAR_7 / 1000),
     VAR_12->sap.read_int);
 VAR_13 = &VAR_11->stats.time[VAR_1];
 FUNC_1((uint64_t)VAR_13->sec * 1000 + VAR_13->frac / (VAR_7 / 1000),
     VAR_12->sap.write_int);
 FUNC_1(0, VAR_12->sap.weighted_num);
 FUNC_1(0, VAR_12->sap.weighted_int);
 FUNC_2(VAR_3, VAR_12->it.hdr.param_code);
 VAR_12->it.hdr.param_control = VAR_4;
 VAR_12->it.hdr.param_len = sizeof(struct scsi_log_idle_time) -
     sizeof(struct scsi_log_param_header);



 FUNC_2(VAR_6, VAR_12->ti.hdr.param_code);
 VAR_12->it.hdr.param_control = VAR_4;
 VAR_12->ti.hdr.param_len = sizeof(struct scsi_log_time_interval) -
     sizeof(struct scsi_log_param_header);
 FUNC_3(3, VAR_12->ti.exponent);
 FUNC_3(1, VAR_12->ti.integer);
 return (0);
}
