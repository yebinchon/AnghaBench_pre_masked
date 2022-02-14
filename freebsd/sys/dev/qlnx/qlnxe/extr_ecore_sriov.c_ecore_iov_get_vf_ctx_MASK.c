
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_vf_info {void* ctx; } ;
struct ecore_hwfn {int dummy; } ;


 void* VAR_0 ;
 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;

void *FUNC_1(struct ecore_hwfn *VAR_1,
      u16 VAR_2)
{
 struct ecore_vf_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, 1);
 if (!VAR_3)
  return VAR_0;

 return VAR_3->ctx;
}
