
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ bucket ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1(void)
{
    bucket *VAR_1, *VAR_2;

    for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_2)
    {
 VAR_2 = VAR_1->next;
 FUNC_0(VAR_1);
    }
}
