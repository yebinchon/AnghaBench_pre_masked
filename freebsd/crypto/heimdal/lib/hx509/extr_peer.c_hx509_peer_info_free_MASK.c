
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* hx509_peer_info ;
struct TYPE_6__ {scalar_t__ cert; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(hx509_peer_info VAR_0)
{
    if (VAR_0 == ((void*)0))
 return;
    if (VAR_0->cert)
 FUNC_2(VAR_0->cert);
    FUNC_1(VAR_0);
    FUNC_3(VAR_0, 0, sizeof(*VAR_0));
    FUNC_0(VAR_0);
}
