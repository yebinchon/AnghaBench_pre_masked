
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* tests; } ;
struct TYPE_6__ {struct TYPE_6__* next_tcase; } ;
typedef TYPE_1__ TCase ;
typedef TYPE_2__ Suite ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(Suite *VAR_0)
{
    if (! VAR_0) {
        return;
    }

    while (VAR_0->tests != ((void*)0)) {
        TCase *VAR_1 = VAR_0->tests->next_tcase;
        FUNC_1(VAR_0->tests);
        VAR_0->tests = VAR_1;
    }
    FUNC_0(VAR_0);
}
