
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c_flag; char* c_name; int c_done_cv; scalar_t__ c_arg; int (* c_func ) (scalar_t__,int) ;struct TYPE_3__* c_next; } ;
typedef TYPE_1__ callb_t ;
struct TYPE_4__ {int ct_lock; TYPE_1__** ct_first_cb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,void*,void*) ;
 int FUNC_6 (scalar_t__,int) ;

void *
FUNC_7(int VAR_4, int VAR_5)
{
 callb_t *VAR_6;
 void *VAR_7 = ((void*)0);

 FUNC_0(VAR_4 < VAR_2);

 FUNC_3(&VAR_3->ct_lock);

 for (VAR_6 = VAR_3->ct_first_cb[VAR_4];
     VAR_6 != ((void*)0) && VAR_7 == 0; VAR_6 = VAR_6->c_next) {
  while (VAR_6->c_flag & VAR_0)
   FUNC_2(&VAR_6->c_done_cv, &VAR_3->ct_lock);



  if (VAR_6->c_flag == VAR_1)
   continue;
  VAR_6->c_flag |= VAR_0;






  FUNC_4(&VAR_3->ct_lock);

  if (!(*VAR_6->c_func)(VAR_6->c_arg, VAR_5))
   VAR_7 = VAR_6->c_name;
  FUNC_3(&VAR_3->ct_lock);

  VAR_6->c_flag &= ~VAR_0;
  FUNC_1(&VAR_6->c_done_cv);
 }
 FUNC_4(&VAR_3->ct_lock);
 return (VAR_7);
}
