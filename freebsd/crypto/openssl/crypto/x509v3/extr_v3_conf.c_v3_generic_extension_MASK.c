
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_EXTENSION ;
typedef int X509V3_CTX ;
struct TYPE_5__ {unsigned char* data; long length; } ;
typedef TYPE_1__ ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int,char*,char const*) ;
 int * FUNC_4 (char const*,int ) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (char const*,long*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 int * FUNC_8 (int *,int *,int,TYPE_1__*) ;
 unsigned char* FUNC_9 (char const*,int *,long*) ;

__attribute__((used)) static X509_EXTENSION *FUNC_10(const char *VAR_4, const char *VAR_5,
                                            int VAR_6, int VAR_7,
                                            X509V3_CTX *VAR_8)
{
    unsigned char *VAR_9 = ((void*)0);
    long VAR_10 = 0;
    ASN1_OBJECT *VAR_11 = ((void*)0);
    ASN1_OCTET_STRING *VAR_12 = ((void*)0);
    X509_EXTENSION *VAR_13 = ((void*)0);

    if ((VAR_11 = FUNC_4(VAR_4, 0)) == ((void*)0)) {
        FUNC_7(VAR_1,
                  VAR_2);
        FUNC_3(2, "name=", VAR_4);
        goto err;
    }

    if (VAR_7 == 1)
        VAR_9 = FUNC_6(VAR_5, &VAR_10);
    else if (VAR_7 == 2)
        VAR_9 = FUNC_9(VAR_5, VAR_8, &VAR_10);

    if (VAR_9 == ((void*)0)) {
        FUNC_7(VAR_1,
                  VAR_3);
        FUNC_3(2, "value=", VAR_5);
        goto err;
    }

    if ((VAR_12 = FUNC_2()) == ((void*)0)) {
        FUNC_7(VAR_1, VAR_0);
        goto err;
    }

    VAR_12->data = VAR_9;
    VAR_12->length = VAR_10;
    VAR_9 = ((void*)0);

    VAR_13 = FUNC_8(((void*)0), VAR_11, VAR_6, VAR_12);

 err:
    FUNC_0(VAR_11);
    FUNC_1(VAR_12);
    FUNC_5(VAR_9);
    return VAR_13;

}
