
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * req_sense_data; int * req_response; int req_resid; int req_sense_len; int req_time; int req_status_flags; int req_state_flags; int req_completion_status; int req_scsi_status; int req_handle; int req_header; } ;
typedef TYPE_1__ ispstatusreq_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *) ;

void
FUNC_4(ispsoftc_t *VAR_0, ispstatusreq_t *VAR_1, ispstatusreq_t *VAR_2)
{
 int VAR_3;
 FUNC_3(VAR_0, &VAR_1->req_header, &VAR_2->req_header);
 FUNC_1(VAR_0, &VAR_1->req_handle, VAR_2->req_handle);
 FUNC_0(VAR_0, &VAR_1->req_scsi_status, VAR_2->req_scsi_status);
 FUNC_0(VAR_0, &VAR_1->req_completion_status, VAR_2->req_completion_status);
 FUNC_0(VAR_0, &VAR_1->req_state_flags, VAR_2->req_state_flags);
 FUNC_0(VAR_0, &VAR_1->req_status_flags, VAR_2->req_status_flags);
 FUNC_0(VAR_0, &VAR_1->req_time, VAR_2->req_time);
 FUNC_0(VAR_0, &VAR_1->req_sense_len, VAR_2->req_sense_len);
 FUNC_1(VAR_0, &VAR_1->req_resid, VAR_2->req_resid);
 for (VAR_3 = 0; VAR_3 < sizeof (VAR_1->req_response); VAR_3++) {
  FUNC_2(VAR_0, &VAR_1->req_response[VAR_3], VAR_2->req_response[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < sizeof (VAR_1->req_sense_data); VAR_3++) {
  FUNC_2(VAR_0, &VAR_1->req_sense_data[VAR_3], VAR_2->req_sense_data[VAR_3]);
 }
}
