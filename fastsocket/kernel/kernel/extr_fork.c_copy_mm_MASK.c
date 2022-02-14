
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {struct mm_struct* active_mm; struct mm_struct* mm; TYPE_1__* signal; scalar_t__ nivcsw; scalar_t__ nvcsw; scalar_t__ last_switch_count; scalar_t__ maj_flt; scalar_t__ min_flt; } ;
struct mm_struct {int oom_disable_count; scalar_t__ last_interval; scalar_t__ token_priority; int mm_users; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;
struct TYPE_3__ {scalar_t__ oom_score_adj; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_3 ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_4, struct task_struct * VAR_5)
{
 struct mm_struct * VAR_6, *VAR_7;
 int VAR_8;

 VAR_5->min_flt = VAR_5->maj_flt = 0;
 VAR_5->nvcsw = VAR_5->nivcsw = 0;




 VAR_5->mm = ((void*)0);
 VAR_5->active_mm = ((void*)0);






 VAR_7 = VAR_3->mm;
 if (!VAR_7)
  return 0;

 if (VAR_4 & VAR_0) {
  FUNC_0(&VAR_7->mm_users);
  VAR_6 = VAR_7;
  goto good_mm;
 }

 VAR_8 = -VAR_1;
 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6)
  goto fail_nomem;

good_mm:

 VAR_6->token_priority = 0;
 VAR_6->last_interval = 0;
 if (VAR_5->signal->oom_score_adj == VAR_2)
  FUNC_0(&VAR_6->oom_disable_count);

 VAR_5->mm = VAR_6;
 VAR_5->active_mm = VAR_6;
 return 0;

fail_nomem:
 return VAR_8;
}
