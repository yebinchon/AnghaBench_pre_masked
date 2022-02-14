
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ispsoftc_t ;
struct TYPE_5__ {int ds_count; int ds_basehi; int ds_base; } ;
struct TYPE_6__ {TYPE_1__ req_dataseg; int req_vpidx; int req_tidhi; int req_tidlo; int req_dl; scalar_t__ req_cdb; int req_crn; int req_task_attribute; int req_task_management; int req_alen_datadir; scalar_t__ req_lun; int req_reserved; int req_seg_count; int req_time; int req_nphdl; int req_handle; int req_header; } ;
typedef TYPE_2__ ispreqt7_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 void* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int *) ;

void
FUNC_6(ispsoftc_t *VAR_0, ispreqt7_t *VAR_1, ispreqt7_t *VAR_2)
{
 int VAR_3;
 uint32_t *VAR_4, *VAR_5;

 FUNC_5(VAR_0, &VAR_1->req_header, &VAR_2->req_header);
 FUNC_2(VAR_0, VAR_1->req_handle, &VAR_2->req_handle);
 FUNC_1(VAR_0, VAR_1->req_nphdl, &VAR_2->req_nphdl);
 FUNC_1(VAR_0, VAR_1->req_time, &VAR_2->req_time);
 FUNC_1(VAR_0, VAR_1->req_seg_count, &VAR_2->req_seg_count);
 FUNC_1(VAR_0, VAR_1->req_reserved, &VAR_2->req_reserved);
 VAR_4 = (uint32_t *) VAR_1->req_lun;
 VAR_5 = (uint32_t *) VAR_2->req_lun;
 for (VAR_3 = 0; VAR_3 < (FUNC_0(VAR_1->req_lun) >> 2); VAR_3++ ) {
  *VAR_5++ = FUNC_4(VAR_0, *VAR_4++);
 }
 FUNC_3(VAR_0, VAR_1->req_alen_datadir, &VAR_2->req_alen_datadir);
 FUNC_3(VAR_0, VAR_1->req_task_management, &VAR_2->req_task_management);
 FUNC_3(VAR_0, VAR_1->req_task_attribute, &VAR_2->req_task_attribute);
 FUNC_3(VAR_0, VAR_1->req_crn, &VAR_2->req_crn);
 VAR_4 = (uint32_t *) VAR_1->req_cdb;
 VAR_5 = (uint32_t *) VAR_2->req_cdb;
 for (VAR_3 = 0; VAR_3 < (FUNC_0(VAR_1->req_cdb) >> 2); VAR_3++) {
  *VAR_5++ = FUNC_4(VAR_0, *VAR_4++);
 }
 FUNC_2(VAR_0, VAR_1->req_dl, &VAR_2->req_dl);
 FUNC_1(VAR_0, VAR_1->req_tidlo, &VAR_2->req_tidlo);
 FUNC_3(VAR_0, VAR_1->req_tidhi, &VAR_2->req_tidhi);
 FUNC_3(VAR_0, VAR_1->req_vpidx, &VAR_2->req_vpidx);
 FUNC_2(VAR_0, VAR_1->req_dataseg.ds_base, &VAR_2->req_dataseg.ds_base);
 FUNC_2(VAR_0, VAR_1->req_dataseg.ds_basehi, &VAR_2->req_dataseg.ds_basehi);
 FUNC_2(VAR_0, VAR_1->req_dataseg.ds_count, &VAR_2->req_dataseg.ds_count);
}
