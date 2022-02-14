
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hx509_private_key ;
struct TYPE_4__ {scalar_t__ ref; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

hx509_private_key
FUNC_1(hx509_private_key VAR_1)
{
    if (VAR_1->ref == 0)
 FUNC_0("key refcount <= 0 on ref");
    VAR_1->ref++;
    if (VAR_1->ref == VAR_0)
 FUNC_0("key refcount == UINT_MAX on ref");
    return VAR_1;
}
