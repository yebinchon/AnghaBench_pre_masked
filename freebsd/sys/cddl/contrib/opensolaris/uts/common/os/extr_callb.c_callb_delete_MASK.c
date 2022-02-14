
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t c_class; int c_flag; struct TYPE_3__* c_next; int c_done_cv; } ;
typedef TYPE_1__ callb_t ;
typedef scalar_t__ callb_id_t ;
struct TYPE_4__ {int ct_lock; TYPE_1__* ct_freelist; TYPE_1__** ct_first_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,void*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(callb_id_t VAR_4)
{
 callb_t **VAR_5;
 callb_t *VAR_6 = (callb_t *)VAR_4;

 FUNC_2(&VAR_3->ct_lock);

 for (;;) {
  VAR_5 = &VAR_3->ct_first_cb[VAR_6->c_class];
  while (*VAR_5 != ((void*)0) && *VAR_5 != VAR_6)
   VAR_5 = &(*VAR_5)->c_next;
  if (!(VAR_6->c_flag & VAR_0))
   break;

  FUNC_1(&VAR_6->c_done_cv, &VAR_3->ct_lock);
 }

 *VAR_5 = VAR_6->c_next;


 VAR_6->c_flag = VAR_1;
 VAR_6->c_next = VAR_3->ct_freelist;
 VAR_3->ct_freelist = VAR_6;

 FUNC_3(&VAR_3->ct_lock);
 return (0);
}
