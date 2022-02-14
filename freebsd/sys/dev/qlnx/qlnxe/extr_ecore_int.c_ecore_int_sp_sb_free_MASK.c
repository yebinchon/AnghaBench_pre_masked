
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_phys; scalar_t__ sb_virt; } ;
struct ecore_sb_sp_info {TYPE_1__ sb_info; } ;
struct ecore_hwfn {struct ecore_sb_sp_info* p_sp_sb; int p_dev; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,struct ecore_sb_sp_info*) ;
 struct ecore_sb_sp_info* VAR_0 ;
 int FUNC_2 (struct ecore_hwfn*) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_1)
{
 struct ecore_sb_sp_info *VAR_2 = VAR_1->p_sp_sb;

 if (!VAR_2)
  return;

 if (VAR_2->sb_info.sb_virt) {
  FUNC_0(VAR_1->p_dev,
           VAR_2->sb_info.sb_virt,
           VAR_2->sb_info.sb_phys,
           FUNC_2(VAR_1));
 }

 FUNC_1(VAR_1->p_dev, VAR_2);
 VAR_1->p_sp_sb = VAR_0;
}
