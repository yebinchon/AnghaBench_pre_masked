
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tests; } ;
struct TYPE_5__ {struct TYPE_5__* next_tcase; } ;
typedef TYPE_1__ TCase ;
typedef TYPE_2__ Suite ;


 int FUNC_0 (int ) ;

void
FUNC_1(Suite *VAR_0, TCase *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_1->next_tcase == ((void*)0));

    VAR_1->next_tcase = VAR_0->tests;
    VAR_0->tests = VAR_1;
}
