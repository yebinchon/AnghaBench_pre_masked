
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {scalar_t__ owner; int state; int dirty; int spinlock; } ;
struct dlm_ctxt {scalar_t__ node_num; int dirty_list; int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,struct dlm_ctxt*,struct dlm_lock_resource*) ;

void FUNC_5(struct dlm_ctxt *VAR_3, struct dlm_lock_resource *VAR_4)
{
 FUNC_4("dlm=%p, res=%p\n", VAR_3, VAR_4);

 FUNC_0(&VAR_3->spinlock);
 FUNC_0(&VAR_4->spinlock);


 if (VAR_4->owner == VAR_3->node_num) {
  if (VAR_4->state & (VAR_2 |
      VAR_0))
      return;

  if (FUNC_3(&VAR_4->dirty)) {

   FUNC_1(VAR_4);
   FUNC_2(&VAR_4->dirty, &VAR_3->dirty_list);
   VAR_4->state |= VAR_1;
  }
 }
}
