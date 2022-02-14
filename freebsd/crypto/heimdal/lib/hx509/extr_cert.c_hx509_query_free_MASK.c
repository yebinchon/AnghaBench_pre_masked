
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ expr; struct TYPE_8__* friendlyname; struct TYPE_8__* eku; struct TYPE_8__* issuer_name; struct TYPE_8__* serial; } ;
typedef TYPE_1__ hx509_query ;
typedef int hx509_context ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

void
FUNC_6(hx509_context VAR_0, hx509_query *VAR_1)
{
    if (VAR_1 == ((void*)0))
 return;

    if (VAR_1->serial) {
 FUNC_1(VAR_1->serial);
 FUNC_3(VAR_1->serial);
    }
    if (VAR_1->issuer_name) {
 FUNC_4(VAR_1->issuer_name);
 FUNC_3(VAR_1->issuer_name);
    }
    if (VAR_1->eku) {
 FUNC_2(VAR_1->eku);
 FUNC_3(VAR_1->eku);
    }
    if (VAR_1->friendlyname)
 FUNC_3(VAR_1->friendlyname);
    if (VAR_1->expr)
 FUNC_0(VAR_1->expr);

    FUNC_5(VAR_1, 0, sizeof(*VAR_1));
    FUNC_3(VAR_1);
}
