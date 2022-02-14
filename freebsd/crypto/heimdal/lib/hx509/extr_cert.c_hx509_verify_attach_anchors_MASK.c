
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_verify_ctx ;
typedef int hx509_certs ;
struct TYPE_3__ {scalar_t__ trust_anchors; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(hx509_verify_ctx VAR_0, hx509_certs VAR_1)
{
    if (VAR_0->trust_anchors)
 FUNC_0(&VAR_0->trust_anchors);
    VAR_0->trust_anchors = FUNC_1(VAR_1);
}
