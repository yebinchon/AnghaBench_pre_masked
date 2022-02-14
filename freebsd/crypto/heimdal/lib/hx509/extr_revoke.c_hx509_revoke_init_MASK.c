
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* hx509_revoke_ctx ;
typedef int hx509_context ;
struct TYPE_6__ {int * val; scalar_t__ len; } ;
struct TYPE_7__ {int * val; scalar_t__ len; } ;
struct TYPE_8__ {int ref; TYPE_1__ ocsps; TYPE_2__ crls; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int,int) ;

int
FUNC_1(hx509_context VAR_1, hx509_revoke_ctx *VAR_2)
{
    *VAR_2 = FUNC_0(1, sizeof(**VAR_2));
    if (*VAR_2 == ((void*)0))
 return VAR_0;

    (*VAR_2)->ref = 1;
    (*VAR_2)->crls.len = 0;
    (*VAR_2)->crls.val = ((void*)0);
    (*VAR_2)->ocsps.len = 0;
    (*VAR_2)->ocsps.val = ((void*)0);

    return 0;
}
