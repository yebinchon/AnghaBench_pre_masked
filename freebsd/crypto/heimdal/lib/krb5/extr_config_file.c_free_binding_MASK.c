
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_context ;
struct TYPE_5__ {TYPE_2__* list; TYPE_2__* string; } ;
struct TYPE_6__ {scalar_t__ type; struct TYPE_6__* next; TYPE_1__ u; struct TYPE_6__* name; } ;
typedef TYPE_2__ krb5_config_binding ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2 (krb5_context VAR_2, krb5_config_binding *VAR_3)
{
    krb5_config_binding *VAR_4;

    while (VAR_3) {
 FUNC_0 (VAR_3->name);
 if (VAR_3->type == VAR_1)
     FUNC_0 (VAR_3->u.string);
 else if (VAR_3->type == VAR_0)
     FUNC_2 (VAR_2, VAR_3->u.list);
 else
     FUNC_1(VAR_2, "unknown binding type (%d) in free_binding",
   VAR_3->type);
 VAR_4 = VAR_3->next;
 FUNC_0 (VAR_3);
 VAR_3 = VAR_4;
    }
}
