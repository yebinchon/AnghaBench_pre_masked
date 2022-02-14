
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_4__ {int const* serial; int * name; int search_type; } ;
typedef TYPE_1__ OSSL_STORE_SEARCH ;
typedef int ASN1_INTEGER ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

OSSL_STORE_SEARCH *FUNC_2(X509_NAME *VAR_3,
                                                    const ASN1_INTEGER *VAR_4)
{
    OSSL_STORE_SEARCH *VAR_5 = FUNC_0(sizeof(*VAR_5));

    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_1,
                      VAR_0);
        return ((void*)0);
    }

    VAR_5->search_type = VAR_2;
    VAR_5->name = VAR_3;
    VAR_5->serial = VAR_4;
    return VAR_5;
}
