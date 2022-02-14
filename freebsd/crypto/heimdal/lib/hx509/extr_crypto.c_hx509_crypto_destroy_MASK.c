
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* hx509_crypto ;
struct TYPE_6__ {TYPE_2__* data; } ;
struct TYPE_7__ {int oid; struct TYPE_7__* param; TYPE_1__ key; struct TYPE_7__* name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

void
FUNC_3(hx509_crypto VAR_0)
{
    if (VAR_0->name)
 FUNC_1(VAR_0->name);
    if (VAR_0->key.data)
 FUNC_1(VAR_0->key.data);
    if (VAR_0->param)
 FUNC_1(VAR_0->param);
    FUNC_0(&VAR_0->oid);
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));
    FUNC_1(VAR_0);
}
