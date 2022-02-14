
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {scalar_t__ local_alloc_state; unsigned int local_alloc_default_bits; int osb_lock; int la_enable_wq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ocfs2_super *VAR_3,
          unsigned int VAR_4)
{
 FUNC_1(&VAR_3->osb_lock);
 if (VAR_3->local_alloc_state == VAR_0 ||
     VAR_3->local_alloc_state == VAR_2)
  if (VAR_4 >= VAR_3->local_alloc_default_bits) {
   FUNC_0(&VAR_3->la_enable_wq);
   VAR_3->local_alloc_state = VAR_1;
  }
 FUNC_2(&VAR_3->osb_lock);
}
