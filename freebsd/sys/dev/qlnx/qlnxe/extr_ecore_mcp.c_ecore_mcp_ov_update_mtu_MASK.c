
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,int*,int*) ;

enum _ecore_status_t
FUNC_2(struct ecore_hwfn *VAR_3, struct ecore_ptt *VAR_4,
   u16 VAR_5)
{
 u32 VAR_6 = 0, VAR_7 = 0;
 u32 VAR_8;
 enum _ecore_status_t VAR_9;

 VAR_8 = (u32)VAR_5 << VAR_0;
 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_1,
      VAR_8, &VAR_6, &VAR_7);
 if (VAR_9 != VAR_2)
  FUNC_0(VAR_3, "Failed to send mtu value, rc = %d\n", VAR_9);

 return VAR_9;
}
