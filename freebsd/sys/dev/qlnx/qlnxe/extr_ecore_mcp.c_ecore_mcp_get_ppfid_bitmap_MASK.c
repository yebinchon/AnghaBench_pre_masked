
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {scalar_t__ mcp_resp; int mcp_param; int cmd; } ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {int ppfid_bitmap; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_6,
      struct ecore_ptt *VAR_7)
{
 struct ecore_dev *VAR_8 = VAR_6->p_dev;
 struct ecore_mcp_mb_params VAR_9;
 enum _ecore_status_t VAR_10;

 FUNC_3(&VAR_9, sizeof(VAR_9));
 VAR_9.cmd = VAR_0;
 VAR_10 = FUNC_4(VAR_6, VAR_7, &VAR_9);
 if (VAR_10 != VAR_3)
  return VAR_10;

 if (VAR_9.mcp_resp == VAR_5) {
  FUNC_0(VAR_6,
   "The get_ppfid_bitmap command is unsupported by the MFW\n");
  return VAR_2;
 }

 VAR_8->ppfid_bitmap = FUNC_2(VAR_9.mcp_param,
         VAR_4);

 FUNC_1(VAR_6, VAR_1, "PPFID bitmap 0x%hhx\n",
     VAR_8->ppfid_bitmap);

 return VAR_3;
}
