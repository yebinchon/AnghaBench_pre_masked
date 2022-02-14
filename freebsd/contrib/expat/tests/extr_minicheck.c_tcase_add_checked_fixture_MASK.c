
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tcase_teardown_function ;
typedef int tcase_setup_function ;
struct TYPE_3__ {int teardown; int setup; } ;
typedef TYPE_1__ TCase ;


 int FUNC_0 (int ) ;

void
FUNC_1(TCase *VAR_0,
                          tcase_setup_function VAR_1,
                          tcase_teardown_function VAR_2)
{
    FUNC_0(VAR_0 != ((void*)0));
    VAR_0->setup = VAR_1;
    VAR_0->teardown = VAR_2;
}
