
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _krb5_encryption_type {TYPE_1__* keytype; } ;
typedef int shaoutput ;
typedef int krb5_keyblock ;
typedef int krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_context ;
typedef int keylen ;
struct TYPE_6__ {void const* data; size_t length; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_5__ {int bits; } ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (char*,char*) ;
 int VAR_2 ;
 struct _krb5_encryption_type* FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ,int ,void*,size_t,int *) ;
 int FUNC_10 (int ,int ,int ,...) ;
 void* FUNC_11 (size_t) ;
 int FUNC_12 (unsigned char*,unsigned char*,int ) ;
 int FUNC_13 (void*,int ,int) ;
 int FUNC_14 (size_t,int) ;

krb5_error_code
FUNC_15(krb5_context VAR_3,
    krb5_enctype VAR_4,
    const void *VAR_5,
    size_t VAR_6,
    const heim_octet_string *VAR_7,
    const heim_octet_string *VAR_8,
    krb5_keyblock *VAR_9)
{
    struct _krb5_encryption_type *VAR_10 = FUNC_7(VAR_4);
    krb5_error_code VAR_11;
    size_t VAR_12, VAR_13;
    void *VAR_14;
    unsigned char VAR_15;
    unsigned char VAR_16[VAR_2];
    EVP_MD_CTX *VAR_17;

    if(VAR_10 == ((void*)0)) {
 FUNC_10(VAR_3, VAR_1,
          FUNC_6("encryption type %d not supported", ""),
          VAR_4);
 return VAR_1;
    }
    VAR_12 = (VAR_10->keytype->bits + 7) / 8;

    VAR_14 = FUNC_11(VAR_12);
    if (VAR_14 == ((void*)0)) {
 FUNC_10(VAR_3, VAR_0, FUNC_6("malloc: out of memory", ""));
 return VAR_0;
    }

    VAR_17 = FUNC_3();
    if (VAR_17 == ((void*)0)) {
 FUNC_8(VAR_14);
 FUNC_10(VAR_3, VAR_0, FUNC_6("malloc: out of memory", ""));
 return VAR_0;
    }

    VAR_15 = 0;
    VAR_13 = 0;
    do {

 FUNC_1(VAR_17, FUNC_5(), ((void*)0));
 FUNC_2(VAR_17, &VAR_15, 1);
 FUNC_2(VAR_17, VAR_5, VAR_6);

 if (VAR_7)
     FUNC_2(VAR_17, VAR_7->data, VAR_7->length);
 if (VAR_8)
     FUNC_2(VAR_17, VAR_8->data, VAR_8->length);

 FUNC_0(VAR_17, VAR_16, ((void*)0));

 FUNC_12((unsigned char *)VAR_14 + VAR_13,
        VAR_16,
        FUNC_14(VAR_12 - VAR_13, sizeof(VAR_16)));

 VAR_13 += sizeof(VAR_16);
 VAR_15++;
    } while(VAR_13 < VAR_12);
    FUNC_13(VAR_16, 0, sizeof(VAR_16));

    FUNC_4(VAR_17);

    VAR_11 = FUNC_9(VAR_3, VAR_4, VAR_14, VAR_12, VAR_9);
    FUNC_13(VAR_14, 0, sizeof(VAR_12));
    FUNC_8(VAR_14);
    return VAR_11;
}
