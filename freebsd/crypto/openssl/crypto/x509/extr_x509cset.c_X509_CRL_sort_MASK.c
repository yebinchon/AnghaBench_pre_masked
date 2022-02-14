
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sequence; } ;
typedef TYPE_3__ X509_REVOKED ;
struct TYPE_8__ {int modified; } ;
struct TYPE_7__ {TYPE_2__ enc; int revoked; } ;
struct TYPE_10__ {TYPE_1__ crl; } ;
typedef TYPE_4__ X509_CRL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ,int) ;

int FUNC_3(X509_CRL *VAR_0)
{
    int VAR_1;
    X509_REVOKED *VAR_2;



    FUNC_1(VAR_0->crl.revoked);
    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->crl.revoked); VAR_1++) {
        VAR_2 = FUNC_2(VAR_0->crl.revoked, VAR_1);
        VAR_2->sequence = VAR_1;
    }
    VAR_0->crl.enc.modified = 1;
    return 1;
}
