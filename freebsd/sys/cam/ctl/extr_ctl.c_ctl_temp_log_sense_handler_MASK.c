
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int param_len; void* param_control; int param_code; } ;
struct scsi_log_temperature {int temperature; TYPE_1__ hdr; } ;
struct scsi_log_param_header {int dummy; } ;
struct ctl_scsiio {int dummy; } ;
struct ctl_page_index {scalar_t__ page_data; } ;
struct ctl_lun {TYPE_2__* be_lun; } ;
struct TYPE_4__ {int options; } ;


 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (char const*,int *,int ) ;

int
FUNC_4(struct ctl_scsiio *VAR_3,
          struct ctl_page_index *VAR_4,
          int VAR_5)
{
 struct ctl_lun *VAR_6 = FUNC_0(VAR_3);
 struct scsi_log_temperature *VAR_7;
 const char *VAR_8;

 VAR_7 = (struct scsi_log_temperature *)VAR_4->page_data;

 FUNC_2(VAR_2, VAR_7->hdr.param_code);
 VAR_7->hdr.param_control = VAR_0;
 VAR_7->hdr.param_len = sizeof(struct scsi_log_temperature) -
     sizeof(struct scsi_log_param_header);
 if ((VAR_8 = FUNC_1(VAR_6->be_lun->options, "temperature",
     ((void*)0))) != ((void*)0))
  VAR_7->temperature = FUNC_3(VAR_8, ((void*)0), 0);
 else
  VAR_7->temperature = 0xff;
 VAR_7++;

 FUNC_2(VAR_1, VAR_7->hdr.param_code);
 VAR_7->hdr.param_control = VAR_0;
 VAR_7->hdr.param_len = sizeof(struct scsi_log_temperature) -
     sizeof(struct scsi_log_param_header);
 if ((VAR_8 = FUNC_1(VAR_6->be_lun->options, "reftemperature",
     ((void*)0))) != ((void*)0))
  VAR_7->temperature = FUNC_3(VAR_8, ((void*)0), 0);
 else
  VAR_7->temperature = 0xff;
 return (0);
}
