
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_peer_info ;
typedef int hx509_cert ;
struct TYPE_3__ {scalar_t__ cert; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(hx509_peer_info VAR_0,
    hx509_cert VAR_1)
{
    if (VAR_0->cert)
 FUNC_0(VAR_0->cert);
    VAR_0->cert = FUNC_1(VAR_1);
    return 0;
}
