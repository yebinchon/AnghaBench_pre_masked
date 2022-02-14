
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _hx509_password {int dummy; } ;
typedef TYPE_1__* hx509_lock ;
struct TYPE_3__ {struct _hx509_password const password; } ;



const struct _hx509_password *
FUNC_0(hx509_lock VAR_0)
{
    return &VAR_0->password;
}
