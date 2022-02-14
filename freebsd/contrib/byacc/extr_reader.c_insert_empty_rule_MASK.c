
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ args; int class; int tag; struct TYPE_6__* next; } ;
typedef TYPE_1__ bucket ;
typedef scalar_t__ Value_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 TYPE_1__** VAR_11 ;
 TYPE_1__** VAR_12 ;
 int * VAR_13 ;
 scalar_t__* VAR_14 ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void
FUNC_5(void)
{
    bucket *VAR_15, **VAR_16;

    FUNC_0(VAR_3);
    FUNC_0(VAR_4 >= VAR_1);
    FUNC_4(VAR_3, "$$%d", ++VAR_5);
    VAR_15 = FUNC_3(VAR_3);
    VAR_6->next = VAR_15;
    VAR_6 = VAR_15;
    VAR_15->tag = VAR_12[VAR_10]->tag;
    VAR_15->class = VAR_0;




    VAR_9 = (Value_t)(VAR_9 + 2);
    if (VAR_9 > VAR_7)
 FUNC_1();
    VAR_16 = VAR_11 + VAR_9 - 1;
    *VAR_16-- = VAR_15;
    while ((VAR_16[0] = VAR_16[-1]) != 0)
 --VAR_16;

    if (++VAR_10 >= VAR_8)
 FUNC_2();
    VAR_12[VAR_10] = VAR_12[VAR_10 - 1];
    VAR_12[VAR_10 - 1] = VAR_15;
    VAR_14[VAR_10] = VAR_14[VAR_10 - 1];
    VAR_14[VAR_10 - 1] = 0;
    VAR_13[VAR_10] = VAR_13[VAR_10 - 1];
    VAR_13[VAR_10 - 1] = VAR_2;
}
