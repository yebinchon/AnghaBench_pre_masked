
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int keep_win; } ;
struct TYPE_5__ {TYPE_3__ obj; } ;
typedef TYPE_1__ MY_OBJ ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void
FUNC_4(void *VAR_1)
{
    MY_OBJ *VAR_2 = (MY_OBJ *) VAR_1;

    if (FUNC_3(VAR_2)) {
 VAR_2->obj.keep_win = VAR_0;
 FUNC_2(&(VAR_2->obj));
 FUNC_1(VAR_2);
    }
    FUNC_0(1);
}
