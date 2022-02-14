
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ action ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(action *VAR_0)
{
    action *VAR_1;

    while (VAR_0)
    {
 VAR_1 = VAR_0->next;
 FUNC_0(VAR_0);
 VAR_0 = VAR_1;
    }
}
