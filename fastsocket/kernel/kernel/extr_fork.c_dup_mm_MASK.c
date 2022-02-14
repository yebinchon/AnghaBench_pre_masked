
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct mm_struct {TYPE_1__* binfmt; int total_vm; int hiwater_vm; int hiwater_rss; int * pmd_huge_pte; scalar_t__ last_interval; scalar_t__ token_priority; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;
struct TYPE_3__ {int module; } ;


 struct mm_struct* FUNC_0 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct mm_struct*,struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*,struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*) ;
 scalar_t__ FUNC_5 (struct task_struct*,struct mm_struct*) ;
 int FUNC_6 (struct mm_struct*,struct mm_struct*,int) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (struct mm_struct*,struct task_struct*) ;
 int FUNC_9 (struct mm_struct*) ;
 int FUNC_10 (int ) ;

struct mm_struct *FUNC_11(struct task_struct *VAR_1)
{
 struct mm_struct *VAR_2, *VAR_3 = VAR_0->mm;
 int VAR_4;

 if (!VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_0();
 if (!VAR_2)
  goto fail_nomem;

 FUNC_6(VAR_2, VAR_3, sizeof(*VAR_2));


 VAR_2->token_priority = 0;
 VAR_2->last_interval = 0;





 if (!FUNC_8(VAR_2, VAR_1))
  goto fail_nomem;

 if (FUNC_5(VAR_1, VAR_2))
  goto fail_nocontext;

 FUNC_1(VAR_3, VAR_2);

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  goto free_pt;

 VAR_2->hiwater_rss = FUNC_4(VAR_2);
 VAR_2->hiwater_vm = VAR_2->total_vm;

 if (VAR_2->binfmt && !FUNC_10(VAR_2->binfmt->module))
  goto free_pt;

 return VAR_2;

free_pt:

 VAR_2->binfmt = ((void*)0);
 FUNC_9(VAR_2);

fail_nomem:
 return ((void*)0);

fail_nocontext:




 FUNC_7(VAR_2);
 FUNC_3(VAR_2);
 return ((void*)0);
}
