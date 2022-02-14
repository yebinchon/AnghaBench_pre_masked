
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int capabilities; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int *,int *) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_4,
      struct ecore_ptt *VAR_5)
{
 u32 VAR_6;
 enum _ecore_status_t VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_0,
      0, &VAR_6, &VAR_4->mcp_info->capabilities);
 if (VAR_7 == VAR_3)
  FUNC_0(VAR_4, (VAR_2 | VAR_1),
      "MFW supported features: %08x\n",
      VAR_4->mcp_info->capabilities);

 return VAR_7;
}
