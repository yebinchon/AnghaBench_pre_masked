
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ failed; int num_test; char* name; struct TYPE_7__* next; } ;
typedef TYPE_2__ sub_suite ;
struct TYPE_8__ {TYPE_2__* head; TYPE_1__* tail; } ;
typedef TYPE_3__ abts_suite ;
struct TYPE_6__ {int not_run; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(abts_suite *VAR_2)
{
    int VAR_3 = 0;
    sub_suite *VAR_4;

    if (VAR_2 && VAR_2->tail &&!VAR_2->tail->not_run) {
        FUNC_0(VAR_2);
    }

    for (VAR_4 = VAR_2->head; VAR_4; VAR_4 = VAR_4->next) {
        VAR_3 += VAR_4->failed;
    }

    if (VAR_0) {
        return 0;
    }

    if (VAR_3 == 0) {
        FUNC_2("All tests passed.\n");
        return 0;
    }

    VAR_4 = VAR_2->head;
    FUNC_1(VAR_1, "%-15s\t\tTotal\tFail\tFailed %%\n", "Failed Tests");
    FUNC_1(VAR_1, "===================================================\n");
    while (VAR_4 != ((void*)0)) {
        if (VAR_4->failed != 0) {
            float VAR_5 = ((float)VAR_4->failed / (float)VAR_4->num_test);
            FUNC_1(VAR_1, "%-15s\t\t%5d\t%4ld\t%6.2f%%\n", VAR_4->name,
                    VAR_4->num_test, VAR_4->failed, VAR_5 * 100);
        }
        VAR_4 = VAR_4->next;
    }
    return 1;
}
