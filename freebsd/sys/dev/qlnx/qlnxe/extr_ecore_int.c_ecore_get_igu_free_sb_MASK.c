
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct ecore_igu_block {int status; } ;
struct TYPE_4__ {TYPE_1__* p_igu_info; } ;
struct ecore_hwfn {TYPE_2__ hw_info; int p_dev; } ;
struct TYPE_3__ {struct ecore_igu_block* entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 struct ecore_igu_block* VAR_3 ;

struct ecore_igu_block *
FUNC_1(struct ecore_hwfn *VAR_4, bool VAR_5)
{
 struct ecore_igu_block *VAR_6;
 u16 VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->p_dev);
      VAR_7++) {
  VAR_6 = &VAR_4->hw_info.p_igu_info->entry[VAR_7];

  if (!(VAR_6->status & VAR_2) ||
      !(VAR_6->status & VAR_0))
   continue;

  if (!!(VAR_6->status & VAR_1) ==
      VAR_5)
   return VAR_6;
 }

 return VAR_3;
}
