
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ reason; int serialNumber; } ;
typedef TYPE_2__ X509_REVOKED ;
typedef int X509_NAME ;
struct TYPE_10__ {int * revoked; } ;
struct TYPE_12__ {TYPE_1__ crl; int lock; } ;
typedef TYPE_3__ X509_CRL ;
typedef int ASN1_INTEGER ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(X509_CRL *VAR_1,
                          X509_REVOKED **VAR_2, ASN1_INTEGER *VAR_3,
                          X509_NAME *VAR_4)
{
    X509_REVOKED VAR_5, *VAR_6;
    int VAR_7, VAR_8;

    if (VAR_1->crl.revoked == ((void*)0))
        return 0;





    if (!FUNC_5(VAR_1->crl.revoked)) {
        FUNC_2(VAR_1->lock);
        FUNC_7(VAR_1->crl.revoked);
        FUNC_1(VAR_1->lock);
    }
    VAR_5.serialNumber = *VAR_3;
    VAR_7 = FUNC_4(VAR_1->crl.revoked, &VAR_5);
    if (VAR_7 < 0)
        return 0;

    for (VAR_8 = FUNC_6(VAR_1->crl.revoked); VAR_7 < VAR_8; VAR_7++) {
        VAR_6 = FUNC_8(VAR_1->crl.revoked, VAR_7);
        if (FUNC_0(&VAR_6->serialNumber, VAR_3))
            return 0;
        if (FUNC_3(VAR_1, VAR_4, VAR_6)) {
            if (VAR_2)
                *VAR_2 = VAR_6;
            if (VAR_6->reason == VAR_0)
                return 2;
            return 1;
        }
    }
    return 0;
}
