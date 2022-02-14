
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_1__ ERR_STATE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(void)
{
    int VAR_1;
    ERR_STATE *VAR_2;

    VAR_2 = FUNC_0();
    if (VAR_2 == ((void*)0))
        return;

    for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++) {
        FUNC_1(VAR_2, VAR_1);
    }
    VAR_2->top = VAR_2->bottom = 0;
}
