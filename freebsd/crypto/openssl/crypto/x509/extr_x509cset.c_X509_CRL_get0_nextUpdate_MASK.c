
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* nextUpdate; } ;
struct TYPE_5__ {TYPE_1__ crl; } ;
typedef TYPE_2__ X509_CRL ;
typedef int ASN1_TIME ;



const ASN1_TIME *FUNC_0(const X509_CRL *VAR_0)
{
    return VAR_0->crl.nextUpdate;
}
