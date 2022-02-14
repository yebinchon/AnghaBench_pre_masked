
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int issuer; } ;
struct TYPE_6__ {TYPE_1__ crl; } ;
typedef TYPE_2__ X509_CRL ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(const X509_CRL *VAR_0, const X509_CRL *VAR_1)
{
    return FUNC_0(VAR_0->crl.issuer, VAR_1->crl.issuer);
}
