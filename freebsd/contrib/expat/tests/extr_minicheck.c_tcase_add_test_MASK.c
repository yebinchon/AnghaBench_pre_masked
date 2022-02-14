
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tcase_test_function ;
struct TYPE_3__ {int allocated; int ntests; int * tests; } ;
typedef TYPE_1__ TCase ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,size_t) ;

void
FUNC_2(TCase *VAR_0, tcase_test_function VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    if (VAR_0->allocated == VAR_0->ntests) {
        int VAR_2 = VAR_0->allocated + 100;
        size_t VAR_3 = sizeof(tcase_test_function) * VAR_2;
        tcase_test_function *VAR_4 = FUNC_1(VAR_0->tests, VAR_3);
        FUNC_0(VAR_4 != ((void*)0));
        VAR_0->tests = VAR_4;
        VAR_0->allocated = VAR_2;
    }
    VAR_0->tests[VAR_0->ntests] = VAR_1;
    VAR_0->ntests++;
}
