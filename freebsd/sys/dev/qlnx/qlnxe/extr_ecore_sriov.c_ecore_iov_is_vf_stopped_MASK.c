
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_vf_info {scalar_t__ state; } ;
struct ecore_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;

bool FUNC_1(struct ecore_hwfn *VAR_1, int VAR_2)
{
 struct ecore_vf_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1, (u16)VAR_2, 1);
 if (!VAR_3)
  return 1;

 return VAR_3->state == VAR_0;
}
