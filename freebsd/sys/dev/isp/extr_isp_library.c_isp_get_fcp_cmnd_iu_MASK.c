
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_6__ {int fcp_cmnd_dl; int * fcp_cmnd_cdb; } ;
struct TYPE_7__ {TYPE_1__ sf; } ;
struct TYPE_8__ {TYPE_2__ cdb_dl; int fcp_cmnd_alen_datadir; int fcp_cmnd_task_management; int fcp_cmnd_task_attribute; int fcp_cmnd_crn; int * fcp_cmnd_lun; } ;
typedef TYPE_3__ fcp_cmnd_iu_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;

void
FUNC_2(ispsoftc_t *VAR_0, fcp_cmnd_iu_t *VAR_1, fcp_cmnd_iu_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->fcp_cmnd_lun[VAR_3], VAR_2->fcp_cmnd_lun[VAR_3]);
 }
        FUNC_1(VAR_0, &VAR_1->fcp_cmnd_crn, VAR_2->fcp_cmnd_crn);
        FUNC_1(VAR_0, &VAR_1->fcp_cmnd_task_attribute, VAR_2->fcp_cmnd_task_attribute);
        FUNC_1(VAR_0, &VAR_1->fcp_cmnd_task_management, VAR_2->fcp_cmnd_task_management);
        FUNC_1(VAR_0, &VAR_1->fcp_cmnd_alen_datadir, VAR_2->fcp_cmnd_alen_datadir);
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_1(VAR_0, &VAR_1->cdb_dl.sf.fcp_cmnd_cdb[VAR_3], VAR_2->cdb_dl.sf.fcp_cmnd_cdb[VAR_3]);
 }
 FUNC_0(VAR_0, &VAR_1->cdb_dl.sf.fcp_cmnd_dl, VAR_2->cdb_dl.sf.fcp_cmnd_dl);
}
