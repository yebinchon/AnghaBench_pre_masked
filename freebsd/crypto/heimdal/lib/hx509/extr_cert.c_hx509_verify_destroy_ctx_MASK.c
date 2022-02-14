
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_verify_ctx ;
struct TYPE_5__ {int revoke_ctx; int trust_anchors; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(hx509_verify_ctx VAR_0)
{
    if (VAR_0) {
 FUNC_1(&VAR_0->trust_anchors);
 FUNC_2(&VAR_0->revoke_ctx);
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));
    }
    FUNC_0(VAR_0);
}
