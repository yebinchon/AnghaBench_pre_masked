
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hx509_verify_ctx ;
typedef int hx509_context ;
struct TYPE_4__ {int max_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;

int
FUNC_1(hx509_context VAR_2, hx509_verify_ctx *VAR_3)
{
    hx509_verify_ctx VAR_4;

    VAR_4 = FUNC_0(1, sizeof(*VAR_4));
    if (VAR_4 == ((void*)0))
 return VAR_0;

    VAR_4->max_depth = VAR_1;

    *VAR_3 = VAR_4;

    return 0;
}
