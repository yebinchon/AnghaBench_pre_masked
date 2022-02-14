
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* hx509_env ;
struct TYPE_5__ {TYPE_2__* list; TYPE_2__* string; } ;
struct TYPE_6__ {scalar_t__ type; struct TYPE_6__* name; TYPE_1__ u; struct TYPE_6__* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(hx509_env VAR_2)
{
    while(VAR_2) {
 hx509_env VAR_3 = VAR_2->next;

 if (VAR_2->type == VAR_1)
     FUNC_0(VAR_2->u.string);
 else if (VAR_2->type == VAR_0)
     FUNC_1(VAR_2->u.list);

 FUNC_0(VAR_2->name);
 FUNC_0(VAR_2);
 VAR_2 = VAR_3;
    }
}
