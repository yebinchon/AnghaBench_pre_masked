
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ references; struct TYPE_4__* next; } ;
typedef TYPE_1__ APP_INFO ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(APP_INFO *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if (--(VAR_0->references) <= 0) {
        FUNC_1(VAR_0->next);
        FUNC_0(VAR_0);
    }
}
