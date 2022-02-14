
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_6__ {TYPE_1__* optionalSignature; } ;
struct TYPE_5__ {int * certs; } ;
typedef TYPE_1__ OCSP_SIGNATURE ;
typedef TYPE_2__ OCSP_REQUEST ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(OCSP_REQUEST *VAR_0, X509 *VAR_1)
{
    OCSP_SIGNATURE *VAR_2;
    if (VAR_0->optionalSignature == ((void*)0))
        VAR_0->optionalSignature = FUNC_0();
    VAR_2 = VAR_0->optionalSignature;
    if (VAR_2 == ((void*)0))
        return 0;
    if (VAR_1 == ((void*)0))
        return 1;
    if (VAR_2->certs == ((void*)0)
        && (VAR_2->certs = FUNC_2()) == ((void*)0))
        return 0;

    if (!FUNC_3(VAR_2->certs, VAR_1))
        return 0;
    FUNC_1(VAR_1);
    return 1;
}
