
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int X509_NAME ;
typedef int X509_EXTENSION ;
struct TYPE_14__ {TYPE_2__* location; int * method; } ;
struct TYPE_13__ {int * locator; int * issuer; } ;
struct TYPE_11__ {int * ia5; } ;
struct TYPE_12__ {TYPE_1__ d; int type; } ;
typedef TYPE_3__ OCSP_SERVICELOC ;
typedef int ASN1_STRING ;
typedef int ASN1_IA5STRING ;
typedef TYPE_4__ ACCESS_DESCRIPTION ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 () ;
 int * FUNC_8 (int ,int ,TYPE_3__*) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,TYPE_4__*) ;

X509_EXTENSION *FUNC_13(X509_NAME *VAR_3, const char **VAR_4)
{
    X509_EXTENSION *VAR_5 = ((void*)0);
    ASN1_IA5STRING *VAR_6 = ((void*)0);
    OCSP_SERVICELOC *VAR_7 = ((void*)0);
    ACCESS_DESCRIPTION *VAR_8 = ((void*)0);

    if ((VAR_7 = FUNC_7()) == ((void*)0))
        goto err;
    FUNC_10(VAR_7->issuer);
    if ((VAR_7->issuer = FUNC_9(VAR_3)) == ((void*)0))
        goto err;
    if (VAR_4 && *VAR_4
        && (VAR_7->locator = FUNC_11()) == ((void*)0))
        goto err;
    while (VAR_4 && *VAR_4) {
        if ((VAR_8 = FUNC_1()) == ((void*)0))
            goto err;
        if ((VAR_8->method = FUNC_5(VAR_1)) == ((void*)0))
            goto err;
        if ((VAR_6 = FUNC_3()) == ((void*)0))
            goto err;
        if (!FUNC_4((ASN1_STRING *)VAR_6, *VAR_4, -1))
            goto err;

        VAR_8->location->type = VAR_0;
        VAR_8->location->d.ia5 = VAR_6;
        VAR_6 = ((void*)0);
        if (!FUNC_12(VAR_7->locator, VAR_8))
            goto err;
        VAR_8 = ((void*)0);
        VAR_4++;
    }
    VAR_5 = FUNC_8(VAR_2, 0, VAR_7);
 err:
    FUNC_2(VAR_6);
    FUNC_0(VAR_8);
    FUNC_6(VAR_7);
    return VAR_5;
}
