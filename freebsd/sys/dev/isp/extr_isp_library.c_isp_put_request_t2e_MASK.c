
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_6__ {TYPE_1__* req_dataseg; int req_totalcnt; int * req_cdb; int req_seg_count; int req_time; int req_reserved; int req_crn; int req_flags; int req_scclun; int req_target; int req_handle; int req_header; } ;
typedef TYPE_2__ ispreqt2e_t ;
struct TYPE_5__ {int ds_count; int ds_base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,int *) ;

void
FUNC_5(ispsoftc_t *VAR_1, ispreqt2e_t *VAR_2, ispreqt2e_t *VAR_3)
{
 int VAR_4;
 FUNC_4(VAR_1, &VAR_2->req_header, &VAR_3->req_header);
 FUNC_2(VAR_1, VAR_2->req_handle, &VAR_3->req_handle);
 FUNC_1(VAR_1, VAR_2->req_target, &VAR_3->req_target);
 FUNC_1(VAR_1, VAR_2->req_scclun, &VAR_3->req_scclun);
 FUNC_1(VAR_1, VAR_2->req_flags, &VAR_3->req_flags);
 FUNC_3(VAR_1, VAR_2->req_crn, &VAR_3->req_crn);
 FUNC_3(VAR_1, VAR_2->req_reserved, &VAR_3->req_reserved);
 FUNC_1(VAR_1, VAR_2->req_time, &VAR_3->req_time);
 FUNC_1(VAR_1, VAR_2->req_seg_count, &VAR_3->req_seg_count);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->req_cdb); VAR_4++) {
  FUNC_3(VAR_1, VAR_2->req_cdb[VAR_4], &VAR_3->req_cdb[VAR_4]);
 }
 FUNC_2(VAR_1, VAR_2->req_totalcnt, &VAR_3->req_totalcnt);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_2(VAR_1, VAR_2->req_dataseg[VAR_4].ds_base, &VAR_3->req_dataseg[VAR_4].ds_base);
  FUNC_2(VAR_1, VAR_2->req_dataseg[VAR_4].ds_count, &VAR_3->req_dataseg[VAR_4].ds_count);
 }
}
