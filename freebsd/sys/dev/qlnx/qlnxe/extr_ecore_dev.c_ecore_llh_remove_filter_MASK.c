
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_0, struct ecore_ptt *VAR_1,
   u8 VAR_2, u8 VAR_3)
{
 if (FUNC_0(VAR_0->p_dev))
  return FUNC_1(VAR_0, VAR_1, VAR_2,
        VAR_3);
 else
  return FUNC_2(VAR_0, VAR_1, VAR_2,
        VAR_3);
}
