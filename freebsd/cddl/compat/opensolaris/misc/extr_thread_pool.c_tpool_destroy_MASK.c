
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tp_current; int tp_mutex; int tp_busycv; int tp_waitcv; int tp_flags; TYPE_2__* tp_active; int tp_workcv; } ;
typedef TYPE_1__ tpool_t ;
struct TYPE_6__ {int tpa_tid; struct TYPE_6__* tpa_next; } ;
typedef TYPE_2__ tpool_active_t ;
typedef int _Voidfp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;

void
FUNC_7(tpool_t *VAR_4)
{
 tpool_active_t *VAR_5;

 FUNC_6(&VAR_4->tp_mutex);
 FUNC_3((_Voidfp)VAR_3, &VAR_4->tp_mutex);


 VAR_4->tp_flags |= VAR_0;
 VAR_4->tp_flags &= ~VAR_1;
 (void) FUNC_4(&VAR_4->tp_workcv);


 for (VAR_5 = VAR_4->tp_active; VAR_5; VAR_5 = VAR_5->tpa_next)
  (void) FUNC_1(VAR_5->tpa_tid);


 while (VAR_4->tp_active != ((void*)0)) {
  VAR_4->tp_flags |= VAR_2;
  (void) FUNC_5(&VAR_4->tp_waitcv, &VAR_4->tp_mutex);
 }


 while (VAR_4->tp_current != 0)
  (void) FUNC_5(&VAR_4->tp_busycv, &VAR_4->tp_mutex);

 FUNC_2(1);
 FUNC_0(VAR_4);
}
