
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; scalar_t__* shift; scalar_t__ nshifts; int number; } ;
typedef TYPE_1__ shifts ;
typedef scalar_t__ Value_t ;
struct TYPE_6__ {int number; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
    shifts *VAR_5;
    Value_t *VAR_6;
    Value_t *VAR_7;
    Value_t *VAR_8;

    VAR_5 = (shifts *)FUNC_0((sizeof(shifts) +
         (unsigned)(VAR_2 - 1) * sizeof(Value_t)));

    VAR_5->number = VAR_4->number;
    VAR_5->nshifts = (Value_t)VAR_2;

    VAR_6 = VAR_3;
    VAR_7 = VAR_5->shift;
    VAR_8 = VAR_3 + VAR_2;

    while (VAR_6 < VAR_8)
 *VAR_7++ = *VAR_6++;

    if (VAR_1)
    {
 VAR_1->next = VAR_5;
 VAR_1 = VAR_5;
    }
    else
    {
 VAR_0 = VAR_5;
 VAR_1 = VAR_5;
    }
}
