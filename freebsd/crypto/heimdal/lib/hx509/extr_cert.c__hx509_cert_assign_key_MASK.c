
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_private_key ;
typedef TYPE_1__* hx509_cert ;
struct TYPE_3__ {scalar_t__ private_key; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;

int
FUNC_2(hx509_cert VAR_0, hx509_private_key VAR_1)
{
    if (VAR_0->private_key)
 FUNC_1(&VAR_0->private_key);
    VAR_0->private_key = FUNC_0(VAR_1);
    return 0;
}
