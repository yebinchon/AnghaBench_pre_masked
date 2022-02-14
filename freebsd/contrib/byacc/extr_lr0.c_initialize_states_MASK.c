
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t nitems; int * items; scalar_t__ accessing_symbol; scalar_t__ number; scalar_t__ link; scalar_t__ next; } ;
typedef TYPE_1__ core ;
typedef size_t Value_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t** VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void
FUNC_2(void)
{
    unsigned VAR_7;
    Value_t *VAR_8;
    core *VAR_9;

    VAR_8 = VAR_0[VAR_5];
    for (VAR_7 = 0; VAR_8[VAR_7] >= 0; ++VAR_7)
 continue;

    VAR_9 = (core *)FUNC_0(sizeof(core) + VAR_7 * sizeof(Value_t));
    FUNC_1(VAR_9);

    VAR_9->next = 0;
    VAR_9->link = 0;
    VAR_9->number = 0;
    VAR_9->accessing_symbol = 0;
    VAR_9->nitems = (Value_t)VAR_7;

    for (VAR_7 = 0; VAR_8[VAR_7] >= 0; ++VAR_7)
 VAR_9->items[VAR_7] = VAR_4[VAR_8[VAR_7]];

    VAR_1 = VAR_2 = VAR_6 = VAR_9;
    VAR_3 = 1;
}
