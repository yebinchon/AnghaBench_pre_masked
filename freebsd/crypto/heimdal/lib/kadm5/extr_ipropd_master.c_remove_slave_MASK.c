
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; scalar_t__ ac; struct TYPE_5__* name; int fd; } ;
typedef TYPE_1__ slave ;
typedef int krb5_context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (krb5_context VAR_0, slave *VAR_1, slave **VAR_2)
{
    slave **VAR_3;

    if (!FUNC_2(VAR_1->fd))
 FUNC_3 (VAR_1->fd);
    if (VAR_1->name)
 FUNC_0 (VAR_1->name);
    if (VAR_1->ac)
 FUNC_1 (VAR_0, VAR_1->ac);

    for (VAR_3 = VAR_2; *VAR_3; VAR_3 = &(*VAR_3)->next)
 if (*VAR_3 == VAR_1) {
     *VAR_3 = VAR_1->next;
     break;
 }
    FUNC_0 (VAR_1);
}
