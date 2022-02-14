
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ecore_vf_info {int dummy; } ;
struct ecore_hwfn {TYPE_1__* pf_iov_info; int p_dev; } ;
struct TYPE_2__ {struct ecore_vf_info* vfs_array; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,size_t) ;
 int FUNC_1 (int ,int,char*) ;
 struct ecore_vf_info* VAR_0 ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,size_t,int,int) ;

struct ecore_vf_info *FUNC_3(struct ecore_hwfn *VAR_1,
         u16 VAR_2,
         bool VAR_3)
{
 struct ecore_vf_info *VAR_4 = VAR_0;

 if (!VAR_1->pf_iov_info) {
  FUNC_1(VAR_1->p_dev, 1, "No iov info\n");
  return VAR_0;
 }

 if (FUNC_2(VAR_1, VAR_2,
        VAR_3, 0))
  VAR_4 = &VAR_1->pf_iov_info->vfs_array[VAR_2];
 else
  FUNC_0(VAR_1, "ecore_iov_get_vf_info: VF[%d] is not enabled\n",
         VAR_2);

 return VAR_4;
}
