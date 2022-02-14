
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ failed; int num_test; } ;
typedef TYPE_1__ sub_suite ;
struct TYPE_5__ {TYPE_1__* tail; } ;
typedef TYPE_2__ abts_suite ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(abts_suite *VAR_2)
{
    if (VAR_2 != ((void*)0)) {
        sub_suite *VAR_3 = VAR_2->tail;
        if (!VAR_0) {
            FUNC_1(VAR_1, "\b");
            FUNC_0(VAR_1);
        }
        if (VAR_3->failed == 0) {
            FUNC_1(VAR_1, "SUCCESS\n");
            FUNC_0(VAR_1);
        }
        else {
            FUNC_1(VAR_1, "FAILED %ld of %d\n", VAR_3->failed, VAR_3->num_test);
            FUNC_0(VAR_1);
        }
    }
}
