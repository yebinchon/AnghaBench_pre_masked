
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zl_suspend; int zl_lock; } ;
typedef TYPE_1__ zilog_t ;
typedef int objset_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;

void
FUNC_7(void *VAR_1)
{
 objset_t *VAR_2 = VAR_1;
 zilog_t *VAR_3 = FUNC_2(VAR_2);

 FUNC_5(&VAR_3->zl_lock);
 FUNC_0(VAR_3->zl_suspend != 0);
 VAR_3->zl_suspend--;
 FUNC_6(&VAR_3->zl_lock);
 FUNC_3(FUNC_1(VAR_2), VAR_0);
 FUNC_4(FUNC_1(VAR_2), VAR_0);
}
