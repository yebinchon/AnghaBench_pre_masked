
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_cert ;
typedef int _hx509_cert_release_func ;
struct TYPE_3__ {void* ctx; int release; } ;



void
FUNC_0(hx509_cert VAR_0,
   _hx509_cert_release_func VAR_1,
   void *VAR_2)
{
    VAR_0->release = VAR_1;
    VAR_0->ctx = VAR_2;
}
