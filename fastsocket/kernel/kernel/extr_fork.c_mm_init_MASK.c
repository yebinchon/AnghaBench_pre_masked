
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct mm_struct {int flags; unsigned long cached_hole_size; scalar_t__ def_flags; int oom_disable_count; int free_area_cache; int page_table_lock; scalar_t__ nr_ptes; int * core_state; int mmlist; int mmap_sem; int mm_count; int mm_users; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct mm_struct*,struct task_struct*) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (struct mm_struct*,int ,int ) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;

__attribute__((used)) static struct mm_struct * FUNC_11(struct mm_struct * VAR_7, struct task_struct *VAR_8)
{
 FUNC_1(&VAR_7->mm_users, 1);
 FUNC_1(&VAR_7->mm_count, 1);
 FUNC_3(&VAR_7->mmap_sem);
 FUNC_0(&VAR_7->mmlist);
 VAR_7->flags = (VAR_3->mm) ?
  (VAR_3->mm->flags & VAR_0) : VAR_4;
 VAR_7->core_state = ((void*)0);
 VAR_7->nr_ptes = 0;
 FUNC_9(VAR_7, VAR_5, 0);
 FUNC_9(VAR_7, VAR_2, 0);
 FUNC_9(VAR_7, VAR_6, 0);
 FUNC_10(&VAR_7->page_table_lock);
 VAR_7->free_area_cache = VAR_1;
 VAR_7->cached_hole_size = ~0UL;
 FUNC_6(VAR_7);
 FUNC_7(VAR_7, VAR_8);
 FUNC_1(&VAR_7->oom_disable_count, 0);

 if (FUNC_4(!FUNC_5(VAR_7))) {
  VAR_7->def_flags = 0;
  FUNC_8(VAR_7);
  return VAR_7;
 }

 FUNC_2(VAR_7);
 return ((void*)0);
}
