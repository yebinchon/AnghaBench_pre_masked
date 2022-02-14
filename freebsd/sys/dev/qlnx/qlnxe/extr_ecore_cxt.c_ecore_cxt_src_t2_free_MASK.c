
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ecore_hwfn {int p_dev; struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {size_t t2_num_pages; TYPE_1__* t2; } ;
struct TYPE_3__ {int size; int p_phys; scalar_t__ p_virt; } ;


 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_1)
{
 struct ecore_cxt_mngr *VAR_2 = VAR_1->p_cxt_mngr;
 u32 VAR_3;

 if (!VAR_2->t2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->t2_num_pages; VAR_3++)
  if (VAR_2->t2[VAR_3].p_virt)
   FUNC_0(VAR_1->p_dev,
            VAR_2->t2[VAR_3].p_virt,
            VAR_2->t2[VAR_3].p_phys,
            VAR_2->t2[VAR_3].size);

 FUNC_1(VAR_1->p_dev, VAR_2->t2);
 VAR_2->t2 = VAR_0;
}
