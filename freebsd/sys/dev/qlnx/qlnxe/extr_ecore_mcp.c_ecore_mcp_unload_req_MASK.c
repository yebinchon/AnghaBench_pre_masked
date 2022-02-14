
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int flags; int param; int cmd; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int wol_config; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_1 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_6,
       struct ecore_ptt *VAR_7)
{
 struct ecore_mcp_mb_params VAR_8;
 u32 VAR_9;

 switch (VAR_6->p_dev->wol_config) {
 case 129:
  VAR_9 = VAR_0;
  break;
 case 128:
  VAR_9 = VAR_1;
  break;
 default:
  FUNC_0(VAR_6, 1,
     "Unknown WoL configuration %02x\n",
     VAR_6->p_dev->wol_config);

 case 130:
  VAR_9 = VAR_2;
 }

 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8.cmd = VAR_3;
 VAR_8.param = VAR_9;
 VAR_8.flags = VAR_5 | VAR_4;

 return FUNC_2(VAR_6, VAR_7, &VAR_8);
}
