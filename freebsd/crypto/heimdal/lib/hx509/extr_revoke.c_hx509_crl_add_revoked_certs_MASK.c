
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_crl ;
typedef int hx509_context ;
typedef int hx509_certs ;
struct TYPE_3__ {int revoked; } ;


 int FUNC_0 (int ,int ,int ) ;

int
FUNC_1(hx509_context VAR_0,
       hx509_crl VAR_1,
       hx509_certs VAR_2)
{
    return FUNC_0(VAR_0, VAR_1->revoked, VAR_2);
}
