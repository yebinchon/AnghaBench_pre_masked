
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
typedef int hx509_cert ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int key_oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;

int
FUNC_3(hx509_cert VAR_2, hx509_private_key VAR_3)
{
    if (FUNC_0(VAR_3->ops->key_oid, VAR_1) == 0)
 return FUNC_2(VAR_2, VAR_3);
    if (FUNC_0(VAR_3->ops->key_oid, VAR_0) == 0)
 return FUNC_1(VAR_2, VAR_3);
    return 0;

}
