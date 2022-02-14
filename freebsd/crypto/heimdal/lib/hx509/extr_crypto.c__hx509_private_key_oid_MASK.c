
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int key_oid; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int,char*) ;

int
FUNC_2(hx509_context VAR_0,
         const hx509_private_key VAR_1,
         heim_oid *VAR_2)
{
    int VAR_3;
    VAR_3 = FUNC_0(VAR_1->ops->key_oid, VAR_2);
    if (VAR_3)
 FUNC_1(VAR_0, 0, VAR_3, "malloc out of memory");
    return VAR_3;
}
