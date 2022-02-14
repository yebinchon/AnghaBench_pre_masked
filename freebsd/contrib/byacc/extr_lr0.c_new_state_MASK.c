
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** items; struct TYPE_4__* next; void* nitems; void* number; void* accessing_symbol; } ;
typedef TYPE_1__ core ;
typedef void* Value_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 void*** VAR_1 ;
 void*** VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static core *
FUNC_3(int VAR_6)
{
    unsigned VAR_7;
    core *VAR_8;
    Value_t *VAR_9;
    Value_t *VAR_10;
    Value_t *VAR_11;





    if (VAR_4 >= VAR_0)
 FUNC_1("too many states");

    VAR_9 = VAR_1[VAR_6];
    VAR_11 = VAR_2[VAR_6];
    VAR_7 = (unsigned)(VAR_11 - VAR_9);

    VAR_8 = (core *)FUNC_0((sizeof(core) + (VAR_7 - 1) * sizeof(Value_t)));
    VAR_8->accessing_symbol = (Value_t)VAR_6;
    VAR_8->number = (Value_t)VAR_4;
    VAR_8->nitems = (Value_t)VAR_7;

    VAR_10 = VAR_8->items;
    while (VAR_9 < VAR_11)
 *VAR_10++ = *VAR_9++;

    VAR_3->next = VAR_8;
    VAR_3 = VAR_8;

    VAR_4++;

    return (VAR_8);
}
