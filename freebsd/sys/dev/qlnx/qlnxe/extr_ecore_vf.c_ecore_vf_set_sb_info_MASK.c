
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ecore_vf_iov {struct ecore_sb_info** sbs_info; } ;
struct ecore_sb_info {int dummy; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,...) ;
 size_t VAR_0 ;

void FUNC_1(struct ecore_hwfn *VAR_1,
     u16 VAR_2, struct ecore_sb_info *VAR_3)
{
 struct ecore_vf_iov *VAR_4 = VAR_1->vf_iov_info;

 if (!VAR_4) {
  FUNC_0(VAR_1, 1, "vf_sriov_info isn't initialized\n");
  return;
 }

 if (VAR_2 >= VAR_0) {
  FUNC_0(VAR_1, 1, "Can't configure SB %04x\n", VAR_2);
  return;
 }

 VAR_4->sbs_info[VAR_2] = VAR_3;
}
