
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_sp_sb; int p_sb_attn; } ;
struct TYPE_2__ {int sb_info; } ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int *) ;
 int FUNC_2 (struct ecore_hwfn*) ;

void FUNC_3(struct ecore_hwfn *VAR_0, struct ecore_ptt *VAR_1)
{
 if (!VAR_0 || !VAR_0->p_sp_sb || !VAR_0->p_sb_attn)
  return;

 FUNC_1(VAR_0, VAR_1, &VAR_0->p_sp_sb->sb_info);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0);
}
