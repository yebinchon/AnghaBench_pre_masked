
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct ecore_vf_info {int dummy; } ;
struct ecore_hwfn {TYPE_3__* pf_iov_info; TYPE_2__* p_dev; } ;
struct TYPE_6__ {struct ecore_vf_info* vfs_array; } ;
struct TYPE_5__ {TYPE_1__* p_iov_info; } ;
struct TYPE_4__ {scalar_t__ first_vf_in_pf; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 struct ecore_vf_info* VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*,size_t,int) ;

__attribute__((used)) static struct ecore_vf_info *
FUNC_2(struct ecore_hwfn *VAR_2, u16 VAR_3)
{
 u8 VAR_4 = (u8)VAR_2->p_dev->p_iov_info->first_vf_in_pf;

 if (!FUNC_1(VAR_2, (int)VAR_3 - VAR_4, 0)) {
  FUNC_0(VAR_2, VAR_0,
      "Got indication for VF [abs 0x%08x] that cannot be handled by PF\n",
      VAR_3);
  return VAR_1;
 }

 return &VAR_2->pf_iov_info->vfs_array[(u8)VAR_3 - VAR_4];
}
