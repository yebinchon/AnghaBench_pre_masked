
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_log_param_header {int dummy; } ;
struct TYPE_3__ {int param_len; int param_control; int param_code; } ;
struct scsi_log_informational_exceptions {int temperature; int ie_ascq; int ie_asc; TYPE_1__ hdr; } ;
struct ctl_scsiio {int dummy; } ;
struct ctl_page_index {scalar_t__ page_data; } ;
struct ctl_lun {TYPE_2__* be_lun; int ie_ascq; int ie_asc; } ;
struct TYPE_4__ {int options; } ;


 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,int *,int ) ;

int
FUNC_4(struct ctl_scsiio *VAR_2,
          struct ctl_page_index *VAR_3,
          int VAR_4)
{
 struct ctl_lun *VAR_5 = FUNC_0(VAR_2);
 struct scsi_log_informational_exceptions *VAR_6;
 const char *VAR_7;

 VAR_6 = (struct scsi_log_informational_exceptions *)VAR_3->page_data;

 FUNC_2(VAR_0, VAR_6->hdr.param_code);
 VAR_6->hdr.param_control = VAR_1;
 VAR_6->hdr.param_len = sizeof(struct scsi_log_informational_exceptions) -
     sizeof(struct scsi_log_param_header);
 VAR_6->ie_asc = VAR_5->ie_asc;
 VAR_6->ie_ascq = VAR_5->ie_ascq;
 if ((VAR_7 = FUNC_1(VAR_5->be_lun->options, "temperature",
     ((void*)0))) != ((void*)0))
  VAR_6->temperature = FUNC_3(VAR_7, ((void*)0), 0);
 else
  VAR_6->temperature = 0xff;
 return (0);
}
