
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int rl_lock; int rl_tree; } ;
typedef TYPE_1__ rangelock_t ;
struct TYPE_9__ {scalar_t__ lr_type; int lr_count; int lr_read_cv; scalar_t__ lr_read_wanted; int lr_write_cv; scalar_t__ lr_write_wanted; int lr_proxy; TYPE_1__* lr_rangelock; } ;
typedef TYPE_2__ locked_range_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;

void
FUNC_8(locked_range_t *VAR_2)
{
 rangelock_t *VAR_3 = VAR_2->lr_rangelock;

 FUNC_0(VAR_2->lr_type == VAR_1 || VAR_2->lr_type == VAR_0);
 FUNC_0(VAR_2->lr_count == 1 || VAR_2->lr_count == 0);
 FUNC_0(!VAR_2->lr_proxy);

 FUNC_5(&VAR_3->rl_lock);
 if (VAR_2->lr_type == VAR_1) {

  FUNC_1(&VAR_3->rl_tree, VAR_2);
  FUNC_6(&VAR_3->rl_lock);
  if (VAR_2->lr_write_wanted) {
   FUNC_2(&VAR_2->lr_write_cv);
   FUNC_3(&VAR_2->lr_write_cv);
  }
  if (VAR_2->lr_read_wanted) {
   FUNC_2(&VAR_2->lr_read_cv);
   FUNC_3(&VAR_2->lr_read_cv);
  }
  FUNC_4(VAR_2, sizeof (locked_range_t));
 } else {




  FUNC_7(VAR_3, VAR_2);
  FUNC_6(&VAR_3->rl_lock);
 }
}
