
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_verify_ctx ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;

void
FUNC_0(hx509_verify_ctx VAR_1, int VAR_2)
{
    if (VAR_2)
 VAR_1->flags |= VAR_0;
    else
 VAR_1->flags &= ~VAR_0;
}
