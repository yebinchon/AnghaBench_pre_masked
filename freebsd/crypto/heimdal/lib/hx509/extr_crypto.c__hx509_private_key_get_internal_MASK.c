
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
typedef int hx509_context ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int * (* get_internal ) (int ,TYPE_2__*,char const*) ;} ;
typedef int BIGNUM ;


 int * FUNC_0 (int ,TYPE_2__*,char const*) ;

BIGNUM *
FUNC_1(hx509_context VAR_0,
    hx509_private_key VAR_1,
    const char *VAR_2)
{
    if (VAR_1->ops->get_internal == ((void*)0))
 return ((void*)0);
    return (*VAR_1->ops->get_internal)(VAR_0, VAR_1, VAR_2);
}
