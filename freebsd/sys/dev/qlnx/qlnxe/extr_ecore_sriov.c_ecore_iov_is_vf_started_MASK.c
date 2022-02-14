
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_vf_info {scalar_t__ state; } ;
struct ecore_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;

bool FUNC_1(struct ecore_hwfn *VAR_2,
        u16 VAR_3)
{
 struct ecore_vf_info *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3, 1);
 if (!VAR_4)
  return 0;

 return (VAR_4->state != VAR_0 && VAR_4->state != VAR_1);
}
