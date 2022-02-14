
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* last; } ;
typedef TYPE_1__ ENTRY ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_2(ENTRY * VAR_2)

{
    ENTRY *VAR_3 = FUNC_0(VAR_2);

    if (VAR_3 == 0)
 FUNC_1(VAR_0);

    VAR_3->last = VAR_1;
    VAR_1 = VAR_3;

    VAR_3->next = 0;
    if (VAR_3->last)
 VAR_3->last->next = VAR_3;
}
