
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct public_func {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_function_info {int bandwidth_max; int bandwidth_min; } ;
struct ecore_hwfn {TYPE_1__* mcp_info; int p_dev; } ;
struct TYPE_2__ {int link_lock; struct ecore_mcp_function_info func_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int *,int *) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,struct public_func*,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct public_func*) ;

__attribute__((used)) static void
FUNC_8(struct ecore_hwfn *VAR_1, struct ecore_ptt *VAR_2)
{
 struct ecore_mcp_function_info *VAR_3;
 struct public_func VAR_4;
 u32 VAR_5 = 0, VAR_6 = 0;

 FUNC_1(&VAR_1->mcp_info->link_lock);

 FUNC_6(VAR_1, VAR_2, &VAR_4,
     FUNC_0(VAR_1));

 FUNC_7(VAR_1, &VAR_4);

 VAR_3 = &VAR_1->mcp_info->func_info;

 FUNC_4(VAR_1->p_dev, VAR_3->bandwidth_min);

 FUNC_3(VAR_1->p_dev, VAR_3->bandwidth_max);

 FUNC_2(&VAR_1->mcp_info->link_lock);


 FUNC_5(VAR_1, VAR_2, VAR_0, 0, &VAR_5,
        &VAR_6);
}
