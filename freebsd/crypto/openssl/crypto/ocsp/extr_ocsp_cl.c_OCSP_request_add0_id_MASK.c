
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * reqCert; } ;
struct TYPE_9__ {int requestList; } ;
struct TYPE_10__ {TYPE_1__ tbsRequest; } ;
typedef TYPE_2__ OCSP_REQUEST ;
typedef TYPE_3__ OCSP_ONEREQ ;
typedef int OCSP_CERTID ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (int ,TYPE_3__*) ;

OCSP_ONEREQ *FUNC_4(OCSP_REQUEST *VAR_0, OCSP_CERTID *VAR_1)
{
    OCSP_ONEREQ *VAR_2 = ((void*)0);

    if ((VAR_2 = FUNC_2()) == ((void*)0))
        return ((void*)0);
    FUNC_0(VAR_2->reqCert);
    VAR_2->reqCert = VAR_1;
    if (VAR_0 && !FUNC_3(VAR_0->tbsRequest.requestList, VAR_2)) {
        VAR_2->reqCert = ((void*)0);
        goto err;
    }
    return VAR_2;
 err:
    FUNC_1(VAR_2);
    return ((void*)0);
}
