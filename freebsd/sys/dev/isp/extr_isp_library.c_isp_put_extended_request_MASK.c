
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int * req_cdb; int req_seg_count; int req_time; int req_flags; int req_cdblen; int req_target; int req_lun_trn; int req_handle; int req_header; } ;
typedef TYPE_1__ ispextreq_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;

void
FUNC_6(ispsoftc_t *VAR_0, ispextreq_t *VAR_1, ispextreq_t *VAR_2)
{
 int VAR_3;
 FUNC_5(VAR_0, &VAR_1->req_header, &VAR_2->req_header);
 FUNC_2(VAR_0, VAR_1->req_handle, &VAR_2->req_handle);
 if (FUNC_4(VAR_0)) {
  FUNC_3(VAR_0, VAR_1->req_lun_trn, &VAR_2->req_target);
  FUNC_3(VAR_0, VAR_1->req_target, &VAR_2->req_lun_trn);
 } else {
  FUNC_3(VAR_0, VAR_1->req_lun_trn, &VAR_2->req_lun_trn);
  FUNC_3(VAR_0, VAR_1->req_target, &VAR_2->req_target);
 }
 FUNC_1(VAR_0, VAR_1->req_cdblen, &VAR_2->req_cdblen);
 FUNC_1(VAR_0, VAR_1->req_flags, &VAR_2->req_flags);
 FUNC_1(VAR_0, VAR_1->req_time, &VAR_2->req_time);
 FUNC_1(VAR_0, VAR_1->req_seg_count, &VAR_2->req_seg_count);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->req_cdb); VAR_3++) {
  FUNC_3(VAR_0, VAR_1->req_cdb[VAR_3], &VAR_2->req_cdb[VAR_3]);
 }
}
