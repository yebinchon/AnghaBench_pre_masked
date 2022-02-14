
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp_mutex; int tp_waitcv; int tp_flags; int * tp_active; int * tp_head; } ;
typedef TYPE_1__ tpool_t ;
typedef int _Voidfp ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

void
FUNC_4(tpool_t *VAR_2)
{

 FUNC_3(&VAR_2->tp_mutex);
 FUNC_1((_Voidfp)VAR_1, &VAR_2->tp_mutex);
 while (VAR_2->tp_head != ((void*)0) || VAR_2->tp_active != ((void*)0)) {
  VAR_2->tp_flags |= VAR_0;
  (void) FUNC_2(&VAR_2->tp_waitcv, &VAR_2->tp_mutex);
 }
 FUNC_0(1);
}
