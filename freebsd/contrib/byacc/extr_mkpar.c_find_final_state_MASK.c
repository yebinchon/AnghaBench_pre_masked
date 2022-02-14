
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* shift; int nshifts; } ;
typedef TYPE_1__ shifts ;
typedef size_t Value_t ;


 int* VAR_0 ;
 size_t VAR_1 ;
 int* VAR_2 ;
 TYPE_1__** VAR_3 ;

__attribute__((used)) static void
FUNC_0(void)
{
    int VAR_4, VAR_5;
    Value_t *VAR_6;
    shifts *VAR_7;

    VAR_7 = VAR_3[0];
    VAR_6 = VAR_7->shift;
    VAR_4 = VAR_2[1];
    for (VAR_5 = VAR_7->nshifts - 1; VAR_5 >= 0; --VAR_5)
    {
 VAR_1 = VAR_6[VAR_5];
 if (VAR_0[VAR_1] == VAR_4)
     break;
    }
}
