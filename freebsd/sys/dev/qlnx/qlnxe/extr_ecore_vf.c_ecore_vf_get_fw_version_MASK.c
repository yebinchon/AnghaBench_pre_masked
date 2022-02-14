
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pf_vf_pfdev_info {int fw_eng; int fw_rev; int fw_minor; int fw_major; } ;
struct ecore_hwfn {TYPE_2__* vf_iov_info; } ;
struct TYPE_3__ {struct pf_vf_pfdev_info pfdev_info; } ;
struct TYPE_4__ {TYPE_1__ acquire_resp; } ;



void FUNC_0(struct ecore_hwfn *VAR_0,
        u16 *VAR_1, u16 *VAR_2, u16 *VAR_3,
        u16 *VAR_4)
{
 struct pf_vf_pfdev_info *VAR_5;

 VAR_5 = &VAR_0->vf_iov_info->acquire_resp.pfdev_info;

 *VAR_1 = VAR_5->fw_major;
 *VAR_2 = VAR_5->fw_minor;
 *VAR_3 = VAR_5->fw_rev;
 *VAR_4 = VAR_5->fw_eng;
}
