
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vp_ctrl_fcf_index; int * vp_ctrl_reserved; int * vp_ctrl_idmap; int vp_ctrl_vp_count; int vp_ctrl_command; int vp_ctrl_status; int vp_ctrl_index_fail; int vp_ctrl_handle; int vp_ctrl_hdr; } ;
typedef TYPE_1__ vp_ctrl_info_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int *,int *) ;

void
FUNC_4(ispsoftc_t *VAR_0, vp_ctrl_info_t *VAR_1, vp_ctrl_info_t *VAR_2)
{
 int VAR_3;
 FUNC_3(VAR_0, &VAR_1->vp_ctrl_hdr, &VAR_2->vp_ctrl_hdr);
 FUNC_2(VAR_0, VAR_1->vp_ctrl_handle, &VAR_2->vp_ctrl_handle);
 FUNC_1(VAR_0, VAR_1->vp_ctrl_index_fail, &VAR_2->vp_ctrl_index_fail);
 FUNC_1(VAR_0, VAR_1->vp_ctrl_status, &VAR_2->vp_ctrl_status);
 FUNC_1(VAR_0, VAR_1->vp_ctrl_command, &VAR_2->vp_ctrl_command);
 FUNC_1(VAR_0, VAR_1->vp_ctrl_vp_count, &VAR_2->vp_ctrl_vp_count);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->vp_ctrl_idmap); VAR_3++) {
  FUNC_1(VAR_0, VAR_1->vp_ctrl_idmap[VAR_3], &VAR_2->vp_ctrl_idmap[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->vp_ctrl_reserved); VAR_3++) {
  FUNC_1(VAR_0, VAR_1->vp_ctrl_reserved[VAR_3], &VAR_2->vp_ctrl_reserved[VAR_3]);
 }
 FUNC_1(VAR_0, VAR_1->vp_ctrl_fcf_index, &VAR_2->vp_ctrl_fcf_index);
}
