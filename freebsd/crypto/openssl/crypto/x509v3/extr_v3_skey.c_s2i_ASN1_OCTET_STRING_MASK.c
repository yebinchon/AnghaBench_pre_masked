
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
typedef int X509V3_CTX ;
struct TYPE_5__ {long length; int * data; } ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (char const*,long*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

ASN1_OCTET_STRING *FUNC_4(X509V3_EXT_METHOD *VAR_2,
                                         X509V3_CTX *VAR_3, const char *VAR_4)
{
    ASN1_OCTET_STRING *VAR_5;
    long VAR_6;

    if ((VAR_5 = FUNC_1()) == ((void*)0)) {
        FUNC_3(VAR_1, VAR_0);
        return ((void*)0);
    }

    if ((VAR_5->data = FUNC_2(VAR_4, &VAR_6)) == ((void*)0)) {
        FUNC_0(VAR_5);
        return ((void*)0);
    }

    VAR_5->length = VAR_6;

    return VAR_5;

}
