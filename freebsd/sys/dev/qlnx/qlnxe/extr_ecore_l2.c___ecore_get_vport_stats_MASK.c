
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {scalar_t__ mcp_info; int p_dev; } ;
struct ecore_eth_stats {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_eth_stats*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_eth_stats*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_eth_stats*,int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_eth_stats*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_eth_stats*,int ) ;

void FUNC_6(struct ecore_hwfn *VAR_0,
        struct ecore_ptt *VAR_1,
        struct ecore_eth_stats *VAR_2,
        u16 VAR_3, bool VAR_4)
{
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);



 if (FUNC_0(VAR_0->p_dev))
  return;


 if (VAR_4 && VAR_0->mcp_info)
  FUNC_2(VAR_0, VAR_1, VAR_2);
}
