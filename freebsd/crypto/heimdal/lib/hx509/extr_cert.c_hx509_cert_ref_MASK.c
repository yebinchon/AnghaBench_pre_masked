
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hx509_cert ;
struct TYPE_4__ {scalar_t__ ref; } ;


 int FUNC_0 (char*) ;

hx509_cert
FUNC_1(hx509_cert VAR_0)
{
    if (VAR_0 == ((void*)0))
 return ((void*)0);
    if (VAR_0->ref <= 0)
 FUNC_0("cert refcount <= 0");
    VAR_0->ref++;
    if (VAR_0->ref == 0)
 FUNC_0("cert refcount == 0");
    return VAR_0;
}
