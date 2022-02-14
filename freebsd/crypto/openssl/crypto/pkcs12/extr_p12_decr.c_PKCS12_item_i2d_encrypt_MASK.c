
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_1__ ASN1_OCTET_STRING ;
typedef int ASN1_ITEM ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (void*,unsigned char**,int const*) ;
 int VAR_0 ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,char const*,int,unsigned char*,int,int *,int *,int) ;
 int FUNC_6 (int ,int ) ;

ASN1_OCTET_STRING *FUNC_7(X509_ALGOR *VAR_4,
                                           const ASN1_ITEM *VAR_5,
                                           const char *VAR_6, int VAR_7,
                                           void *VAR_8, int VAR_9)
{
    ASN1_OCTET_STRING *VAR_10 = ((void*)0);
    unsigned char *VAR_11 = ((void*)0);
    int VAR_12;

    if ((VAR_10 = FUNC_1()) == ((void*)0)) {
        FUNC_6(VAR_1, VAR_0);
        goto err;
    }
    VAR_12 = FUNC_2(VAR_8, &VAR_11, VAR_5);
    if (!VAR_11) {
        FUNC_6(VAR_1, VAR_2);
        goto err;
    }
    if (!FUNC_5(VAR_4, VAR_6, VAR_7, VAR_11, VAR_12, &VAR_10->data,
                          &VAR_10->length, 1)) {
        FUNC_6(VAR_1, VAR_3);
        FUNC_4(VAR_11);
        goto err;
    }
    if (VAR_9)
        FUNC_3(VAR_11, VAR_12);
    FUNC_4(VAR_11);
    return VAR_10;
 err:
    FUNC_0(VAR_10);
    return ((void*)0);
}
