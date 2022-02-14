
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_verify_ctx ;
typedef int hx509_revoke_ctx ;
struct TYPE_3__ {scalar_t__ revoke_ctx; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;

void
FUNC_2(hx509_verify_ctx VAR_0, hx509_revoke_ctx VAR_1)
{
    if (VAR_0->revoke_ctx)
 FUNC_1(&VAR_0->revoke_ctx);
    VAR_0->revoke_ctx = FUNC_0(VAR_1);
}
