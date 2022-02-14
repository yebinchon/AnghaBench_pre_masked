
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hx509_certs ;
struct TYPE_4__ {scalar_t__ ref; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

hx509_certs
FUNC_1(hx509_certs VAR_1)
{
    if (VAR_1 == ((void*)0))
 return ((void*)0);
    if (VAR_1->ref == 0)
 FUNC_0("certs refcount == 0 on ref");
    if (VAR_1->ref == VAR_0)
 FUNC_0("certs refcount == UINT_MAX on ref");
    VAR_1->ref++;
    return VAR_1;
}
