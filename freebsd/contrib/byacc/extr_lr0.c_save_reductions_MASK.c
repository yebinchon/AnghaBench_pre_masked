
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t nreds; size_t* rules; struct TYPE_5__* next; int number; } ;
typedef TYPE_1__ reductions ;
typedef size_t Value_t ;
struct TYPE_6__ {int number; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t* VAR_4 ;
 int* VAR_5 ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void
FUNC_1(void)
{
    Value_t *VAR_7;
    Value_t *VAR_8;
    Value_t *VAR_9;
    int VAR_10;
    Value_t VAR_11;
    reductions *VAR_12;
    Value_t *VAR_13;

    VAR_11 = 0;
    for (VAR_7 = VAR_1; VAR_7 < VAR_2; VAR_7++)
    {
 VAR_10 = VAR_5[*VAR_7];
 if (VAR_10 < 0)
 {
     VAR_4[VAR_11++] = (Value_t)-VAR_10;
 }
    }

    if (VAR_11)
    {
 VAR_12 = (reductions *)FUNC_0((sizeof(reductions) +
          (unsigned)(VAR_11 - 1) *
        sizeof(Value_t)));

 VAR_12->number = VAR_6->number;
 VAR_12->nreds = VAR_11;

 VAR_8 = VAR_4;
 VAR_9 = VAR_12->rules;
 VAR_13 = VAR_8 + VAR_11;

 while (VAR_8 < VAR_13)
     *VAR_9++ = *VAR_8++;

 if (VAR_3)
 {
     VAR_3->next = VAR_12;
     VAR_3 = VAR_12;
 }
 else
 {
     VAR_0 = VAR_12;
     VAR_3 = VAR_12;
 }
    }
}
