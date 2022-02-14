
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ecore_vf_info {int configured_features; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_vf_info*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_1(struct ecore_hwfn *VAR_2,
         struct ecore_vf_info *VAR_3,
         u64 VAR_4)
{
 enum _ecore_status_t VAR_5 = VAR_0;



 if ((VAR_4 & (1 << VAR_1)) &&
     !(VAR_3->configured_features & (1 << VAR_1)))
  VAR_5 = FUNC_0(VAR_2, VAR_3);

 return VAR_5;
}
