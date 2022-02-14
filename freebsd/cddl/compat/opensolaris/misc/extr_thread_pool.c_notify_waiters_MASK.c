
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp_waitcv; int tp_flags; int * tp_active; int * tp_head; } ;
typedef TYPE_1__ tpool_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(tpool_t *VAR_1)
{
 if (VAR_1->tp_head == ((void*)0) && VAR_1->tp_active == ((void*)0)) {
  VAR_1->tp_flags &= ~VAR_0;
  (void) FUNC_0(&VAR_1->tp_waitcv);
 }
}
