
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_hwfn {int p_dpc_ptt; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ,int ,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3, VAR_3->p_dpc_ptt, VAR_2);

 FUNC_0(VAR_3->p_dev, "MCP_REG_CPU_STATE: %08x - Masking...\n",
  VAR_4);
 FUNC_2(VAR_3, VAR_3->p_dpc_ptt, VAR_1,
   0xffffffff);

 return VAR_0;
}
