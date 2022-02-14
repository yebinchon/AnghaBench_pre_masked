
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* producedAt; } ;
struct TYPE_5__ {TYPE_1__ tbsResponseData; } ;
typedef TYPE_2__ OCSP_BASICRESP ;
typedef int ASN1_GENERALIZEDTIME ;



const ASN1_GENERALIZEDTIME *FUNC_0(const OCSP_BASICRESP* VAR_0)
{
    return VAR_0->tbsResponseData.producedAt;
}
