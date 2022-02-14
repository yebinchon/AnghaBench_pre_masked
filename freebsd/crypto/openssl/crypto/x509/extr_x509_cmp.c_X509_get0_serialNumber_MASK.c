
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const serialNumber; } ;
struct TYPE_5__ {TYPE_1__ cert_info; } ;
typedef TYPE_2__ X509 ;
typedef int ASN1_INTEGER ;



const ASN1_INTEGER *FUNC_0(const X509 *VAR_0)
{
    return &VAR_0->cert_info.serialNumber;
}
