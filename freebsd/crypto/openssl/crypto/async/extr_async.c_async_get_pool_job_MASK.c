
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ max_size; scalar_t__ curr_size; int jobs; } ;
typedef TYPE_1__ async_pool ;
struct TYPE_8__ {int fibrectx; } ;
typedef TYPE_2__ ASYNC_JOB ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static ASYNC_JOB *FUNC_6(void) {
    ASYNC_JOB *VAR_1;
    async_pool *VAR_2;

    VAR_2 = (async_pool *)FUNC_1(&VAR_0);
    if (VAR_2 == ((void*)0)) {




        if (FUNC_0(0, 0) == 0)
            return ((void*)0);
        VAR_2 = (async_pool *)FUNC_1(&VAR_0);
    }

    VAR_1 = FUNC_5(VAR_2->jobs);
    if (VAR_1 == ((void*)0)) {

        if ((VAR_2->max_size != 0) && (VAR_2->curr_size >= VAR_2->max_size))
            return ((void*)0);

        VAR_1 = FUNC_4();
        if (VAR_1 != ((void*)0)) {
            if (! FUNC_2(&VAR_1->fibrectx)) {
                FUNC_3(VAR_1);
                return ((void*)0);
            }
            VAR_2->curr_size++;
        }
    }
    return VAR_1;
}
