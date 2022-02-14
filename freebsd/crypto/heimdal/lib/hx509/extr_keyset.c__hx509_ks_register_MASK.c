
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hx509_keyset_ops {int name; } ;
typedef TYPE_1__* hx509_context ;
struct TYPE_4__ {int ks_num_ops; struct hx509_keyset_ops** ks_ops; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 struct hx509_keyset_ops** FUNC_1 (struct hx509_keyset_ops**,int) ;

void
FUNC_2(hx509_context VAR_0, struct hx509_keyset_ops *VAR_1)
{
    struct hx509_keyset_ops **VAR_2;

    if (FUNC_0(VAR_0, VAR_1->name))
 return;

    VAR_2 = FUNC_1(VAR_0->ks_ops,
    (VAR_0->ks_num_ops + 1) * sizeof(VAR_0->ks_ops[0]));
    if (VAR_2 == ((void*)0))
 return;
    VAR_2[VAR_0->ks_num_ops] = VAR_1;
    VAR_0->ks_ops = VAR_2;
    VAR_0->ks_num_ops++;
}
