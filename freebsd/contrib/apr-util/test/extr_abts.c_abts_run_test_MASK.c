
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int (* test_func ) (TYPE_1__*,void*) ;
struct TYPE_10__ {int failed; int num_test; int name; } ;
typedef TYPE_2__ sub_suite ;
struct TYPE_11__ {TYPE_2__* tail; } ;
typedef TYPE_3__ abts_suite ;
struct TYPE_9__ {scalar_t__ failed; TYPE_2__* suite; } ;
typedef TYPE_1__ abts_case ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

void FUNC_4(abts_suite *VAR_0, test_func VAR_1, void *VAR_2)
{
    abts_case *VAR_3;
    sub_suite *VAR_4;

    if (!FUNC_2(VAR_0->tail->name)) {
        return;
    }
    VAR_4 = VAR_0->tail;

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    VAR_3->failed = 0;
    VAR_3->suite = VAR_4;

    VAR_4->num_test++;
    FUNC_3();

    VAR_1(VAR_3, VAR_2);

    if (VAR_3->failed) {
        VAR_4->failed++;
    }
    FUNC_0(VAR_3);
}
