
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_2,
       struct ecore_ptt *VAR_3,
       u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);

 if (VAR_6 != VAR_5) {
  FUNC_0(VAR_2, 1,
     "Value at address 0x%08x is 0x%08x while the expected value is 0x%08x\n",
     VAR_4, VAR_6, VAR_5);
  return VAR_1;
 }

 return VAR_0;
}
