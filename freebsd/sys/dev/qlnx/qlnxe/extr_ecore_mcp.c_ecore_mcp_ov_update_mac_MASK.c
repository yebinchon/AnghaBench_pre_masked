
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int param; int* p_data_src; int data_src_size; int cmd; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int wol_mac; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (int ,int*,int ) ;
 int FUNC_3 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_5, struct ecore_ptt *VAR_6,
   u8 *VAR_7)
{
 struct ecore_mcp_mb_params VAR_8;
 u32 VAR_9[2];
 enum _ecore_status_t VAR_10;

 FUNC_3(&VAR_8, sizeof(VAR_8));
 VAR_8.cmd = VAR_0;
 VAR_8.param = VAR_1 <<
    VAR_2;
 VAR_8.param |= FUNC_1(VAR_5);






 VAR_9[0] = VAR_7[0] << 24 | VAR_7[1] << 16 | VAR_7[2] << 8 | VAR_7[3];
 VAR_9[1] = VAR_7[4] << 24 | VAR_7[5] << 16;

 VAR_8.p_data_src = (u8 *)VAR_9;
 VAR_8.data_src_size = 8;
 VAR_10 = FUNC_4(VAR_5, VAR_6, &VAR_8);
 if (VAR_10 != VAR_3)
  FUNC_0(VAR_5, "Failed to send mac address, rc = %d\n", VAR_10);


 FUNC_2(VAR_5->p_dev->wol_mac, VAR_7, VAR_4);

 return VAR_10;
}
