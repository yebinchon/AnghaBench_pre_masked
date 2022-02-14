
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tq_nalloc; scalar_t__ tq_minalloc; scalar_t__ tq_maxalloc; int tq_lock; int tq_maxalloc_wait; int tq_maxalloc_cv; TYPE_2__* tq_freelist; } ;
typedef TYPE_1__ taskq_t ;
struct TYPE_7__ {struct TYPE_7__* tqent_next; } ;
typedef TYPE_2__ taskq_ent_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static taskq_ent_t *
FUNC_5(taskq_t *VAR_2, int VAR_3)
{
 taskq_ent_t *VAR_4;
 int VAR_5;

again: if ((VAR_4 = VAR_2->tq_freelist) != ((void*)0) && VAR_2->tq_nalloc >= VAR_2->tq_minalloc) {
  VAR_2->tq_freelist = VAR_4->tqent_next;
 } else {
  if (VAR_2->tq_nalloc >= VAR_2->tq_maxalloc) {
   if (!(VAR_3 & VAR_0))
    return (((void*)0));
   VAR_2->tq_maxalloc_wait++;




   VAR_5 = FUNC_0(&VAR_2->tq_maxalloc_cv,
       &VAR_2->tq_lock, FUNC_1() + VAR_1);

   VAR_2->tq_maxalloc_wait--;
   if (VAR_5 > 0)
    goto again;
  }
  FUNC_4(&VAR_2->tq_lock);

  VAR_4 = FUNC_2(sizeof (taskq_ent_t), VAR_3 & VAR_0);

  FUNC_3(&VAR_2->tq_lock);
  if (VAR_4 != ((void*)0))
   VAR_2->tq_nalloc++;
 }
 return (VAR_4);
}
