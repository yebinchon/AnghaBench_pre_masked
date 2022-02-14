
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_sb_attn_info {int sb_phys; scalar_t__ sb_attn; } ;
struct ecore_hwfn {struct ecore_sb_attn_info* p_sb_attn; int p_dev; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,struct ecore_sb_attn_info*) ;
 struct ecore_sb_attn_info* VAR_0 ;
 int FUNC_2 (struct ecore_hwfn*) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_1)
{
 struct ecore_sb_attn_info *VAR_2 = VAR_1->p_sb_attn;

 if (!VAR_2)
  return;

 if (VAR_2->sb_attn) {
  FUNC_0(VAR_1->p_dev, VAR_2->sb_attn,
           VAR_2->sb_phys,
           FUNC_2(VAR_1));
 }

 FUNC_1(VAR_1->p_dev, VAR_2);
 VAR_1->p_sb_attn = VAR_0;
}
