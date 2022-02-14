
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_vf_info {int opaque_fid; } ;
struct ecore_hwfn {int dummy; } ;


 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;

void FUNC_1(struct ecore_hwfn *VAR_0, int VAR_1,
      u16 *VAR_2)
{
 struct ecore_vf_info *VAR_3;

 VAR_3 = FUNC_0(VAR_0, (u16)VAR_1, 1);
 if (!VAR_3)
  return;

 *VAR_2 = VAR_3->opaque_fid;
}
