
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* properties ;
struct TYPE_4__ {struct TYPE_4__* value; struct TYPE_4__* name; struct TYPE_4__* next; } ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(properties VAR_0)
{
    properties VAR_1;

    while (VAR_0) {
 VAR_1 = VAR_0->next;
 if (VAR_0->name)
     FUNC_0(VAR_0->name);
 if (VAR_0->value)
     FUNC_0(VAR_0->value);
 FUNC_0(VAR_0);
 VAR_0 = VAR_1;
    }
}
