
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_vprint_func ;
typedef TYPE_1__* hx509_validate_ctx ;
struct TYPE_3__ {void* ctx; int vprint_func; } ;



void
FUNC_0(hx509_validate_ctx VAR_0,
        hx509_vprint_func VAR_1,
        void *VAR_2)
{
    VAR_0->vprint_func = VAR_1;
    VAR_0->ctx = VAR_2;
}
