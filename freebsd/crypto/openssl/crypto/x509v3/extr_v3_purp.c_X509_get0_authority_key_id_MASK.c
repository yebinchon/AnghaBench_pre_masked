
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* akid; } ;
typedef TYPE_2__ X509 ;
struct TYPE_5__ {int const* keyid; } ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (TYPE_2__*,int,int) ;

const ASN1_OCTET_STRING *FUNC_1(X509 *VAR_0)
{

    FUNC_0(VAR_0, -1, -1);
    return (VAR_0->akid != ((void*)0) ? VAR_0->akid->keyid : ((void*)0));
}
