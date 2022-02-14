
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int finish_string; } ;
struct TYPE_4__ {int percent; } ;
typedef TYPE_1__ MY_OBJ ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(void *VAR_2, int VAR_3)
{
    MY_OBJ *VAR_4 = (MY_OBJ *) VAR_2;
    bool VAR_5 = VAR_1.finish_string;

    VAR_1.finish_string = VAR_0;
    FUNC_0(0);
    VAR_4->percent = VAR_3;
    FUNC_1(VAR_4);
    VAR_1.finish_string = VAR_5;
}
