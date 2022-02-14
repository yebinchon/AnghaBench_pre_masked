
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp_mutex; int tp_flags; } ;
typedef TYPE_1__ tpool_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(tpool_t *VAR_1)
{

 FUNC_0(&VAR_1->tp_mutex);
 VAR_1->tp_flags |= VAR_0;
 FUNC_1(&VAR_1->tp_mutex);
}
