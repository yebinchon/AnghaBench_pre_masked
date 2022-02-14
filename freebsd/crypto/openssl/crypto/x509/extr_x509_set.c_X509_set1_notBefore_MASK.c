
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int notBefore; } ;
struct TYPE_6__ {TYPE_1__ validity; } ;
struct TYPE_7__ {TYPE_2__ cert_info; } ;
typedef TYPE_3__ X509 ;
typedef int ASN1_TIME ;


 int FUNC_0 (int *,int const*) ;

int FUNC_1(X509 *VAR_0, const ASN1_TIME *VAR_1)
{
    if (VAR_0 == ((void*)0))
        return 0;
    return FUNC_0(&VAR_0->cert_info.validity.notBefore, VAR_1);
}
