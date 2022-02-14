
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* aliases; } ;
typedef TYPE_2__ krb5_keytab_entry ;
typedef int krb5_context ;
typedef int krb5_const_principal ;
typedef int krb5_boolean ;
struct TYPE_4__ {unsigned int len; int * val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static krb5_boolean
FUNC_1(krb5_context VAR_2,
   krb5_keytab_entry *VAR_3,
   krb5_const_principal VAR_4)
{
    unsigned int VAR_5;
    if (VAR_3->aliases == ((void*)0))
 return VAR_0;
    for (VAR_5 = 0; VAR_5 < VAR_3->aliases->len; VAR_5++)
 if (FUNC_0(VAR_2, &VAR_3->aliases->val[VAR_5], VAR_4))
     return VAR_1;
    return VAR_0;
}
